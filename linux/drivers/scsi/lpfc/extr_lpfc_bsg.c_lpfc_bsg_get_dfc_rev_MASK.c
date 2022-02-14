
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int dummy; } ;
struct TYPE_6__ {int a_Minor; int a_Major; } ;
struct get_mgmt_rev_reply {TYPE_3__ info; } ;
struct get_mgmt_rev {int dummy; } ;
struct fc_bsg_request {int dummy; } ;
struct TYPE_4__ {scalar_t__ vendor_rsp; } ;
struct TYPE_5__ {TYPE_1__ vendor_reply; } ;
struct fc_bsg_reply {int result; int reply_payload_rcv_len; TYPE_2__ reply_data; } ;
struct bsg_job {int request_len; int reply_len; struct fc_bsg_reply* reply; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bsg_job*,int,int ) ;
 int FUNC_1 (struct bsg_job*) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*) ;
 struct lpfc_vport* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct bsg_job *VAR_5)
{
 struct lpfc_vport *VAR_6 = FUNC_3(FUNC_1(VAR_5));
 struct fc_bsg_reply *VAR_7 = VAR_5->reply;
 struct lpfc_hba *VAR_8 = VAR_6->phba;
 struct get_mgmt_rev_reply *VAR_9;
 int VAR_10 = 0;

 if (VAR_5->request_len <
     sizeof(struct fc_bsg_request) + sizeof(struct get_mgmt_rev)) {
  FUNC_2(VAR_8, VAR_1, VAR_2,
    "2740 Received GET_DFC_REV request below "
    "minimum size\n");
  VAR_10 = -VAR_0;
  goto job_error;
 }

 VAR_9 = (struct get_mgmt_rev_reply *)
  VAR_7->reply_data.vendor_reply.vendor_rsp;

 if (VAR_5->reply_len <
     sizeof(struct fc_bsg_request) + sizeof(struct get_mgmt_rev_reply)) {
  FUNC_2(VAR_8, VAR_1, VAR_2,
    "2741 Received GET_DFC_REV reply below "
    "minimum size\n");
  VAR_10 = -VAR_0;
  goto job_error;
 }

 VAR_9->info.a_Major = VAR_3;
 VAR_9->info.a_Minor = VAR_4;
job_error:
 VAR_7->result = VAR_10;
 if (VAR_10 == 0)
  FUNC_0(VAR_5, VAR_7->result,
          VAR_7->reply_payload_rcv_len);
 return VAR_10;
}
