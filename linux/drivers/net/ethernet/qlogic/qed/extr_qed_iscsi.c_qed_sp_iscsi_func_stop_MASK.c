
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int op_code; } ;
struct iscsi_spe_func_dstry {TYPE_3__ hdr; } ;
struct TYPE_5__ {struct iscsi_spe_func_dstry iscsi_destroy; } ;
struct qed_spq_entry {TYPE_2__ ramrod; } ;
struct qed_spq_comp_cb {int dummy; } ;
struct qed_sp_init_data {int comp_mode; struct qed_spq_comp_cb* p_comp_data; int opaque_fid; int cid; } ;
struct TYPE_4__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_1__ hw_info; } ;
typedef int init_data ;
typedef enum spq_mode { ____Placeholder_spq_mode } spq_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_2 (struct qed_hwfn*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;
 int FUNC_4 (struct qed_hwfn*,int ) ;

__attribute__((used)) static int FUNC_5(struct qed_hwfn *VAR_2,
      enum spq_mode VAR_3,
      struct qed_spq_comp_cb *VAR_4)
{
 struct iscsi_spe_func_dstry *VAR_5 = ((void*)0);
 struct qed_spq_entry *VAR_6 = ((void*)0);
 struct qed_sp_init_data VAR_7;
 int VAR_8 = 0;


 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.cid = FUNC_2(VAR_2);
 VAR_7.opaque_fid = VAR_2->hw_info.opaque_fid;
 VAR_7.comp_mode = VAR_3;
 VAR_7.p_comp_data = VAR_4;

 VAR_8 = FUNC_1(VAR_2, &VAR_6,
     VAR_0,
     VAR_1, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_5 = &VAR_6->ramrod.iscsi_destroy;
 VAR_5->hdr.op_code = VAR_0;

 VAR_8 = FUNC_3(VAR_2, VAR_6, ((void*)0));

 FUNC_4(VAR_2, VAR_1);
 return VAR_8;
}
