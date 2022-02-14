
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct scsi_qla_host {int iocb_cnt; int req_q_count; int hardware_lock; TYPE_7__* isp_ops; scalar_t__ request_ptr; } ;
struct ql4_task_data {int iocb_req_cnt; scalar_t__ resp_len; int resp_dma; int req_dma; scalar_t__ req_buffer; scalar_t__ req_len; } ;
struct TYPE_12__ {void* addrHigh; void* addrLow; } ;
struct TYPE_13__ {void* count; TYPE_5__ base; } ;
struct TYPE_10__ {void* addrHigh; void* addrLow; } ;
struct TYPE_11__ {void* count; TYPE_3__ base; } ;
struct TYPE_9__ {int entryCount; int systemDefined; int entryType; } ;
struct passthru0 {void* control_flags; TYPE_6__ in_dsd; TYPE_4__ out_dsd; void* timeout; void* target; int handle; TYPE_2__ hdr; } ;
struct iscsi_task {int data_count; int data; int itt; struct ql4_task_data* dd_data; TYPE_1__* conn; } ;
struct iscsi_session {struct ddb_entry* dd_data; } ;
struct iscsi_hdr {int dummy; } ;
struct ddb_entry {int fw_ddb_index; struct scsi_qla_host* ha; } ;
struct TYPE_14__ {int (* queue_iocb ) (struct scsi_qla_host*) ;} ;
struct TYPE_8__ {struct iscsi_session* session; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct passthru0*,int ,int) ;
 int FUNC_6 (struct scsi_qla_host*) ;
 int FUNC_7 (struct scsi_qla_host*,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct scsi_qla_host*) ;
 int FUNC_11 () ;

int FUNC_12(struct iscsi_task *VAR_8)
{
 struct passthru0 *VAR_9;
 struct iscsi_session *VAR_10 = VAR_8->conn->session;
 struct ddb_entry *VAR_11 = VAR_10->dd_data;
 struct scsi_qla_host *VAR_12 = VAR_11->ha;
 struct ql4_task_data *VAR_13 = VAR_8->dd_data;
 uint16_t VAR_14 = 0;
 unsigned long VAR_15;
 int VAR_16 = VAR_5;

 FUNC_8(&VAR_12->hardware_lock, VAR_15);
 VAR_13->iocb_req_cnt = 1;

 if (!FUNC_7(VAR_12, VAR_13->iocb_req_cnt))
  goto queuing_error;

 VAR_9 = (struct passthru0 *) VAR_12->request_ptr;

 FUNC_5(VAR_9, 0, sizeof(struct passthru0));
 VAR_9->hdr.entryType = VAR_0;
 VAR_9->hdr.systemDefined = VAR_7;
 VAR_9->hdr.entryCount = VAR_13->iocb_req_cnt;
 VAR_9->handle = VAR_8->itt;
 VAR_9->target = FUNC_2(VAR_11->fw_ddb_index);
 VAR_9->timeout = FUNC_2(VAR_1);


 if (VAR_13->req_len) {
  FUNC_4((uint8_t *)VAR_13->req_buffer +
         sizeof(struct iscsi_hdr), VAR_8->data, VAR_8->data_count);
  VAR_14 |= VAR_3;
  VAR_9->out_dsd.base.addrLow =
     FUNC_3(FUNC_0(VAR_13->req_dma));
  VAR_9->out_dsd.base.addrHigh =
     FUNC_3(FUNC_1(VAR_13->req_dma));
  VAR_9->out_dsd.count =
     FUNC_3(VAR_8->data_count +
          sizeof(struct iscsi_hdr));
 }
 if (VAR_13->resp_len) {
  VAR_9->in_dsd.base.addrLow =
     FUNC_3(FUNC_0(VAR_13->resp_dma));
  VAR_9->in_dsd.base.addrHigh =
     FUNC_3(FUNC_1(VAR_13->resp_dma));
  VAR_9->in_dsd.count =
   FUNC_3(VAR_13->resp_len);
 }

 VAR_14 |= (VAR_2 | VAR_4);
 VAR_9->control_flags = FUNC_2(VAR_14);


 FUNC_6(VAR_12);
 FUNC_11();


 VAR_12->iocb_cnt += VAR_13->iocb_req_cnt;
 VAR_12->req_q_count -= VAR_13->iocb_req_cnt;
 VAR_12->isp_ops->queue_iocb(VAR_12);
 VAR_16 = VAR_6;

queuing_error:
 FUNC_9(&VAR_12->hardware_lock, VAR_15);
 return VAR_16;
}
