
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qed_spq_entry {int dummy; } ;
struct qed_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct qed_rdma_qp {int icid; } ;
struct TYPE_3__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_2__* p_rdma_info; TYPE_1__ hw_info; } ;
typedef int init_data ;
struct TYPE_4__ {int proto; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

int FUNC_4(struct qed_hwfn *VAR_3, struct qed_rdma_qp *VAR_4)
{
 struct qed_sp_init_data VAR_5;
 struct qed_spq_entry *VAR_6;
 int VAR_7;


 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.cid = VAR_4->icid;
 VAR_5.opaque_fid = VAR_3->hw_info.opaque_fid;
 VAR_5.comp_mode = VAR_2;

 VAR_7 = FUNC_2(VAR_3, &VAR_6,
     VAR_0,
     VAR_3->p_rdma_info->proto, &VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_3, VAR_6, ((void*)0));

 FUNC_0(VAR_3, VAR_1, "QP(0x%x) rc = %d\n", VAR_4->icid, VAR_7);

 return VAR_7;
}
