
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct hwrm_ring_grp_free_input {int ring_group_id; int member_0; } ;
struct bnxt {int flags; size_t cp_nr_rings; int hwrm_cmd_lock; TYPE_1__* grp_info; } ;
typedef int req ;
struct TYPE_2__ {scalar_t__ fw_grp_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bnxt*,struct hwrm_ring_grp_free_input*,int,int ) ;
 int FUNC_1 (struct bnxt*,struct hwrm_ring_grp_free_input*,int ,int,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct bnxt *VAR_4)
{
 u16 VAR_5;
 u32 VAR_6 = 0;
 struct hwrm_ring_grp_free_input VAR_7 = {0};

 if (!VAR_4->grp_info || (VAR_4->flags & VAR_0))
  return 0;

 FUNC_1(VAR_4, &VAR_7, VAR_2, -1, -1);

 FUNC_3(&VAR_4->hwrm_cmd_lock);
 for (VAR_5 = 0; VAR_5 < VAR_4->cp_nr_rings; VAR_5++) {
  if (VAR_4->grp_info[VAR_5].fw_grp_id == VAR_3)
   continue;
  VAR_7.ring_group_id =
   FUNC_2(VAR_4->grp_info[VAR_5].fw_grp_id);

  VAR_6 = FUNC_0(VAR_4, &VAR_7, sizeof(VAR_7),
     VAR_1);
  VAR_4->grp_info[VAR_5].fw_grp_id = VAR_3;
 }
 FUNC_4(&VAR_4->hwrm_cmd_lock);
 return VAR_6;
}
