
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_6__ {int domain; int area; int al_pa; } ;
struct TYPE_7__ {TYPE_1__ b; } ;
struct scsi_qla_host {scalar_t__ marker_needed; TYPE_2__ d_id; int self_login_loop_id; struct req_que* req; struct qla_hw_data* hw; } ;
struct rsp_que {scalar_t__ id; } ;
struct req_que {scalar_t__ cnt; scalar_t__* out_ptr; scalar_t__ ring_index; scalar_t__ length; size_t current_outstanding_cmd; TYPE_3__** outstanding_cmds; int id; scalar_t__ ring_ptr; int req_q_out; } ;
struct qla_hw_data {int hardware_lock; int base_qpair; struct rsp_que** rsp_q_map; } ;
struct cmd_bidir {scalar_t__ entry_status; int * port_id; int nport_handle; int handle; } ;
struct TYPE_8__ {size_t handle; } ;
typedef TYPE_3__ srb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (int ,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (size_t*,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct scsi_qla_host*,size_t) ;
 int FUNC_6 (TYPE_3__*,struct scsi_qla_host*,struct cmd_bidir*,size_t) ;
 int FUNC_7 (struct scsi_qla_host*,int ,int ,int ,int ) ;
 int FUNC_8 (struct scsi_qla_host*,struct req_que*) ;
 size_t FUNC_9 (struct req_que*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 () ;

int
FUNC_13(srb_t *VAR_6, struct scsi_qla_host *VAR_7, uint32_t VAR_8)
{

 struct qla_hw_data *VAR_9 = VAR_7->hw;
 unsigned long VAR_10;
 uint32_t VAR_11;
 uint16_t VAR_12;
 uint16_t VAR_13;
 uint32_t *VAR_14;
 struct cmd_bidir *VAR_15 = ((void*)0);
 struct rsp_que *VAR_16;
 struct req_que *VAR_17;
 int VAR_18 = VAR_2;

 VAR_18 = VAR_4;

 VAR_16 = VAR_9->rsp_q_map[0];
 VAR_17 = VAR_7->req;


 if (VAR_7->marker_needed != 0) {
  if (FUNC_7(VAR_7, VAR_9->base_qpair,
   0, 0, VAR_3) != VAR_4)
   return VAR_1;
  VAR_7->marker_needed = 0;
 }


 FUNC_10(&VAR_9->hardware_lock, VAR_10);

 VAR_11 = FUNC_9(VAR_17);
 if (VAR_11 == 0) {
  VAR_18 = VAR_0;
  goto queuing_error;
 }


 VAR_12 = FUNC_5(VAR_7, VAR_8);


 if (VAR_17->cnt < VAR_12 + 2) {
  VAR_13 = FUNC_0(VAR_9) ? *VAR_17->out_ptr :
      FUNC_2(VAR_17->req_q_out);
  if (VAR_17->ring_index < VAR_13)
   VAR_17->cnt = VAR_13 - VAR_17->ring_index;
  else
   VAR_17->cnt = VAR_17->length -
    (VAR_17->ring_index - VAR_13);
 }
 if (VAR_17->cnt < VAR_12 + 2) {
  VAR_18 = VAR_0;
  goto queuing_error;
 }

 VAR_15 = (struct cmd_bidir *)VAR_17->ring_ptr;
 VAR_15->handle = FUNC_1(VAR_17->id, VAR_11);



 VAR_14 = (uint32_t *)VAR_15 + 2;
 FUNC_4(VAR_14, 0, VAR_5 - 8);


 VAR_15->nport_handle = FUNC_3(VAR_7->self_login_loop_id);
 VAR_15->port_id[0] = VAR_7->d_id.b.al_pa;
 VAR_15->port_id[1] = VAR_7->d_id.b.area;
 VAR_15->port_id[2] = VAR_7->d_id.b.domain;

 FUNC_6(VAR_6, VAR_7, VAR_15, VAR_8);
 VAR_15->entry_status = (uint8_t) VAR_16->id;

 VAR_17->current_outstanding_cmd = VAR_11;
 VAR_17->outstanding_cmds[VAR_11] = VAR_6;
 VAR_6->handle = VAR_11;
 VAR_17->cnt -= VAR_12;


 FUNC_12();
 FUNC_8(VAR_7, VAR_17);
queuing_error:
 FUNC_11(&VAR_9->hardware_lock, VAR_10);
 return VAR_18;
}
