
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* wakeup ) (struct mwifiex_adapter*) ;int (* process_int_status ) (struct mwifiex_adapter*) ;} ;
struct mwifiex_adapter {int mwifiex_processing; int more_task_flag; scalar_t__ hw_status; scalar_t__ iface_type; int delay_main_work; int data_received; scalar_t__ ps_state; int pm_wakeup_fw_try; int event_received; int cmd_resp_received; int delay_null_pkt; int main_proc_lock; int tx_data_q; scalar_t__ curr_cmd; scalar_t__ cmd_sent; int work_flags; scalar_t__ hs_activated; scalar_t__ data_sent; scalar_t__ scan_processing; scalar_t__ scan_chan_gap_enabled; scalar_t__ usb_mc_setup; scalar_t__ tx_lock_flag; int wakeup_timer; TYPE_1__ if_ops; scalar_t__ pm_wakeup_card_req; scalar_t__ rx_work_enabled; scalar_t__ int_status; int rx_pending; scalar_t__ main_locked; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mwifiex_adapter*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct mwifiex_adapter*) ;
 scalar_t__ VAR_15 ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (struct mwifiex_adapter*) ;
 int FUNC_7 (struct mwifiex_adapter*) ;
 int FUNC_8 (struct mwifiex_adapter*) ;
 int FUNC_9 (struct mwifiex_adapter*,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (struct mwifiex_adapter*) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct mwifiex_adapter*) ;
 int FUNC_15 (struct mwifiex_adapter*) ;
 int FUNC_16 (struct mwifiex_adapter*) ;
 int FUNC_17 (struct mwifiex_adapter*) ;
 int FUNC_18 (struct mwifiex_adapter*) ;
 int FUNC_19 (struct mwifiex_adapter*) ;
 int FUNC_20 (int ,int) ;
 scalar_t__ FUNC_21 (struct mwifiex_adapter*) ;
 int FUNC_22 (struct mwifiex_adapter*) ;
 scalar_t__ FUNC_23 (int *) ;
 int FUNC_24 (int *,unsigned long) ;
 int FUNC_25 (int *,unsigned long) ;
 int FUNC_26 (struct mwifiex_adapter*) ;
 int FUNC_27 (struct mwifiex_adapter*) ;

