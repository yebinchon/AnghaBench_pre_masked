
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwarp_modify_qp_ramrod_data {int transition_to_state; int flags; } ;
struct TYPE_6__ {struct iwarp_modify_qp_ramrod_data iwarp_modify_qp; } ;
struct qed_spq_entry {TYPE_3__ ramrod; } ;
struct qed_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct qed_rdma_qp {scalar_t__ iwarp_state; int icid; } ;
struct TYPE_4__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_2__* p_rdma_info; TYPE_1__ hw_info; } ;
typedef int init_data ;
struct TYPE_5__ {int proto; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

__attribute__((used)) static int FUNC_5(struct qed_hwfn *VAR_7, struct qed_rdma_qp *VAR_8)
{
 struct iwarp_modify_qp_ramrod_data *VAR_9;
 struct qed_sp_init_data VAR_10;
 struct qed_spq_entry *VAR_11;
 int VAR_12;


 FUNC_2(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.cid = VAR_8->icid;
 VAR_10.opaque_fid = VAR_7->hw_info.opaque_fid;
 VAR_10.comp_mode = VAR_6;

 VAR_12 = FUNC_3(VAR_7, &VAR_11,
     VAR_3,
     VAR_7->p_rdma_info->proto, &VAR_10);
 if (VAR_12)
  return VAR_12;

 VAR_9 = &VAR_11->ramrod.iwarp_modify_qp;
 FUNC_1(VAR_9->flags, VAR_0,
    0x1);
 if (VAR_8->iwarp_state == VAR_4)
  VAR_9->transition_to_state = VAR_1;
 else
  VAR_9->transition_to_state = VAR_2;

 VAR_12 = FUNC_4(VAR_7, VAR_11, ((void*)0));

 FUNC_0(VAR_7, VAR_5, "QP(0x%x)rc=%d\n", VAR_8->icid, VAR_12);

 return VAR_12;
}
