
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct scsi_cmnd {int result; int * cmnd; TYPE_3__* device; } ;
struct qedf_rport {TYPE_2__* rdata; struct qedf_ctx* qedf; } ;
struct qedf_ioreq {int sge_type; scalar_t__ int_cpu; int cpu; int refcount; int xid; struct scsi_cmnd* sc_cmd; } ;
struct qedf_io_log {int sge_type; scalar_t__ rsp_cpu; scalar_t__ int_cpu; int req_cpu; int refcount; int jiffies; int result; int sg_count; int bufflen; int * lba; int op; int lun; int port_id; int task_id; scalar_t__ direction; } ;
struct qedf_ctx {size_t io_trace_idx; int io_trace_lock; struct qedf_io_log* io_trace_buf; } ;
typedef scalar_t__ int8_t ;
struct TYPE_6__ {int lun; } ;
struct TYPE_4__ {int port_id; } ;
struct TYPE_5__ {TYPE_1__ ids; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct qedf_rport *VAR_4, struct qedf_ioreq *VAR_5,
     int8_t VAR_6)
{
 struct qedf_ctx *VAR_7 = VAR_4->qedf;
 struct qedf_io_log *VAR_8;
 struct scsi_cmnd *VAR_9 = VAR_5->sc_cmd;
 unsigned long VAR_10;
 uint8_t VAR_11;

 FUNC_4(&VAR_7->io_trace_lock, VAR_10);

 VAR_8 = &VAR_7->io_trace_buf[VAR_7->io_trace_idx];
 VAR_8->direction = VAR_6;
 VAR_8->task_id = VAR_5->xid;
 VAR_8->port_id = VAR_4->rdata->ids.port_id;
 VAR_8->lun = VAR_9->device->lun;
 VAR_8->op = VAR_11 = VAR_9->cmnd[0];
 VAR_8->lba[0] = VAR_9->cmnd[2];
 VAR_8->lba[1] = VAR_9->cmnd[3];
 VAR_8->lba[2] = VAR_9->cmnd[4];
 VAR_8->lba[3] = VAR_9->cmnd[5];
 VAR_8->bufflen = FUNC_1(VAR_9);
 VAR_8->sg_count = FUNC_2(VAR_9);
 VAR_8->result = VAR_9->result;
 VAR_8->jiffies = VAR_3;
 VAR_8->refcount = FUNC_0(&VAR_5->refcount);

 if (VAR_6 == VAR_0) {

  VAR_8->req_cpu = VAR_5->cpu;
  VAR_8->int_cpu = 0;
  VAR_8->rsp_cpu = 0;
 } else if (VAR_6 == VAR_1) {
  VAR_8->req_cpu = VAR_5->cpu;
  VAR_8->int_cpu = VAR_5->int_cpu;
  VAR_8->rsp_cpu = FUNC_3();
 }

 VAR_8->sge_type = VAR_5->sge_type;

 VAR_7->io_trace_idx++;
 if (VAR_7->io_trace_idx == VAR_2)
  VAR_7->io_trace_idx = 0;

 FUNC_5(&VAR_7->io_trace_lock, VAR_10);
}
