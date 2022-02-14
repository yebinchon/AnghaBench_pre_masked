
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct ulp_bde64 {int dummy; } ;
struct send_mgmt_resp {int tag; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {int phys; scalar_t__ virt; int list; } ;
struct TYPE_4__ {scalar_t__ vendor_cmd; } ;
struct TYPE_5__ {TYPE_1__ h_vendor; } ;
struct fc_bsg_request {TYPE_2__ rqst_data; } ;
struct fc_bsg_reply {int result; scalar_t__ reply_payload_rcv_len; } ;
struct TYPE_6__ {scalar_t__ payload_len; } ;
struct bsg_job {int * dd_data; TYPE_3__ request_payload; struct fc_bsg_reply* reply; struct fc_bsg_request* request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct bsg_job*) ;
 int FUNC_2 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_3 (int,int ) ;
 struct lpfc_dmabuf* FUNC_4 (struct lpfc_hba*,scalar_t__,int,struct ulp_bde64*,int*) ;
 int FUNC_5 (struct lpfc_dmabuf*,TYPE_3__*,scalar_t__,int) ;
 int FUNC_6 (struct lpfc_hba*,struct lpfc_dmabuf*) ;
 int FUNC_7 (struct lpfc_hba*,struct bsg_job*,int ,struct lpfc_dmabuf*,struct lpfc_dmabuf*,int) ;
 scalar_t__ FUNC_8 (struct lpfc_hba*,int ,int *) ;
 int FUNC_9 (struct lpfc_hba*,scalar_t__,int ) ;
 struct lpfc_vport* FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(struct bsg_job *VAR_7)
{
 struct lpfc_vport *VAR_8 = FUNC_10(FUNC_1(VAR_7));
 struct lpfc_hba *VAR_9 = VAR_8->phba;
 struct fc_bsg_request *VAR_10 = VAR_7->request;
 struct fc_bsg_reply *VAR_11 = VAR_7->reply;
 struct send_mgmt_resp *VAR_12 = (struct send_mgmt_resp *)
  VAR_10->rqst_data.h_vendor.vendor_cmd;
 struct ulp_bde64 *VAR_13;
 struct lpfc_dmabuf *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 int VAR_16;
 uint32_t VAR_17 = VAR_12->tag;
 unsigned long VAR_18 =
   (unsigned long)VAR_7->request_payload.payload_len;
 int VAR_19 = 0;


 VAR_11->reply_payload_rcv_len = 0;

 if (!VAR_18 || (VAR_18 > (80 * VAR_0))) {
  VAR_19 = -VAR_3;
  goto send_mgmt_rsp_exit;
 }

 VAR_14 = FUNC_3(sizeof(struct lpfc_dmabuf), VAR_4);
 if (!VAR_14) {
  VAR_19 = -VAR_2;
  goto send_mgmt_rsp_exit;
 }

 VAR_14->virt = FUNC_8(VAR_9, 0, &VAR_14->phys);
 if (!VAR_14->virt) {
  VAR_19 = -VAR_2;
  goto send_mgmt_rsp_free_bmp;
 }

 FUNC_0(&VAR_14->list);
 VAR_13 = (struct ulp_bde64 *) VAR_14->virt;
 VAR_16 = (VAR_6/sizeof(struct ulp_bde64));
 VAR_15 = FUNC_4(VAR_9, VAR_7->request_payload.payload_len,
         1, VAR_13, &VAR_16);
 if (!VAR_15) {
  VAR_19 = -VAR_2;
  goto send_mgmt_rsp_free_bmp;
 }
 FUNC_5(VAR_15, &VAR_7->request_payload,
      VAR_7->request_payload.payload_len, 1);

 VAR_19 = FUNC_7(VAR_9, VAR_7, VAR_17, VAR_15, VAR_14, VAR_16);

 if (VAR_19 == VAR_5)
  return 0;

 VAR_19 = -VAR_1;

 FUNC_6(VAR_9, VAR_15);

send_mgmt_rsp_free_bmp:
 if (VAR_14->virt)
  FUNC_9(VAR_9, VAR_14->virt, VAR_14->phys);
 FUNC_2(VAR_14);
send_mgmt_rsp_exit:

 VAR_11->result = VAR_19;
 VAR_7->dd_data = ((void*)0);
 return VAR_19;
}
