
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_spq_entry {int dummy; } ;
struct qed_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct qed_rdma_qp {int icid; } ;
struct qed_iwarp_send_rtr_in {struct qed_iwarp_ep* ep_context; } ;
struct qed_iwarp_ep {int tcp_cid; struct qed_rdma_qp* qp; } ;
struct TYPE_2__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_1__ hw_info; } ;
typedef int init_data ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

int FUNC_5(void *VAR_5, struct qed_iwarp_send_rtr_in *VAR_6)
{
 struct qed_hwfn *VAR_7 = VAR_5;
 struct qed_sp_init_data VAR_8;
 struct qed_spq_entry *VAR_9;
 struct qed_iwarp_ep *VAR_10;
 struct qed_rdma_qp *VAR_11;
 int VAR_12;

 VAR_10 = VAR_6->ep_context;
 if (!VAR_10) {
  FUNC_0(VAR_7, "Ep Context receive in send_rtr is NULL\n");
  return -VAR_0;
 }

 VAR_11 = VAR_10->qp;

 FUNC_1(VAR_7, VAR_3, "QP(0x%x) EP(0x%x)\n",
     VAR_11->icid, VAR_10->tcp_cid);

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.cid = VAR_11->icid;
 VAR_8.opaque_fid = VAR_7->hw_info.opaque_fid;
 VAR_8.comp_mode = VAR_4;

 VAR_12 = FUNC_3(VAR_7, &VAR_9,
     VAR_1,
     VAR_2, &VAR_8);

 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_4(VAR_7, VAR_9, ((void*)0));

 FUNC_1(VAR_7, VAR_3, "rc = 0x%x\n", VAR_12);

 return VAR_12;
}
