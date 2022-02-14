
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint16_t ;
struct timer_list {int dummy; } ;
struct req_que {int num_outstanding_cmds; TYPE_3__** outstanding_cmds; } ;
struct TYPE_16__ {int host_shutting_down; scalar_t__ eeh_busy; } ;
struct qla_hw_data {int beacon_blink_led; scalar_t__ nvme_last_rptd_aen; scalar_t__ zio_mode; scalar_t__ last_zio_threshold; int zio_threshold; int nvme_active_aen_cnt; TYPE_1__ flags; int wq; int hardware_lock; struct req_que** req_q_map; int pdev; } ;
struct TYPE_18__ {scalar_t__ cmd_type; scalar_t__ type; TYPE_5__* fcport; } ;
typedef TYPE_3__ srb_t ;
struct TYPE_17__ {scalar_t__ online; } ;
struct TYPE_19__ {scalar_t__ loop_down_abort_time; int device_flags; int dpc_flags; int vp_idx; int iocb_work; struct qla_hw_data* hw; int work_lock; int work_list; int loop_down_timer; int loop_state; scalar_t__ link_down_timeout; TYPE_2__ flags; } ;
typedef TYPE_4__ scsi_qla_host_t ;
struct TYPE_20__ {int flags; } ;
typedef TYPE_5__ fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;
 scalar_t__ FUNC_5 (struct qla_hw_data*) ;
 scalar_t__ FUNC_6 (struct qla_hw_data*) ;
 scalar_t__ FUNC_7 (struct qla_hw_data*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 TYPE_4__* FUNC_11 (int ,struct timer_list*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,int *) ;
 int FUNC_15 (int ,TYPE_4__*,int,char*,int,...) ;
 int VAR_22 ;
 int FUNC_16 (int ,TYPE_4__*,int,char*,...) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_17 (TYPE_4__*,int ) ;
 int FUNC_18 (TYPE_4__*,int ) ;
 int FUNC_19 (TYPE_4__*) ;
 int FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (TYPE_4__*) ;
 int FUNC_22 (TYPE_4__*) ;
 int FUNC_23 (int ,int *) ;
 int FUNC_24 (int ,int *) ;
 int FUNC_25 (int *,unsigned long) ;
 int FUNC_26 (int *,unsigned long) ;
 int FUNC_27 (int ,int *) ;
 int FUNC_28 (int ,int *) ;
 int VAR_25 ;
 TYPE_4__* VAR_26 ;

void
FUNC_29(struct timer_list *VAR_27)
{
 scsi_qla_host_t *VAR_28 = FUNC_11(VAR_28, VAR_27, VAR_25);
 unsigned long VAR_29 = 0;
 int VAR_30 = 0;
 int VAR_31;
 srb_t *VAR_32;
 uint16_t VAR_33;
 struct qla_hw_data *VAR_34 = VAR_28->hw;
 struct req_que *VAR_35;

 if (VAR_34->flags.eeh_busy) {
  FUNC_15(VAR_22, VAR_28, 0x6000,
      "EEH = %d, restarting timer.\n",
      VAR_34->flags.eeh_busy);
  FUNC_18(VAR_28, VAR_21);
  return;
 }





 if (!FUNC_13(VAR_34->pdev)) {
  FUNC_14(VAR_34->pdev, VAR_12, &VAR_33);
  FUNC_17(VAR_28, VAR_33);
 }


 if (!VAR_28->vp_idx && FUNC_0(VAR_34)) {
  if (FUNC_28(VAR_8, &VAR_28->dpc_flags))
   VAR_30++;
  if (FUNC_5(VAR_34))
   FUNC_21(VAR_28);
  else if (FUNC_4(VAR_34))
   FUNC_20(VAR_28);
 }

 if (!VAR_28->vp_idx && FUNC_7(VAR_34))
  FUNC_22(VAR_28);


 if (FUNC_9(&VAR_28->loop_down_timer) > 0 &&
     !(FUNC_28(VAR_0, &VAR_28->dpc_flags)) &&
     !(FUNC_28(VAR_4, &VAR_28->dpc_flags))
  && VAR_28->flags.online) {

  if (FUNC_9(&VAR_28->loop_down_timer) ==
      VAR_28->loop_down_abort_time) {

   FUNC_16(VAR_23, VAR_28, 0x6008,
       "Loop down - aborting the queues before time expires.\n");

   if (!FUNC_1(VAR_34) && VAR_28->link_down_timeout)
    FUNC_10(&VAR_28->loop_state, VAR_10);






   if (!VAR_28->vp_idx) {
    FUNC_25(&VAR_34->hardware_lock,
        VAR_29);
    VAR_35 = VAR_34->req_q_map[0];
    for (VAR_31 = 1;
        VAR_31 < VAR_35->num_outstanding_cmds;
        VAR_31++) {
     fc_port_t *VAR_36;

     VAR_32 = VAR_35->outstanding_cmds[VAR_31];
     if (!VAR_32)
      continue;
     if (VAR_32->cmd_type != VAR_19)
      continue;
     if (VAR_32->type != VAR_18)
      continue;
     VAR_36 = VAR_32->fcport;
     if (!(VAR_36->flags & VAR_3))
      continue;

     if (FUNC_5(VAR_34))
      FUNC_24(VAR_4,
       &VAR_28->dpc_flags);
     else
      FUNC_24(VAR_7,
       &VAR_28->dpc_flags);
     break;
    }
    FUNC_26(&VAR_34->hardware_lock,
        VAR_29);
   }
   VAR_30++;
  }


  if (FUNC_8(&VAR_28->loop_down_timer) != 0) {
   if (!(VAR_28->device_flags & VAR_2)) {
    FUNC_16(VAR_24, VAR_28, 0x6009,
        "Loop down - aborting ISP.\n");

    if (FUNC_5(VAR_34))
     FUNC_24(VAR_4,
      &VAR_28->dpc_flags);
    else
     FUNC_24(VAR_7,
      &VAR_28->dpc_flags);
   }
  }
  FUNC_15(VAR_22, VAR_28, 0x600a,
      "Loop down - seconds remaining %d.\n",
      FUNC_9(&VAR_28->loop_down_timer));
 }

 if (!VAR_28->vp_idx && (VAR_34->beacon_blink_led == 1)) {

  if (!FUNC_0(VAR_34)) {
   FUNC_24(VAR_1, &VAR_28->dpc_flags);
   VAR_30++;
  }
 }


 if (!FUNC_12(&VAR_28->work_list)) {
  unsigned long VAR_37;
  bool VAR_38 = 0;

  FUNC_25(&VAR_28->work_lock, VAR_37);
  if (!FUNC_27(VAR_6, &VAR_28->dpc_flags))
   VAR_38 = 1;
  FUNC_26(&VAR_28->work_lock, VAR_37);
  if (VAR_38)
   FUNC_23(VAR_28->hw->wq, &VAR_28->iocb_work);
 }





 if (!VAR_28->vp_idx &&
     (FUNC_9(&VAR_34->nvme_active_aen_cnt) != VAR_34->nvme_last_rptd_aen) &&
     VAR_34->zio_mode == VAR_13 &&
     !VAR_34->flags.host_shutting_down) {
  FUNC_16(VAR_23, VAR_28, 0x3002,
      "nvme: Sched: Set ZIO exchange threshold to %d.\n",
      VAR_34->nvme_last_rptd_aen);
  VAR_34->nvme_last_rptd_aen = FUNC_9(&VAR_34->nvme_active_aen_cnt);
  FUNC_24(VAR_16, &VAR_28->dpc_flags);
  VAR_30++;
 }

 if (!VAR_28->vp_idx &&
     (FUNC_9(&VAR_34->zio_threshold) != VAR_34->last_zio_threshold) &&
     (VAR_34->zio_mode == VAR_13) &&
     (FUNC_6(VAR_34) || FUNC_2(VAR_34) || FUNC_3(VAR_34))) {
  FUNC_16(VAR_23, VAR_28, 0x3002,
      "Sched: Set ZIO exchange threshold to %d.\n",
      VAR_34->last_zio_threshold);
  VAR_34->last_zio_threshold = FUNC_9(&VAR_34->zio_threshold);
  FUNC_24(VAR_17, &VAR_28->dpc_flags);
  VAR_30++;
 }


 if ((FUNC_28(VAR_7, &VAR_28->dpc_flags) ||
     FUNC_28(VAR_11, &VAR_28->dpc_flags) ||
     FUNC_28(VAR_5, &VAR_28->dpc_flags) ||
     VAR_30 ||
     FUNC_28(VAR_15, &VAR_28->dpc_flags) ||
     FUNC_28(VAR_1, &VAR_28->dpc_flags) ||
     FUNC_28(VAR_9, &VAR_28->dpc_flags) ||
     FUNC_28(VAR_4, &VAR_28->dpc_flags) ||
     FUNC_28(VAR_20, &VAR_28->dpc_flags) ||
     FUNC_28(VAR_14, &VAR_28->dpc_flags))) {
  FUNC_15(VAR_22, VAR_28, 0x600b,
      "isp_abort_needed=%d loop_resync_needed=%d "
      "fcport_update_needed=%d start_dpc=%d "
      "reset_marker_needed=%d",
      FUNC_28(VAR_7, &VAR_28->dpc_flags),
      FUNC_28(VAR_11, &VAR_28->dpc_flags),
      FUNC_28(VAR_5, &VAR_28->dpc_flags),
      VAR_30,
      FUNC_28(VAR_15, &VAR_28->dpc_flags));
  FUNC_15(VAR_22, VAR_28, 0x600c,
      "beacon_blink_needed=%d isp_unrecoverable=%d "
      "fcoe_ctx_reset_needed=%d vp_dpc_needed=%d "
      "relogin_needed=%d.\n",
      FUNC_28(VAR_1, &VAR_28->dpc_flags),
      FUNC_28(VAR_9, &VAR_28->dpc_flags),
      FUNC_28(VAR_4, &VAR_28->dpc_flags),
      FUNC_28(VAR_20, &VAR_28->dpc_flags),
      FUNC_28(VAR_14, &VAR_28->dpc_flags));
  FUNC_19(VAR_28);
 }

 FUNC_18(VAR_28, VAR_21);
}
