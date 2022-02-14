
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_ras_fwlog {int ras_active; } ;
struct lpfc_hba {struct lpfc_ras_fwlog ras_fwlog; } ;
struct lpfc_bsg_set_ras_config_req {scalar_t__ action; scalar_t__ log_level; } ;
struct TYPE_3__ {scalar_t__ vendor_cmd; } ;
struct TYPE_4__ {TYPE_1__ h_vendor; } ;
struct fc_bsg_request {TYPE_2__ rqst_data; } ;
struct fc_bsg_reply {int result; int reply_payload_rcv_len; } ;
struct bsg_job {int request_len; struct fc_bsg_reply* reply; struct fc_bsg_request* request; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bsg_job*,int,int ) ;
 struct Scsi_Host* FUNC_1 (struct bsg_job*) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*,scalar_t__,int ) ;
 struct lpfc_vport* FUNC_6 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_7(struct bsg_job *VAR_7)
{
 struct Scsi_Host *VAR_8 = FUNC_1(VAR_7);
 struct lpfc_vport *VAR_9 = FUNC_6(VAR_8);
 struct lpfc_hba *VAR_10 = VAR_9->phba;
 struct lpfc_bsg_set_ras_config_req *VAR_11;
 struct fc_bsg_request *VAR_12 = VAR_7->request;
 struct lpfc_ras_fwlog *VAR_13 = &VAR_10->ras_fwlog;
 struct fc_bsg_reply *VAR_14 = VAR_7->reply;
 uint8_t VAR_15 = 0, VAR_16 = 0;
 int VAR_17 = 0, VAR_18 = 0;

 if (VAR_7->request_len <
     sizeof(struct fc_bsg_request) +
     sizeof(struct lpfc_bsg_set_ras_config_req)) {
  FUNC_3(VAR_10, VAR_3, VAR_4,
    "6182 Received RAS_LOG request "
    "below minimum size\n");
  VAR_17 = -VAR_1;
  goto ras_job_error;
 }


 VAR_17 = FUNC_2(VAR_10);
 if (VAR_17)
  goto ras_job_error;

 VAR_11 = (struct lpfc_bsg_set_ras_config_req *)
  VAR_12->rqst_data.h_vendor.vendor_cmd;
 VAR_15 = VAR_11->action;
 VAR_16 = VAR_11->log_level;

 if (VAR_15 == VAR_5) {

  if (VAR_13->ras_active == 0) {
   VAR_17 = -VAR_2;
   goto ras_job_error;
  }


  FUNC_4(VAR_10);
 } else {






  if (VAR_13->ras_active)
   VAR_18 = -VAR_0;


  VAR_17 = FUNC_5(VAR_10, VAR_16,
           VAR_6);
  if (VAR_17) {
   VAR_17 = -VAR_1;
   goto ras_job_error;
  }


  if (VAR_18 == -VAR_0)
   VAR_17 = VAR_18;
 }
ras_job_error:

 VAR_14->result = VAR_17;


 if (!VAR_17)
  FUNC_0(VAR_7, VAR_14->result,
        VAR_14->reply_payload_rcv_len);

 return VAR_17;
}