int FUNC_28(struct mwifiex_adapter *VAR_16)
{
 int VAR_17 = 0;
 unsigned long VAR_18;

 FUNC_24(&VAR_16->main_proc_lock, VAR_18);


 if (VAR_16->mwifiex_processing || VAR_16->main_locked) {
  VAR_16->more_task_flag = 1;
  FUNC_25(&VAR_16->main_proc_lock, VAR_18);
  return 0;
 } else {
  VAR_16->mwifiex_processing = 1;
  FUNC_25(&VAR_16->main_proc_lock, VAR_18);
 }
process_start:
 do {
  if (VAR_16->hw_status == VAR_5)
   break;
  if (FUNC_1(&VAR_16->rx_pending) >= VAR_0 &&
      VAR_16->iface_type != VAR_10) {
   VAR_16->delay_main_work = 1;
   FUNC_19(VAR_16);
   break;
  }


  if (VAR_16->int_status) {
   if (VAR_16->hs_activated)
    FUNC_17(VAR_16);
   if (VAR_16->if_ops.process_int_status)
    VAR_16->if_ops.process_int_status(VAR_16);
  }

  if (VAR_16->rx_work_enabled && VAR_16->data_received)
   FUNC_19(VAR_16);


  if ((VAR_16->ps_state == VAR_13) &&
      (VAR_16->pm_wakeup_card_req &&
       !VAR_16->pm_wakeup_fw_try) &&
      (FUNC_4(VAR_16) ||
       !FUNC_23(&VAR_16->tx_data_q) ||
       !FUNC_6(VAR_16) ||
       !FUNC_21(VAR_16))) {
   VAR_16->pm_wakeup_fw_try = 1;
   FUNC_5(&VAR_16->wakeup_timer, VAR_15 + (VAR_1*3));
   VAR_16->if_ops.wakeup(VAR_16);
   continue;
  }

  if (FUNC_0(VAR_16)) {
   VAR_16->data_received = 0;
   VAR_16->pm_wakeup_fw_try = 0;
   FUNC_3(&VAR_16->wakeup_timer);
   if (VAR_16->ps_state == VAR_13)
    VAR_16->ps_state = VAR_11;
  } else {

   if (VAR_16->pm_wakeup_fw_try)
    break;
   if (VAR_16->ps_state == VAR_12)
    FUNC_7(VAR_16);

   if (VAR_16->ps_state != VAR_11)
    break;
   if (VAR_16->tx_lock_flag) {
    if (VAR_16->iface_type == VAR_10) {
     if (!VAR_16->usb_mc_setup)
      break;
    } else
     break;
   }

   if ((!VAR_16->scan_chan_gap_enabled &&
        VAR_16->scan_processing) || VAR_16->data_sent ||
        FUNC_13
        (FUNC_9(VAR_16,
            VAR_3)) ||
       (FUNC_21(VAR_16) &&
        FUNC_6(VAR_16) &&
        FUNC_23(&VAR_16->tx_data_q))) {
    if (VAR_16->cmd_sent || VAR_16->curr_cmd ||
     !FUNC_12
      (FUNC_9(VAR_16,
      VAR_3)) ||
        (!FUNC_4(VAR_16)))
     break;
   }
  }


  if (VAR_16->event_received) {
   VAR_16->event_received = 0;
   FUNC_16(VAR_16);
  }


  if (VAR_16->cmd_resp_received) {
   VAR_16->cmd_resp_received = 0;
   FUNC_15(VAR_16);


   if (VAR_16->hw_status == VAR_4) {
    VAR_16->hw_status = VAR_6;
    FUNC_11(VAR_16);
   }
  }



  if (VAR_16->ps_state == VAR_12)
   FUNC_7(VAR_16);




  if ((VAR_16->ps_state == VAR_13) ||
      (VAR_16->ps_state == VAR_12) ||
      (VAR_16->ps_state == VAR_14)) {
   continue;
  }

  if (VAR_16->tx_lock_flag) {
   if (VAR_16->iface_type == VAR_10) {
    if (!VAR_16->usb_mc_setup)
     continue;
   } else
    continue;
  }

  if (!VAR_16->cmd_sent && !VAR_16->curr_cmd &&
      FUNC_12
      (FUNC_9(VAR_16, VAR_3))) {
   if (FUNC_8(VAR_16) == -1) {
    VAR_17 = -1;
    break;
   }
  }




  if (VAR_16->iface_type == VAR_10 &&
      VAR_16->usb_mc_setup)
   continue;

  if ((VAR_16->scan_chan_gap_enabled ||
       !VAR_16->scan_processing) &&
      !VAR_16->data_sent &&
      !FUNC_23(&VAR_16->tx_data_q)) {
   FUNC_18(VAR_16);
   if (VAR_16->hs_activated) {
    FUNC_2(VAR_7,
       &VAR_16->work_flags);
    FUNC_10
     (FUNC_9
     (VAR_16, VAR_2),
     0);
   }
  }

  if ((VAR_16->scan_chan_gap_enabled ||
       !VAR_16->scan_processing) &&
      !VAR_16->data_sent &&
      !FUNC_6(VAR_16) &&
      !FUNC_13
   (FUNC_9(VAR_16, VAR_3))) {
   FUNC_14(VAR_16);
   if (VAR_16->hs_activated) {
    FUNC_2(VAR_7,
       &VAR_16->work_flags);
    FUNC_10
     (FUNC_9
      (VAR_16, VAR_2),
      0);
   }
  }

  if ((VAR_16->scan_chan_gap_enabled ||
       !VAR_16->scan_processing) &&
      !VAR_16->data_sent && !FUNC_21(VAR_16) &&
      !FUNC_13
   (FUNC_9(VAR_16, VAR_3))) {
   FUNC_22(VAR_16);
   if (VAR_16->hs_activated) {
    FUNC_2(VAR_7,
       &VAR_16->work_flags);
    FUNC_10
     (FUNC_9
      (VAR_16, VAR_2),
      0);
   }
  }

  if (VAR_16->delay_null_pkt && !VAR_16->cmd_sent &&
      !VAR_16->curr_cmd && !FUNC_4(VAR_16) &&
      (FUNC_21(VAR_16) &&
       FUNC_6(VAR_16) &&
       FUNC_23(&VAR_16->tx_data_q))) {
   if (!FUNC_20
       (FUNC_9(VAR_16, VAR_3),
        VAR_9 |
        VAR_8)) {
    VAR_16->delay_null_pkt = 0;
    VAR_16->ps_state = VAR_13;
   }
   break;
  }
 } while (1);

 FUNC_24(&VAR_16->main_proc_lock, VAR_18);
 if (VAR_16->more_task_flag) {
  VAR_16->more_task_flag = 0;
  FUNC_25(&VAR_16->main_proc_lock, VAR_18);
  goto process_start;
 }
 VAR_16->mwifiex_processing = 0;
 FUNC_25(&VAR_16->main_proc_lock, VAR_18);

 return VAR_17;
}
