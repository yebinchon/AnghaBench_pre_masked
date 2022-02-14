
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int * macs; } ;
struct TYPE_7__ {scalar_t__ is_trusted_configured; } ;
struct TYPE_6__ {TYPE_1__* p_virt; } ;
struct qed_vf_info {TYPE_4__ shadow_config; TYPE_3__ p_vf_info; TYPE_2__ bulletin; } ;
struct qed_hwfn {int dummy; } ;
struct qed_filter_ucast {scalar_t__ opcode; int mac; } ;
struct TYPE_5__ {int valid_bitmap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct qed_hwfn *VAR_8,
     struct qed_vf_info *VAR_9,
     struct qed_filter_ucast *VAR_10)
{
 int VAR_11;


 if (VAR_9->bulletin.p_virt->valid_bitmap & FUNC_0(VAR_1))
  return 0;


 if (VAR_9->p_vf_info.is_trusted_configured)
  return 0;


 if (VAR_10->opcode == VAR_5) {
  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
   if (FUNC_4(VAR_9->shadow_config.macs[VAR_11],
          VAR_10->mac)) {
    FUNC_2(VAR_9->shadow_config.macs[VAR_11]);
    break;
   }
  }

  if (VAR_11 == VAR_2) {
   FUNC_1(VAR_8, VAR_7,
       "MAC isn't configured\n");
   return -VAR_0;
  }
 } else if (VAR_10->opcode == VAR_6 ||
     VAR_10->opcode == VAR_4) {
  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
   FUNC_2(VAR_9->shadow_config.macs[VAR_11]);
 }


 if (VAR_10->opcode != VAR_3 &&
     VAR_10->opcode != VAR_6)
  return 0;

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  if (FUNC_5(VAR_9->shadow_config.macs[VAR_11])) {
   FUNC_3(VAR_9->shadow_config.macs[VAR_11],
     VAR_10->mac);
   FUNC_1(VAR_8, VAR_7,
       "Added MAC at %d entry in shadow\n", VAR_11);
   break;
  }
 }

 if (VAR_11 == VAR_2) {
  FUNC_1(VAR_8, VAR_7, "No available place for MAC\n");
  return -VAR_0;
 }

 return 0;
}
