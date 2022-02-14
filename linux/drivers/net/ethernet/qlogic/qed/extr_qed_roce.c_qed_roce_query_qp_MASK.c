
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct roce_query_qp_resp_ramrod_data {int output_params_addr; } ;
struct roce_query_qp_resp_output_params {int flags; int psn; int err_flag; } ;
struct roce_query_qp_req_ramrod_data {int output_params_addr; } ;
struct roce_query_qp_req_output_params {int flags; int psn; int err_flag; } ;
struct TYPE_6__ {struct roce_query_qp_req_ramrod_data roce_query_qp_req; struct roce_query_qp_resp_ramrod_data roce_query_qp_resp; } ;
struct qed_spq_entry {TYPE_2__ ramrod; } ;
struct qed_sp_init_data {scalar_t__ cid; int comp_mode; int opaque_fid; } ;
struct qed_rdma_query_qp_out_params {int draining; void* state; void* sq_psn; void* rq_psn; } ;
struct qed_rdma_qp {void* cur_state; scalar_t__ icid; void* sq_psn; int req_offloaded; int resp_offloaded; void* rq_psn; } ;
struct TYPE_5__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_4__* cdev; TYPE_1__ hw_info; } ;
typedef int init_data ;
typedef int dma_addr_t ;
struct TYPE_8__ {TYPE_3__* pdev; } ;
struct TYPE_7__ {int dev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct qed_hwfn*,char*) ;
 int FUNC_2 (struct qed_hwfn*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (void*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (int *,int,int *,int ) ;
 int FUNC_5 (int *,int,struct roce_query_qp_resp_output_params*,int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

int FUNC_10(struct qed_hwfn *VAR_11,
        struct qed_rdma_qp *VAR_12,
        struct qed_rdma_query_qp_out_params *VAR_13)
{
 struct roce_query_qp_resp_output_params *VAR_14;
 struct roce_query_qp_req_output_params *VAR_15;
 struct roce_query_qp_resp_ramrod_data *VAR_16;
 struct roce_query_qp_req_ramrod_data *VAR_17;
 struct qed_sp_init_data VAR_18;
 dma_addr_t VAR_19;
 dma_addr_t VAR_20;
 struct qed_spq_entry *VAR_21;
 bool VAR_22;
 bool VAR_23;
 bool VAR_24;
 int VAR_25 = -VAR_1;

 if ((!(VAR_12->resp_offloaded)) && (!(VAR_12->req_offloaded))) {



  VAR_13->draining = 0;
  VAR_13->rq_psn = VAR_12->rq_psn;
  VAR_13->sq_psn = VAR_12->sq_psn;
  VAR_13->state = VAR_12->cur_state;

  FUNC_2(VAR_11, VAR_4, "No QPs as no offload\n");
  return 0;
 }

 if (!(VAR_12->resp_offloaded)) {
  FUNC_1(VAR_11,
     "The responder's qp should be offloaded before requester's\n");
  return -VAR_0;
 }


 VAR_14 = (struct roce_query_qp_resp_output_params *)
     FUNC_4(&VAR_11->cdev->pdev->dev,
          sizeof(*VAR_14),
          &VAR_19, VAR_2);
 if (!VAR_14) {
  FUNC_1(VAR_11,
     "qed query qp failed: cannot allocate memory (ramrod)\n");
  return VAR_25;
 }


 FUNC_7(&VAR_18, 0, sizeof(VAR_18));
 VAR_18.cid = VAR_12->icid;
 VAR_18.opaque_fid = VAR_11->hw_info.opaque_fid;
 VAR_18.comp_mode = VAR_6;
 VAR_25 = FUNC_8(VAR_11, &VAR_21, VAR_10,
     VAR_3, &VAR_18);
 if (VAR_25)
  goto err_resp;

 VAR_16 = &VAR_21->ramrod.roce_query_qp_resp;
 FUNC_0(VAR_16->output_params_addr, VAR_19);

 VAR_25 = FUNC_9(VAR_11, VAR_21, ((void*)0));
 if (VAR_25)
  goto err_resp;

 VAR_13->rq_psn = FUNC_6(VAR_14->psn);
 VAR_22 = FUNC_3(FUNC_6(VAR_14->err_flag),
     VAR_9);

 FUNC_5(&VAR_11->cdev->pdev->dev, sizeof(*VAR_14),
     VAR_14, VAR_19);

 if (!(VAR_12->req_offloaded)) {

  VAR_13->sq_psn = VAR_12->sq_psn;
  VAR_13->draining = 0;

  if (VAR_22)
   VAR_12->cur_state = VAR_5;

  VAR_13->state = VAR_12->cur_state;

  return 0;
 }


 VAR_15 = (struct roce_query_qp_req_output_params *)
      FUNC_4(&VAR_11->cdev->pdev->dev,
           sizeof(*VAR_15),
           &VAR_20,
           VAR_2);
 if (!VAR_15) {
  VAR_25 = -VAR_1;
  FUNC_1(VAR_11,
     "qed query qp failed: cannot allocate memory (ramrod)\n");
  return VAR_25;
 }


 VAR_18.cid = VAR_12->icid + 1;
 VAR_25 = FUNC_8(VAR_11, &VAR_21, VAR_10,
     VAR_3, &VAR_18);
 if (VAR_25)
  goto err_req;

 VAR_17 = &VAR_21->ramrod.roce_query_qp_req;
 FUNC_0(VAR_17->output_params_addr, VAR_20);

 VAR_25 = FUNC_9(VAR_11, VAR_21, ((void*)0));
 if (VAR_25)
  goto err_req;

 VAR_13->sq_psn = FUNC_6(VAR_15->psn);
 VAR_23 = FUNC_3(FUNC_6(VAR_15->flags),
     VAR_7);
 VAR_24 =
  FUNC_3(FUNC_6(VAR_15->flags),
     VAR_8);

 FUNC_5(&VAR_11->cdev->pdev->dev, sizeof(*VAR_15),
     VAR_15, VAR_20);

 VAR_13->draining = 0;

 if (VAR_22 || VAR_23)
  VAR_12->cur_state = VAR_5;
 else if (VAR_24)
  VAR_13->draining = 1;
 VAR_13->state = VAR_12->cur_state;

 return 0;

err_req:
 FUNC_5(&VAR_11->cdev->pdev->dev, sizeof(*VAR_15),
     VAR_15, VAR_20);
 return VAR_25;
err_resp:
 FUNC_5(&VAR_11->cdev->pdev->dev, sizeof(*VAR_14),
     VAR_14, VAR_19);
 return VAR_25;
}
