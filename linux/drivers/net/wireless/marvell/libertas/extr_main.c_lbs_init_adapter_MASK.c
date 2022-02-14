
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lbs_private {int mac_control; int radio_on; int authtype_auto; int event_fifo; scalar_t__* resp_len; scalar_t__ resp_idx; int driver_lock; int cmdpendingq; int cmdfreeq; int auto_deepsleep_timer; int tx_lockup_timer; int command_timer; int lock; int fw_waitq; int host_sleep_q; scalar_t__ is_host_sleep_activated; scalar_t__ is_host_sleep_configured; int scan_q; int ds_awake_q; scalar_t__ wakeup_dev_required; scalar_t__ deep_sleep_required; scalar_t__ is_auto_deep_sleep_enabled; scalar_t__ is_deep_sleep; int psstate; int psmode; int channel; int connect_status; int current_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ) ;
 scalar_t__ FUNC_4 (struct lbs_private*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct lbs_private *VAR_11)
{
 int VAR_12;

 FUNC_1(VAR_11->current_addr);

 VAR_11->connect_status = VAR_6;
 VAR_11->channel = VAR_2;
 VAR_11->mac_control = VAR_0 | VAR_1;
 VAR_11->radio_on = 1;
 VAR_11->psmode = VAR_5;
 VAR_11->psstate = VAR_7;
 VAR_11->is_deep_sleep = 0;
 VAR_11->is_auto_deep_sleep_enabled = 0;
 VAR_11->deep_sleep_required = 0;
 VAR_11->wakeup_dev_required = 0;
 FUNC_2(&VAR_11->ds_awake_q);
 FUNC_2(&VAR_11->scan_q);
 VAR_11->authtype_auto = 1;
 VAR_11->is_host_sleep_configured = 0;
 VAR_11->is_host_sleep_activated = 0;
 FUNC_2(&VAR_11->host_sleep_q);
 FUNC_2(&VAR_11->fw_waitq);
 FUNC_5(&VAR_11->lock);

 FUNC_8(&VAR_11->command_timer, VAR_9, 0);
 FUNC_8(&VAR_11->tx_lockup_timer, VAR_10, 0);
 FUNC_8(&VAR_11->auto_deepsleep_timer, VAR_8, 0);

 FUNC_0(&VAR_11->cmdfreeq);
 FUNC_0(&VAR_11->cmdpendingq);

 FUNC_7(&VAR_11->driver_lock);


 if (FUNC_4(VAR_11)) {
  FUNC_6("Out of memory allocating command buffers\n");
  VAR_12 = -VAR_3;
  goto out;
 }
 VAR_11->resp_idx = 0;
 VAR_11->resp_len[0] = VAR_11->resp_len[1] = 0;


 VAR_12 = FUNC_3(&VAR_11->event_fifo, sizeof(u32) * 16, VAR_4);
 if (VAR_12) {
  FUNC_6("Out of memory allocating event FIFO buffer\n");
  goto out;
 }

out:
 return VAR_12;
}
