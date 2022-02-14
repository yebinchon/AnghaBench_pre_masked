
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_ras_fwlog {int ras_active; int fw_loglevel; } ;
struct lpfc_hba {int cfg_ras_fwlog_buffsize; struct lpfc_ras_fwlog ras_fwlog; } ;
struct lpfc_bsg_ras_req {int dummy; } ;
struct lpfc_bsg_get_ras_config_reply {int log_buff_sz; int log_level; int state; } ;
struct fc_bsg_request {int dummy; } ;
struct TYPE_3__ {scalar_t__ vendor_rsp; } ;
struct TYPE_4__ {TYPE_1__ vendor_reply; } ;
struct fc_bsg_reply {int result; int reply_payload_rcv_len; TYPE_2__ reply_data; } ;
struct bsg_job {int request_len; struct fc_bsg_reply* reply; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bsg_job*,int,int ) ;
 struct Scsi_Host* FUNC_1 (struct bsg_job*) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*) ;
 struct lpfc_vport* FUNC_4 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_5(struct bsg_job *VAR_5)
{
 struct Scsi_Host *VAR_6 = FUNC_1(VAR_5);
 struct lpfc_vport *VAR_7 = FUNC_4(VAR_6);
 struct fc_bsg_reply *VAR_8 = VAR_5->reply;
 struct lpfc_hba *VAR_9 = VAR_7->phba;
 struct lpfc_bsg_get_ras_config_reply *VAR_10;
 struct lpfc_ras_fwlog *VAR_11 = &VAR_9->ras_fwlog;
 int VAR_12 = 0;

 if (VAR_5->request_len <
     sizeof(struct fc_bsg_request) +
     sizeof(struct lpfc_bsg_ras_req)) {
  FUNC_3(VAR_9, VAR_1, VAR_2,
    "6192 FW_LOG request received "
    "below minimum size\n");
  VAR_12 = -VAR_0;
  goto ras_job_error;
 }


 VAR_12 = FUNC_2(VAR_9);
 if (VAR_12)
  goto ras_job_error;

 VAR_10 = (struct lpfc_bsg_get_ras_config_reply *)
  VAR_8->reply_data.vendor_reply.vendor_rsp;


 if (VAR_11->ras_active == 1)
  VAR_10->state = VAR_3;
 else
  VAR_10->state = VAR_4;

 VAR_10->log_level = VAR_9->ras_fwlog.fw_loglevel;
 VAR_10->log_buff_sz = VAR_9->cfg_ras_fwlog_buffsize;

ras_job_error:

 VAR_8->result = VAR_12;


 if (!VAR_12)
  FUNC_0(VAR_5, VAR_8->result,
        VAR_8->reply_payload_rcv_len);
 return VAR_12;
}
