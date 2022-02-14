
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct rsp_que {scalar_t__* in_ptr; scalar_t__ length; scalar_t__ ring; } ;
struct req_que {int num_outstanding_cmds; int current_outstanding_cmd; scalar_t__ length; scalar_t__ cnt; scalar_t__ ring_index; scalar_t__ ring; scalar_t__ ring_ptr; int ** outstanding_cmds; scalar_t__* out_ptr; } ;
struct TYPE_17__ {int dport_enabled; int fawwpn_enabled; scalar_t__ npiv_supported; } ;
struct TYPE_14__ {scalar_t__ atio_ring_index; int atio_ring; int atio_ring_ptr; } ;
struct qla_hw_data {int max_req_queues; int max_rsp_queues; scalar_t__ operating_mode; int init_cb_size; TYPE_4__ flags; scalar_t__ cur_fw_xcb_count; scalar_t__ max_npiv_vports; TYPE_2__* isp_ops; int hardware_lock; TYPE_1__ tgt; int rsp_qid_map; struct rsp_que** rsp_q_map; int req_qid_map; struct req_que** req_q_map; scalar_t__ init_cb; } ;
struct TYPE_16__ {int firmware_options_1; void* execution_throttle; } ;
struct mid_init_cb_24xx {TYPE_3__ init_cb; void* options; void* count; } ;
struct TYPE_18__ {scalar_t__ u_ql2xiniexchg; scalar_t__ u_ql2xexchoffld; struct qla_hw_data* hw; } ;
typedef TYPE_5__ scsi_qla_host_t ;
struct TYPE_15__ {int (* update_fw_options ) (TYPE_5__*) ;int (* config_rings ) (TYPE_5__*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct qla_hw_data*) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,TYPE_5__*,int,char*,...) ;
 int VAR_5 ;
 int FUNC_6 (int ,TYPE_5__*,int,char*) ;
 int VAR_6 ;
 int FUNC_7 (TYPE_5__*,int ) ;
 int FUNC_8 (struct rsp_que*) ;
 int FUNC_9 (TYPE_5__*,int ) ;
 int FUNC_10 (struct rsp_que*) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (int,int ) ;

int
FUNC_17(scsi_qla_host_t *VAR_7)
{
 int VAR_8;
 unsigned long VAR_9 = 0;
 int VAR_10, VAR_11;
 struct qla_hw_data *VAR_12 = VAR_7->hw;
 struct req_que *VAR_13;
 struct rsp_que *VAR_14;
 struct mid_init_cb_24xx *VAR_15 =
     (struct mid_init_cb_24xx *) VAR_12->init_cb;

 FUNC_12(&VAR_12->hardware_lock, VAR_9);


 for (VAR_11 = 0; VAR_11 < VAR_12->max_req_queues; VAR_11++) {
  VAR_13 = VAR_12->req_q_map[VAR_11];
  if (!VAR_13 || !FUNC_16(VAR_11, VAR_12->req_qid_map))
   continue;
  VAR_13->out_ptr = (void *)(VAR_13->ring + VAR_13->length);
  *VAR_13->out_ptr = 0;
  for (VAR_10 = 1; VAR_10 < VAR_13->num_outstanding_cmds; VAR_10++)
   VAR_13->outstanding_cmds[VAR_10] = ((void*)0);

  VAR_13->current_outstanding_cmd = 1;


  VAR_13->ring_ptr = VAR_13->ring;
  VAR_13->ring_index = 0;
  VAR_13->cnt = VAR_13->length;
 }

 for (VAR_11 = 0; VAR_11 < VAR_12->max_rsp_queues; VAR_11++) {
  VAR_14 = VAR_12->rsp_q_map[VAR_11];
  if (!VAR_14 || !FUNC_16(VAR_11, VAR_12->rsp_qid_map))
   continue;
  VAR_14->in_ptr = (void *)(VAR_14->ring + VAR_14->length);
  *VAR_14->in_ptr = 0;

  if (FUNC_2(VAR_12))
   FUNC_10(VAR_14);
  else
   FUNC_8(VAR_14);
 }

 VAR_12->tgt.atio_ring_ptr = VAR_12->tgt.atio_ring;
 VAR_12->tgt.atio_ring_index = 0;

 FUNC_11(VAR_7);

 VAR_12->isp_ops->config_rings(VAR_7);

 FUNC_13(&VAR_12->hardware_lock, VAR_9);

 FUNC_5(VAR_5, VAR_7, 0x00d1, "Issue init firmware.\n");

 if (FUNC_2(VAR_12)) {
  VAR_8 = FUNC_9(VAR_7, VAR_12->init_cb_size);
  goto next_check;
 }


 VAR_12->isp_ops->update_fw_options(VAR_7);

 if (VAR_12->flags.npiv_supported) {
  if (VAR_12->operating_mode == VAR_3 && !FUNC_0(VAR_12))
   VAR_12->max_npiv_vports = VAR_4 - 1;
  VAR_15->count = FUNC_4(VAR_12->max_npiv_vports);
 }

 if (FUNC_1(VAR_12)) {
  VAR_15->options = FUNC_4(VAR_0);
  VAR_15->init_cb.execution_throttle =
      FUNC_4(VAR_12->cur_fw_xcb_count);
  VAR_12->flags.dport_enabled =
      (VAR_15->init_cb.firmware_options_1 & VAR_2) != 0;
  FUNC_5(VAR_5, VAR_7, 0x0191, "DPORT Support: %s.\n",
      (VAR_12->flags.dport_enabled) ? "enabled" : "disabled");

  VAR_12->flags.fawwpn_enabled =
      (VAR_15->init_cb.firmware_options_1 & VAR_1) != 0;
  FUNC_5(VAR_5, VAR_7, 0x00bc, "FA-WWPN Support: %s.\n",
      (VAR_12->flags.fawwpn_enabled) ? "enabled" : "disabled");
 }

 VAR_8 = FUNC_7(VAR_7, VAR_12->init_cb_size);
next_check:
 if (VAR_8) {
  FUNC_6(VAR_6, VAR_7, 0x00d2,
      "Init Firmware **** FAILED ****.\n");
 } else {
  FUNC_5(VAR_5, VAR_7, 0x00d3,
      "Init Firmware -- success.\n");
  FUNC_3(VAR_12);
  VAR_7->u_ql2xexchoffld = VAR_7->u_ql2xiniexchg = 0;
 }

 return (VAR_8);
}
