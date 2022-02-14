
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int dummy; } ;
struct TYPE_3__ {scalar_t__ vendor_cmd; } ;
struct TYPE_4__ {TYPE_1__ h_vendor; } ;
struct fc_bsg_request {TYPE_2__ rqst_data; } ;
struct fc_bsg_reply {int result; scalar_t__ reply_payload_rcv_len; } ;
struct dfc_mbox_req {scalar_t__ extSeqNum; scalar_t__ extMboxTag; } ;
struct bsg_job {int request_len; int * dd_data; struct fc_bsg_reply* reply; struct fc_bsg_request* request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bsg_job*,int,scalar_t__) ;
 int FUNC_1 (struct bsg_job*) ;
 int FUNC_2 (struct lpfc_hba*,struct bsg_job*,struct lpfc_vport*) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*,int,int) ;
 struct lpfc_vport* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct bsg_job *VAR_2)
{
 struct lpfc_vport *VAR_3 = FUNC_4(FUNC_1(VAR_2));
 struct fc_bsg_request *VAR_4 = VAR_2->request;
 struct fc_bsg_reply *VAR_5 = VAR_2->reply;
 struct lpfc_hba *VAR_6 = VAR_3->phba;
 struct dfc_mbox_req *VAR_7;
 int VAR_8 = 0;


 VAR_5->reply_payload_rcv_len = 0;
 if (VAR_2->request_len <
     sizeof(struct fc_bsg_request) + sizeof(struct dfc_mbox_req)) {
  FUNC_3(VAR_6, VAR_0, VAR_1,
    "2737 Mix-and-match backward compatibility "
    "between MBOX_REQ old size:%d and "
    "new request size:%d\n",
    (int)(VAR_2->request_len -
          sizeof(struct fc_bsg_request)),
    (int)sizeof(struct dfc_mbox_req));
  VAR_7 = (struct dfc_mbox_req *)
    VAR_4->rqst_data.h_vendor.vendor_cmd;
  VAR_7->extMboxTag = 0;
  VAR_7->extSeqNum = 0;
 }

 VAR_8 = FUNC_2(VAR_6, VAR_2, VAR_3);

 if (VAR_8 == 0) {

  VAR_5->result = 0;
  VAR_2->dd_data = ((void*)0);
  FUNC_0(VAR_2, VAR_5->result,
          VAR_5->reply_payload_rcv_len);
 } else if (VAR_8 == 1)

  VAR_8 = 0;
 else {

  VAR_5->result = VAR_8;
  VAR_2->dd_data = ((void*)0);
 }

 return VAR_8;
}
