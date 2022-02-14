
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_entry_t ;
typedef size_t u8 ;
typedef int u32 ;
struct net_device {int dismantle; struct lbs_private* ml_priv; } ;
struct lbs_private {scalar_t__ currenttxskb; scalar_t__ psstate; scalar_t__ tx_pending_len; size_t resp_idx; scalar_t__ connect_status; int (* hw_host_to_card ) (struct lbs_private*,int ,int ,scalar_t__) ;int auto_deepsleep_timer; int tx_lockup_timer; int command_timer; int driver_lock; scalar_t__ mesh_dev; scalar_t__ dev; scalar_t__ dnld_sent; int tx_pending_buf; struct cmd_ctrl_node* cur_cmd; scalar_t__ is_deep_sleep; int fw_ready; scalar_t__ cmd_timed_out; int (* reset_card ) (struct lbs_private*) ;scalar_t__ (* exit_deep_sleep ) (struct lbs_private*) ;scalar_t__ wakeup_dev_required; int event_fifo; scalar_t__* resp_len; int * resp_buf; scalar_t__ surpriseremoved; int waitq; scalar_t__ psmode; int cmdpendingq; } ;
struct cmd_ctrl_node {TYPE_1__* cmdbuf; } ;
typedef int event ;
struct TYPE_2__ {int command; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int *) ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char*,int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct lbs_private*,struct cmd_ctrl_node*,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (struct lbs_private*) ;
 int FUNC_10 (struct lbs_private*,int ,scalar_t__) ;
 int FUNC_11 (struct lbs_private*,int ) ;
 int FUNC_12 (struct lbs_private*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,scalar_t__) ;
 int FUNC_16 (struct net_device*,char*) ;
 int FUNC_17 (struct net_device*,char*,int ) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (int *,int *) ;
 int FUNC_21 () ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 scalar_t__ FUNC_25 (struct lbs_private*) ;
 int FUNC_26 (struct lbs_private*) ;
 int FUNC_27 (struct lbs_private*,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_28(void *VAR_12)
{
 struct net_device *VAR_13 = VAR_12;
 struct lbs_private *VAR_14 = VAR_13->ml_priv;
 wait_queue_entry_t VAR_15;

 FUNC_2(&VAR_15, VAR_10);

 for (;;) {
  int VAR_16;
  u8 VAR_17;

  FUNC_7("1: currenttxskb %p, dnld_sent %d\n",
    VAR_14->currenttxskb, VAR_14->dnld_sent);

  FUNC_0(&VAR_14->waitq, &VAR_15);
  FUNC_22(VAR_8);
  FUNC_23(&VAR_14->driver_lock);

  if (FUNC_5())
   VAR_16 = 0;
  else if (VAR_14->surpriseremoved)
   VAR_16 = 1;
  else if (VAR_14->psstate == VAR_7)
   VAR_16 = 1;
  else if (VAR_14->cmd_timed_out)
   VAR_16 = 0;
  else if (!VAR_14->fw_ready)
   VAR_16 = 1;
  else if (VAR_14->dnld_sent)
   VAR_16 = 1;
  else if (VAR_14->tx_pending_len > 0)
   VAR_16 = 0;
  else if (VAR_14->resp_len[VAR_14->resp_idx])
   VAR_16 = 0;
  else if (VAR_14->cur_cmd)
   VAR_16 = 1;
  else if (!FUNC_14(&VAR_14->cmdpendingq) &&
     !(VAR_14->wakeup_dev_required))
   VAR_16 = 0;
  else if (FUNC_3(&VAR_14->event_fifo))
   VAR_16 = 0;
  else
   VAR_16 = 1;

  if (VAR_16) {
   FUNC_7("sleeping, connect_status %d, "
    "psmode %d, psstate %d\n",
    VAR_14->connect_status,
    VAR_14->psmode, VAR_14->psstate);
   FUNC_24(&VAR_14->driver_lock);
   FUNC_21();
  } else
   FUNC_24(&VAR_14->driver_lock);

  FUNC_7("2: currenttxskb %p, dnld_send %d\n",
          VAR_14->currenttxskb, VAR_14->dnld_sent);

  FUNC_22(VAR_9);
  FUNC_20(&VAR_14->waitq, &VAR_15);

  FUNC_7("3: currenttxskb %p, dnld_sent %d\n",
          VAR_14->currenttxskb, VAR_14->dnld_sent);

  if (FUNC_5()) {
   FUNC_7("break from main thread\n");
   break;
  }

  if (VAR_14->surpriseremoved) {
   FUNC_7("adapter removed; waiting to die...\n");
   continue;
  }

  FUNC_7("4: currenttxskb %p, dnld_sent %d\n",
         VAR_14->currenttxskb, VAR_14->dnld_sent);


  FUNC_23(&VAR_14->driver_lock);
  VAR_17 = VAR_14->resp_idx;
  if (VAR_14->resp_len[VAR_17]) {
   FUNC_24(&VAR_14->driver_lock);
   FUNC_10(VAR_14,
    VAR_14->resp_buf[VAR_17],
    VAR_14->resp_len[VAR_17]);
   FUNC_23(&VAR_14->driver_lock);
   VAR_14->resp_len[VAR_17] = 0;
  }
  FUNC_24(&VAR_14->driver_lock);


  FUNC_23(&VAR_14->driver_lock);
  while (FUNC_3(&VAR_14->event_fifo)) {
   u32 VAR_18;

   if (FUNC_4(&VAR_14->event_fifo,
    (unsigned char *) &VAR_18, sizeof(VAR_18)) !=
    sizeof(VAR_18))
     break;
   FUNC_24(&VAR_14->driver_lock);
   FUNC_11(VAR_14, VAR_18);
   FUNC_23(&VAR_14->driver_lock);
  }
  FUNC_24(&VAR_14->driver_lock);

  if (VAR_14->wakeup_dev_required) {
   FUNC_7("Waking up device...\n");

   if (VAR_14->exit_deep_sleep(VAR_14))
    FUNC_7("Wakeup device failed\n");
   continue;
  }


  if (VAR_14->cmd_timed_out && VAR_14->cur_cmd) {
   struct cmd_ctrl_node *VAR_19 = VAR_14->cur_cmd;

   FUNC_17(VAR_13, "Timeout submitting command 0x%04x\n",
        FUNC_13(VAR_19->cmdbuf->command));
   FUNC_6(VAR_14, VAR_19, -VAR_1);



   if (!VAR_13->dismantle && VAR_14->reset_card)
    VAR_14->reset_card(VAR_14);
  }
  VAR_14->cmd_timed_out = 0;

  if (!VAR_14->fw_ready)
   continue;


  if (VAR_14->psstate == VAR_6 &&
      !VAR_14->dnld_sent && !VAR_14->cur_cmd) {
   if (VAR_14->connect_status == VAR_3) {
    FUNC_7("pre-sleep, currenttxskb %p, "
     "dnld_sent %d, cur_cmd %p\n",
     VAR_14->currenttxskb, VAR_14->dnld_sent,
     VAR_14->cur_cmd);

    FUNC_12(VAR_14);
   } else {





    VAR_14->psstate = VAR_5;
    FUNC_16(VAR_13,
          "ignore PS_SleepConfirm in non-connected state\n");
   }
  }




  if ((VAR_14->psstate == VAR_7) ||
      (VAR_14->psstate == VAR_6))
   continue;

  if (VAR_14->is_deep_sleep)
   continue;


  if (!VAR_14->dnld_sent && !VAR_14->cur_cmd)
   FUNC_9(VAR_14);

  FUNC_23(&VAR_14->driver_lock);
  if (!VAR_14->dnld_sent && VAR_14->tx_pending_len > 0) {
   int VAR_20 = VAR_14->hw_host_to_card(VAR_14, VAR_4,
       VAR_14->tx_pending_buf,
       VAR_14->tx_pending_len);
   if (VAR_20) {
    FUNC_8("host_to_card failed %d\n", VAR_20);
    VAR_14->dnld_sent = VAR_0;
   } else {
    FUNC_15(&VAR_14->tx_lockup_timer,
       VAR_11 + (VAR_2 * 5));
   }
   VAR_14->tx_pending_len = 0;
   if (!VAR_14->currenttxskb) {


    if (VAR_14->connect_status == VAR_3)
     FUNC_19(VAR_14->dev);
    if (VAR_14->mesh_dev &&
        FUNC_18(VAR_14->mesh_dev))
     FUNC_19(VAR_14->mesh_dev);
   }
  }
  FUNC_24(&VAR_14->driver_lock);
 }

 FUNC_1(&VAR_14->command_timer);
 FUNC_1(&VAR_14->tx_lockup_timer);
 FUNC_1(&VAR_14->auto_deepsleep_timer);

 return 0;
}
