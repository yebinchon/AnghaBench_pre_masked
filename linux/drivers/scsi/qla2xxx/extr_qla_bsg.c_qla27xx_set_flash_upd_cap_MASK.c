
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct qla_hw_data {scalar_t__ fw_attributes; scalar_t__ fw_attributes_h; scalar_t__* fw_attributes_ext; } ;
struct qla_flash_update_caps {int capabilities; scalar_t__ outage_duration; } ;
struct TYPE_7__ {void** vendor_rsp; } ;
struct TYPE_8__ {TYPE_2__ vendor_reply; } ;
struct fc_bsg_reply {int result; scalar_t__ reply_payload_rcv_len; TYPE_3__ reply_data; } ;
struct TYPE_6__ {int sg_cnt; int sg_list; } ;
struct bsg_job {int reply_len; TYPE_1__ request_payload; struct fc_bsg_reply* reply; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_9__ {struct qla_hw_data* hw; } ;
typedef TYPE_4__ scsi_qla_host_t ;
typedef int cap ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct bsg_job*,int,scalar_t__) ;
 struct Scsi_Host* FUNC_3 (struct bsg_job*) ;
 int FUNC_4 (struct qla_flash_update_caps*,int ,int) ;
 int FUNC_5 (int ,int ,struct qla_flash_update_caps*,int) ;
 TYPE_4__* FUNC_6 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_7(struct bsg_job *VAR_6)
{
 struct fc_bsg_reply *VAR_7 = VAR_6->reply;
 struct Scsi_Host *VAR_8 = FUNC_3(VAR_6);
 scsi_qla_host_t *VAR_9 = FUNC_6(VAR_8);
 struct qla_hw_data *VAR_10 = VAR_9->hw;
 uint64_t VAR_11 = 0;
 struct qla_flash_update_caps VAR_12;

 if (!FUNC_0(VAR_10) && !FUNC_1(VAR_10))
  return -VAR_2;

 FUNC_4(&VAR_12, 0, sizeof(VAR_12));
 FUNC_5(VAR_6->request_payload.sg_list,
     VAR_6->request_payload.sg_cnt, &VAR_12, sizeof(VAR_12));

 VAR_11 = (uint64_t)VAR_10->fw_attributes_ext[1] << 48 |
    (uint64_t)VAR_10->fw_attributes_ext[0] << 32 |
    (uint64_t)VAR_10->fw_attributes_h << 16 |
    (uint64_t)VAR_10->fw_attributes;

 if (VAR_11 != VAR_12.capabilities) {
  VAR_7->reply_data.vendor_reply.vendor_rsp[0] =
      VAR_3;
  return -VAR_1;
 }

 if (VAR_12.outage_duration < VAR_5) {
  VAR_7->reply_data.vendor_reply.vendor_rsp[0] =
      VAR_3;
  return -VAR_1;
 }

 VAR_7->reply_payload_rcv_len = 0;

 VAR_7->reply_data.vendor_reply.vendor_rsp[0] =
     VAR_4;

 VAR_6->reply_len = sizeof(struct fc_bsg_reply);
 VAR_7->result = VAR_0 << 16;
 FUNC_2(VAR_6, VAR_7->result,
         VAR_7->reply_payload_rcv_len);
 return 0;
}
