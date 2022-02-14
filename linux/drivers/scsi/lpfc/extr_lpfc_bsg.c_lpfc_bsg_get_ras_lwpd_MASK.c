
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_6__ {scalar_t__ virt; } ;
struct lpfc_ras_fwlog {TYPE_3__ lwpd; } ;
struct lpfc_hba {struct lpfc_ras_fwlog ras_fwlog; } ;
struct lpfc_bsg_ras_req {int dummy; } ;
struct lpfc_bsg_get_ras_lwpd {void* wrap_count; void* offset; } ;
struct fc_bsg_request {int dummy; } ;
struct TYPE_4__ {scalar_t__ vendor_rsp; } ;
struct TYPE_5__ {TYPE_1__ vendor_reply; } ;
struct fc_bsg_reply {int result; int reply_payload_rcv_len; TYPE_2__ reply_data; } ;
struct bsg_job {int request_len; struct fc_bsg_reply* reply; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct bsg_job*,int,int ) ;
 struct Scsi_Host* FUNC_2 (struct bsg_job*) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_hba*,int ,int ,char*) ;
 struct lpfc_vport* FUNC_5 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_6(struct bsg_job *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_2(VAR_3);
 struct lpfc_vport *VAR_5 = FUNC_5(VAR_4);
 struct lpfc_bsg_get_ras_lwpd *VAR_6;
 struct lpfc_hba *VAR_7 = VAR_5->phba;
 struct lpfc_ras_fwlog *VAR_8 = &VAR_7->ras_fwlog;
 struct fc_bsg_reply *VAR_9 = VAR_3->reply;
 u32 *VAR_10 = ((void*)0);
 int VAR_11 = 0;

 VAR_11 = FUNC_3(VAR_7);
 if (VAR_11)
  goto ras_job_error;

 if (VAR_3->request_len <
     sizeof(struct fc_bsg_request) +
     sizeof(struct lpfc_bsg_ras_req)) {
  FUNC_4(VAR_7, VAR_1, VAR_2,
    "6183 Received RAS_LOG request "
    "below minimum size\n");
  VAR_11 = -VAR_0;
  goto ras_job_error;
 }

 VAR_6 = (struct lpfc_bsg_get_ras_lwpd *)
  VAR_9->reply_data.vendor_reply.vendor_rsp;

 if (!VAR_8->lwpd.virt) {
  FUNC_4(VAR_7, VAR_1, VAR_2,
    "6193 Restart FW Logging\n");
  VAR_11 = -VAR_0;
  goto ras_job_error;
 }


 VAR_10 = (uint32_t *)(VAR_8->lwpd.virt);
 VAR_6->offset = FUNC_0(*VAR_10 & 0xffffffff);


 VAR_6->wrap_count = FUNC_0(*(++VAR_10) & 0xffffffff);

ras_job_error:

 VAR_9->result = VAR_11;


 if (!VAR_11)
  FUNC_1(VAR_3, VAR_9->result,
        VAR_9->reply_payload_rcv_len);

 return VAR_11;
}
