
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
typedef scalar_t__ uint16_t ;
struct scsi_qla_host {scalar_t__ marker_needed; int vp_idx; struct qla_hw_data* hw; } ;
struct scsi_cmnd {unsigned char* host_scribble; int cmd_len; int cmnd; TYPE_5__* device; int sc_data_direction; } ;
struct req_que {scalar_t__ cnt; scalar_t__* out_ptr; scalar_t__ ring_index; scalar_t__ length; size_t current_outstanding_cmd; int req_q_in; scalar_t__ ring_ptr; scalar_t__ ring; int id; TYPE_6__** outstanding_cmds; int req_q_out; } ;
struct qla_qpair {int qp_lock; struct req_que* req; } ;
struct qla_hw_data {TYPE_1__* pdev; } ;
struct cmd_type_7 {scalar_t__ entry_count; int byte_count; scalar_t__* fcp_cdb; int task; int lun; int vp_index; int * port_id; void* nport_handle; void* dseg_count; int handle; } ;
struct TYPE_15__ {size_t handle; int flags; TYPE_4__* fcport; struct qla_qpair* qpair; } ;
typedef TYPE_6__ srb_t ;
struct TYPE_14__ {int lun; } ;
struct TYPE_11__ {int domain; int area; int al_pa; } ;
struct TYPE_12__ {TYPE_2__ b; } ;
struct TYPE_13__ {scalar_t__ loop_id; struct scsi_qla_host* vha; TYPE_3__ d_id; } ;
struct TYPE_10__ {int dev; } ;


 struct scsi_cmnd* FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 int FUNC_2 (int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct scsi_qla_host*,struct qla_qpair*,int ,int ,int ) ;
 void* FUNC_6 (scalar_t__) ;
 int FUNC_7 (size_t) ;
 int FUNC_8 (int *,int ,scalar_t__,int ) ;
 int FUNC_9 (scalar_t__*,int) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (scalar_t__*,int ,int ) ;
 int FUNC_12 (size_t*,int ,scalar_t__) ;
 int FUNC_13 (TYPE_6__*,struct cmd_type_7*,scalar_t__,struct req_que*) ;
 scalar_t__ FUNC_14 (struct scsi_qla_host*,scalar_t__) ;
 size_t FUNC_15 (struct req_que*) ;
 scalar_t__ FUNC_16 (struct scsi_cmnd*) ;
 int FUNC_17 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_18 (struct scsi_cmnd*) ;
 int FUNC_19 (struct scsi_cmnd*) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (int *,unsigned long) ;
 scalar_t__ FUNC_22 (int) ;
 int FUNC_23 () ;

__attribute__((used)) static int
FUNC_24(srb_t *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;
 uint32_t *VAR_9;
 uint32_t VAR_10;
 struct cmd_type_7 *VAR_11;
 uint16_t VAR_12;
 uint16_t VAR_13;
 uint16_t VAR_14;
 struct req_que *VAR_15 = ((void*)0);
 struct scsi_cmnd *VAR_16 = FUNC_0(VAR_6);
 struct scsi_qla_host *VAR_17 = VAR_6->fcport->vha;
 struct qla_hw_data *VAR_18 = VAR_17->hw;
 struct qla_qpair *VAR_19 = VAR_6->qpair;


 FUNC_20(&VAR_19->qp_lock, VAR_8);


 VAR_15 = VAR_19->req;


 VAR_14 = 0;


 if (VAR_17->marker_needed != 0) {
  if (FUNC_5(VAR_17, VAR_19, 0, 0, VAR_0) !=
      VAR_2) {
   FUNC_21(&VAR_19->qp_lock, VAR_8);
   return VAR_1;
  }
  VAR_17->marker_needed = 0;
 }

 VAR_10 = FUNC_15(VAR_15);
 if (VAR_10 == 0)
  goto queuing_error;


 if (FUNC_18(VAR_16)) {
  VAR_7 = FUNC_8(&VAR_18->pdev->dev, FUNC_19(VAR_16),
      FUNC_18(VAR_16), VAR_16->sc_data_direction);
  if (FUNC_22(!VAR_7))
   goto queuing_error;
 } else
  VAR_7 = 0;

 VAR_14 = VAR_7;
 VAR_13 = FUNC_14(VAR_17, VAR_14);
 if (VAR_15->cnt < (VAR_13 + 2)) {
  VAR_12 = FUNC_1(VAR_18) ? *VAR_15->out_ptr :
      FUNC_3(VAR_15->req_q_out);
  if (VAR_15->ring_index < VAR_12)
   VAR_15->cnt = VAR_12 - VAR_15->ring_index;
  else
   VAR_15->cnt = VAR_15->length -
    (VAR_15->ring_index - VAR_12);
  if (VAR_15->cnt < (VAR_13 + 2))
   goto queuing_error;
 }


 VAR_15->current_outstanding_cmd = VAR_10;
 VAR_15->outstanding_cmds[VAR_10] = VAR_6;
 VAR_6->handle = VAR_10;
 VAR_16->host_scribble = (unsigned char *)(unsigned long)VAR_10;
 VAR_15->cnt -= VAR_13;

 VAR_11 = (struct cmd_type_7 *)VAR_15->ring_ptr;
 VAR_11->handle = FUNC_2(VAR_15->id, VAR_10);



 VAR_9 = (uint32_t *)VAR_11 + 2;
 FUNC_12(VAR_9, 0, VAR_3 - 8);
 VAR_11->dseg_count = FUNC_6(VAR_14);


 VAR_11->nport_handle = FUNC_6(VAR_6->fcport->loop_id);
 VAR_11->port_id[0] = VAR_6->fcport->d_id.b.al_pa;
 VAR_11->port_id[1] = VAR_6->fcport->d_id.b.area;
 VAR_11->port_id[2] = VAR_6->fcport->d_id.b.domain;
 VAR_11->vp_index = VAR_6->fcport->vha->vp_idx;

 FUNC_10(VAR_16->device->lun, &VAR_11->lun);
 FUNC_9((uint8_t *)&VAR_11->lun, sizeof(VAR_11->lun));

 VAR_11->task = VAR_5;


 FUNC_11(VAR_11->fcp_cdb, VAR_16->cmnd, VAR_16->cmd_len);
 FUNC_9(VAR_11->fcp_cdb, sizeof(VAR_11->fcp_cdb));

 VAR_11->byte_count = FUNC_7((uint32_t)FUNC_16(VAR_16));


 FUNC_13(VAR_6, VAR_11, VAR_14, VAR_15);


 VAR_11->entry_count = (uint8_t)VAR_13;
 FUNC_23();

 VAR_15->ring_index++;
 if (VAR_15->ring_index == VAR_15->length) {
  VAR_15->ring_index = 0;
  VAR_15->ring_ptr = VAR_15->ring;
 } else
  VAR_15->ring_ptr++;

 VAR_6->flags |= VAR_4;


 FUNC_4(VAR_15->req_q_in, VAR_15->ring_index);

 FUNC_21(&VAR_19->qp_lock, VAR_8);
 return VAR_2;

queuing_error:
 if (VAR_14)
  FUNC_17(VAR_16);

 FUNC_21(&VAR_19->qp_lock, VAR_8);

 return VAR_1;
}
