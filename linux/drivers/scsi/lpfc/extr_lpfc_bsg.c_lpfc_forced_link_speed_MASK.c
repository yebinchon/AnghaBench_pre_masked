
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int hba_flag; } ;
struct get_forced_link_speed_support {int dummy; } ;
struct forced_link_speed_support_reply {int supported; } ;
struct fc_bsg_request {int dummy; } ;
struct TYPE_3__ {scalar_t__ vendor_rsp; } ;
struct TYPE_4__ {TYPE_1__ vendor_reply; } ;
struct fc_bsg_reply {int result; int reply_payload_rcv_len; TYPE_2__ reply_data; } ;
struct bsg_job {int request_len; int reply_len; struct fc_bsg_reply* reply; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bsg_job*,int,int ) ;
 struct Scsi_Host* FUNC_1 (struct bsg_job*) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*) ;
 struct lpfc_vport* FUNC_3 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_4(struct bsg_job *VAR_6)
{
 struct Scsi_Host *VAR_7 = FUNC_1(VAR_6);
 struct lpfc_vport *VAR_8 = FUNC_3(VAR_7);
 struct lpfc_hba *VAR_9 = VAR_8->phba;
 struct fc_bsg_reply *VAR_10 = VAR_6->reply;
 struct forced_link_speed_support_reply *VAR_11;
 int VAR_12 = 0;

 if (VAR_6->request_len <
     sizeof(struct fc_bsg_request) +
     sizeof(struct get_forced_link_speed_support)) {
  FUNC_2(VAR_9, VAR_2, VAR_3,
    "0048 Received FORCED_LINK_SPEED request "
    "below minimum size\n");
  VAR_12 = -VAR_0;
  goto job_error;
 }

 VAR_11 = (struct forced_link_speed_support_reply *)
  VAR_10->reply_data.vendor_reply.vendor_rsp;

 if (VAR_6->reply_len <
     sizeof(struct fc_bsg_request) +
     sizeof(struct forced_link_speed_support_reply)) {
  FUNC_2(VAR_9, VAR_2, VAR_3,
    "0049 Received FORCED_LINK_SPEED reply below "
    "minimum size\n");
  VAR_12 = -VAR_0;
  goto job_error;
 }

 VAR_11->supported = (VAR_9->hba_flag & VAR_1)
       ? VAR_5
       : VAR_4;
job_error:
 VAR_10->result = VAR_12;
 if (VAR_12 == 0)
  FUNC_0(VAR_6, VAR_10->result,
          VAR_10->reply_payload_rcv_len);
 return VAR_12;
}
