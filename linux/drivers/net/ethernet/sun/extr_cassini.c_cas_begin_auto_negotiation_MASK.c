
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ autoneg; scalar_t__ speed; scalar_t__ duplex; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;
struct cas {int lstate; int link_cntl; int phy_type; int link_timer; scalar_t__ timer_ticks; void* link_transition; scalar_t__ regs; int reset_task; int reset_task_pending_all; int reset_task_pending; int dev; int hw_running; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct cas*,int) ;
 int FUNC_2 (struct cas*,int ) ;
 int FUNC_3 (struct cas*,int ,int) ;
 scalar_t__ VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct cas *VAR_23,
           const struct ethtool_link_ksettings *VAR_24)
{
 u16 VAR_25;

 int VAR_26;
 int VAR_27 = 0;
 int VAR_28 = VAR_23->lstate;
 int VAR_29 = !(VAR_28 == VAR_20);


 if (!VAR_24)
  goto start_aneg;
 VAR_26 = VAR_23->link_cntl;
 if (VAR_24->base.autoneg == VAR_0) {
  VAR_23->link_cntl = VAR_1;
 } else {
  u32 VAR_30 = VAR_24->base.speed;
  VAR_23->link_cntl = 0;
  if (VAR_30 == VAR_16)
   VAR_23->link_cntl |= VAR_4;
  else if (VAR_30 == VAR_17)
   VAR_23->link_cntl |= VAR_5;
  if (VAR_24->base.duplex == VAR_8)
   VAR_23->link_cntl |= VAR_3;
 }

 VAR_27 = (VAR_26 != VAR_23->link_cntl);

start_aneg:
 if (VAR_23->lstate == VAR_22) {
  FUNC_5(VAR_23->dev, "PCS link down\n");
 } else {
  if (VAR_27) {
   FUNC_5(VAR_23->dev, "link configuration changed\n");
  }
 }
 VAR_23->lstate = VAR_20;
 VAR_23->link_transition = VAR_10;
 if (!VAR_23->hw_running)
  return;






 if (VAR_28 == VAR_22)
  FUNC_6(VAR_23->dev);
 if (VAR_27 && VAR_29) {





  FUNC_0(&VAR_23->reset_task_pending);
  FUNC_0(&VAR_23->reset_task_pending_all);
  FUNC_8(&VAR_23->reset_task);
  VAR_23->timer_ticks = 0;
  FUNC_4(&VAR_23->link_timer, VAR_18 + VAR_6);
  return;
 }

 if (VAR_23->phy_type & VAR_7) {
  u32 VAR_31 = FUNC_7(VAR_23->regs + VAR_15);

  if (VAR_23->link_cntl & VAR_1) {
   VAR_31 |= (VAR_14 | VAR_12);
   VAR_23->lstate = VAR_19;
  } else {
   if (VAR_23->link_cntl & VAR_3)
    VAR_31 |= VAR_13;
   VAR_31 &= ~VAR_12;
   VAR_23->lstate = VAR_21;
  }
  VAR_23->link_transition = VAR_9;
  FUNC_9(VAR_31, VAR_23->regs + VAR_15);

 } else {
  FUNC_1(VAR_23, 0);
  VAR_25 = FUNC_2(VAR_23, VAR_11);
  VAR_25 &= ~(VAR_3 | VAR_4 |
    VAR_5 | VAR_1);
  VAR_25 |= VAR_23->link_cntl;
  if (VAR_25 & VAR_1) {
   VAR_25 |= VAR_2;
   VAR_23->lstate = VAR_19;
  } else {
   VAR_23->lstate = VAR_21;
  }
  VAR_23->link_transition = VAR_9;
  FUNC_3(VAR_23, VAR_11, VAR_25);
  FUNC_1(VAR_23, 1);
 }

 VAR_23->timer_ticks = 0;
 FUNC_4(&VAR_23->link_timer, VAR_18 + VAR_6);
}
