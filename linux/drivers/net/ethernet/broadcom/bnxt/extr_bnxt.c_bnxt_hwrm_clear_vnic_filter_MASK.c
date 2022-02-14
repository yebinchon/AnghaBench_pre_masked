
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct hwrm_cfa_l2_filter_free_input {int l2_filter_id; int member_0; } ;
struct bnxt_vnic_info {size_t uc_filter_count; int * fw_l2_filter_id; } ;
struct bnxt {int hwrm_cmd_lock; struct bnxt_vnic_info* vnic_info; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*,struct hwrm_cfa_l2_filter_free_input*,int,int ) ;
 int FUNC_1 (struct bnxt*,struct hwrm_cfa_l2_filter_free_input*,int ,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct bnxt *VAR_2)
{
 u16 VAR_3, VAR_4, VAR_5 = 1;
 int VAR_6 = 0;


 FUNC_2(&VAR_2->hwrm_cmd_lock);
 for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
  struct bnxt_vnic_info *VAR_7 = &VAR_2->vnic_info[VAR_3];

  for (VAR_4 = 0; VAR_4 < VAR_7->uc_filter_count; VAR_4++) {
   struct hwrm_cfa_l2_filter_free_input VAR_8 = {0};

   FUNC_1(VAR_2, &VAR_8,
            VAR_0, -1, -1);

   VAR_8.l2_filter_id = VAR_7->fw_l2_filter_id[VAR_4];

   VAR_6 = FUNC_0(VAR_2, &VAR_8, sizeof(VAR_8),
      VAR_1);
  }
  VAR_7->uc_filter_count = 0;
 }
 FUNC_3(&VAR_2->hwrm_cmd_lock);

 return VAR_6;
}
