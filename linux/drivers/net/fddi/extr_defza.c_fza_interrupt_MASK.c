
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int expires; } ;
struct fza_private {int int_mask; int cmd_done_flag; int state; int queue_active; int state_chg_flag; int lock; int state_chg_wait; int name; TYPE_2__ reset_timer; int timer_state; int ring_smt_rx_index; int ring_smt_tx_index; int ring_hst_rx_index; int ring_rmc_txd_index; int ring_rmc_tx_index; int ring_uns_index; int ring_cmd_index; TYPE_1__* regs; int irq_count_state_chg; int irq_count_uns_poll; int irq_count_link_st_chg; int irq_count_flush_tx; int irq_count_smt_tx_poll; int irq_count_rx_poll; int irq_count_tx_done; int cmd_done_wait; int irq_count_cmd_done; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int status; int int_event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;






 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct net_device*,int ) ;
 int FUNC_6 (struct fza_private*) ;
 int FUNC_7 (struct fza_private*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct fza_private*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int VAR_14 ;
 struct fza_private* FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct net_device*) ;
 int FUNC_18 (struct net_device*) ;
 int FUNC_19 (struct net_device*) ;
 int FUNC_20 (char*,int ,...) ;
 int FUNC_21 (char*,int ) ;
 int FUNC_22 (char*,int ,int) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int,int *) ;

__attribute__((used)) static irqreturn_t FUNC_29(int VAR_15, void *VAR_16)
{
 struct net_device *VAR_17 = VAR_16;
 struct fza_private *VAR_18 = FUNC_15(VAR_17);
 uint VAR_19;


 VAR_19 = FUNC_23(&VAR_18->regs->int_event) & VAR_18->int_mask;
 if (VAR_19 == 0)
  return VAR_13;


 FUNC_28(VAR_19, &VAR_18->regs->int_event);




 if ((VAR_19 & VAR_0) != 0) {
  VAR_18->irq_count_cmd_done++;

  FUNC_25(&VAR_18->lock);
  VAR_18->cmd_done_flag = 1;
  FUNC_27(&VAR_18->cmd_done_wait);
  FUNC_26(&VAR_18->lock);
 }


 if ((VAR_19 & VAR_6) != 0) {
  VAR_18->irq_count_tx_done++;
  FUNC_11(VAR_17);
 }


 if ((VAR_19 & VAR_3) != 0) {
  VAR_18->irq_count_rx_poll++;
  FUNC_8(VAR_17);
 }


 if ((VAR_19 & VAR_4) != 0) {
  VAR_18->irq_count_smt_tx_poll++;
  FUNC_13(VAR_17);
 }


 if ((VAR_19 & VAR_1) != 0) {
  VAR_18->irq_count_flush_tx++;
  FUNC_12(VAR_17);
 }


 if ((VAR_19 & VAR_2) != 0) {
  uint VAR_20;

  VAR_18->irq_count_link_st_chg++;
  VAR_20 = FUNC_24(&VAR_18->regs->status);
  if (FUNC_1(VAR_20) == VAR_8) {
   FUNC_17(VAR_17);
   FUNC_21("%s: link available\n", VAR_18->name);
  } else {
   FUNC_16(VAR_17);
   FUNC_21("%s: link unavailable\n", VAR_18->name);
  }
 }


 if ((VAR_19 & VAR_7) != 0) {
  VAR_18->irq_count_uns_poll++;
  FUNC_14(VAR_17);
 }


 if ((VAR_19 & VAR_5) != 0) {
  uint VAR_21, VAR_22;

  VAR_18->irq_count_state_chg++;

  VAR_21 = FUNC_24(&VAR_18->regs->status);
  VAR_22 = FUNC_2(VAR_21);
  FUNC_20("%s: state change: %x\n", VAR_18->name, VAR_22);
  switch (VAR_22) {
  case 130:
   break;

  case 128:
   FUNC_16(VAR_17);
   FUNC_4(&VAR_18->reset_timer);
   VAR_18->ring_cmd_index = 0;
   VAR_18->ring_uns_index = 0;
   VAR_18->ring_rmc_tx_index = 0;
   VAR_18->ring_rmc_txd_index = 0;
   VAR_18->ring_hst_rx_index = 0;
   VAR_18->ring_smt_tx_index = 0;
   VAR_18->ring_smt_rx_index = 0;
   if (VAR_18->state > VAR_22) {
    FUNC_21("%s: OK\n", VAR_18->name);
    FUNC_5(VAR_17, VAR_9);
   }
   break;

  case 132:
   if (VAR_18->state > VAR_22) {
    FUNC_10(VAR_17);
    FUNC_5(VAR_17, VAR_10);
   }
   break;

  case 129:
  case 131:
   VAR_18->state = VAR_22;
   FUNC_9(VAR_18);
   VAR_18->queue_active = 1;
   FUNC_19(VAR_17);
   FUNC_20("%s: queue woken\n", VAR_18->name);
   break;

  case 133:
   VAR_18->queue_active = 0;
   FUNC_18(VAR_17);
   FUNC_20("%s: queue stopped\n", VAR_18->name);
   FUNC_4(&VAR_18->reset_timer);
   FUNC_22("%s: halted, reason: %x\n", VAR_18->name,
    FUNC_0(VAR_21));
   FUNC_7(VAR_18);
   FUNC_21("%s: resetting the board...\n", VAR_18->name);
   FUNC_6(VAR_18);
   VAR_18->timer_state = 0;
   VAR_18->reset_timer.expires = VAR_14 + 45 * VAR_11;
   FUNC_3(&VAR_18->reset_timer);
   break;

  default:
   FUNC_22("%s: undefined state: %x\n", VAR_18->name, VAR_22);
   break;
  }

  FUNC_25(&VAR_18->lock);
  VAR_18->state_chg_flag = 1;
  FUNC_27(&VAR_18->state_chg_wait);
  FUNC_26(&VAR_18->lock);
 }

 return VAR_12;
}
