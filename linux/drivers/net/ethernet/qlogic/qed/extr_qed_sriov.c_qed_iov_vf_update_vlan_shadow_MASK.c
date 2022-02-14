
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* vlans; } ;
struct TYPE_6__ {TYPE_1__* p_virt; } ;
struct qed_vf_info {int relative_vf_id; TYPE_4__ shadow_config; TYPE_2__ bulletin; } ;
struct qed_hwfn {int dummy; } ;
struct qed_filter_ucast {scalar_t__ opcode; scalar_t__ vlan; } ;
struct TYPE_7__ {int used; scalar_t__ vid; } ;
struct TYPE_5__ {int valid_bitmap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_2(struct qed_hwfn *VAR_8,
      struct qed_vf_info *VAR_9,
      struct qed_filter_ucast *VAR_10)
{
 int VAR_11;


 if (VAR_10->opcode == VAR_4) {
  for (VAR_11 = 0; VAR_11 < VAR_1 + 1; VAR_11++)
   if (VAR_9->shadow_config.vlans[VAR_11].used &&
       VAR_9->shadow_config.vlans[VAR_11].vid ==
       VAR_10->vlan) {
    VAR_9->shadow_config.vlans[VAR_11].used = 0;
    break;
   }
  if (VAR_11 == VAR_1 + 1) {
   FUNC_1(VAR_8,
       VAR_6,
       "VF [%d] - Tries to remove a non-existing vlan\n",
       VAR_9->relative_vf_id);
   return -VAR_0;
  }
 } else if (VAR_10->opcode == VAR_5 ||
     VAR_10->opcode == VAR_3) {
  for (VAR_11 = 0; VAR_11 < VAR_1 + 1; VAR_11++)
   VAR_9->shadow_config.vlans[VAR_11].used = 0;
 }




 if (VAR_9->bulletin.p_virt->valid_bitmap & FUNC_0(VAR_7))
  return 0;

 if (VAR_10->opcode == VAR_2 ||
     VAR_10->opcode == VAR_5) {
  for (VAR_11 = 0; VAR_11 < VAR_1 + 1; VAR_11++) {
   if (VAR_9->shadow_config.vlans[VAR_11].used)
    continue;

   VAR_9->shadow_config.vlans[VAR_11].used = 1;
   VAR_9->shadow_config.vlans[VAR_11].vid = VAR_10->vlan;
   break;
  }

  if (VAR_11 == VAR_1 + 1) {
   FUNC_1(VAR_8,
       VAR_6,
       "VF [%d] - Tries to configure more than %d vlan filters\n",
       VAR_9->relative_vf_id,
       VAR_1 + 1);
   return -VAR_0;
  }
 }

 return 0;
}
