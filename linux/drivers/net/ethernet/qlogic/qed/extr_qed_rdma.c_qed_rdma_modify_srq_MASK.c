
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_8__ {void* opaque_fid; void* srq_idx; } ;
struct rdma_srq_modify_ramrod_data {int wqe_limit; TYPE_4__ srq_id; } ;
struct TYPE_6__ {struct rdma_srq_modify_ramrod_data rdma_modify_srq; } ;
struct qed_spq_entry {TYPE_2__ ramrod; } ;
struct qed_sp_init_data {int comp_mode; int opaque_fid; } ;
struct qed_rdma_modify_srq_in_params {int srq_id; int wqe_limit; } ;
struct TYPE_7__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_3__ hw_info; TYPE_1__* p_rdma_info; } ;
struct TYPE_5__ {int proto; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

__attribute__((used)) static int FUNC_5(void *VAR_3,
          struct qed_rdma_modify_srq_in_params *VAR_4)
{
 struct rdma_srq_modify_ramrod_data *VAR_5;
 struct qed_sp_init_data VAR_6 = {};
 struct qed_hwfn *VAR_7 = VAR_3;
 struct qed_spq_entry *VAR_8;
 u16 VAR_9;
 int VAR_10;

 VAR_6.opaque_fid = VAR_7->hw_info.opaque_fid;
 VAR_6.comp_mode = VAR_1;

 VAR_10 = FUNC_3(VAR_7, &VAR_8,
     VAR_2,
     VAR_7->p_rdma_info->proto, &VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_5 = &VAR_8->ramrod.rdma_modify_srq;
 VAR_5->srq_id.srq_idx = FUNC_1(VAR_4->srq_id);
 VAR_9 = VAR_7->hw_info.opaque_fid;
 VAR_5->srq_id.opaque_fid = FUNC_1(VAR_9);
 VAR_5->wqe_limit = FUNC_2(VAR_4->wqe_limit);

 VAR_10 = FUNC_4(VAR_7, VAR_8, ((void*)0));
 if (VAR_10)
  return VAR_10;

 FUNC_0(VAR_7, VAR_0, "modified SRQ id = %x",
     VAR_4->srq_id);

 return VAR_10;
}
