
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ phy_retry; int phy_retry_expires; scalar_t__ link_up; } ;
struct bnxt {int fw_cap; int flags; scalar_t__ current_interval; int timer; int sp_event; struct net_device* dev; TYPE_1__ link_info; scalar_t__ stats_coal_ticks; int intr_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct bnxt*) ;
 int FUNC_2 (struct bnxt*) ;
 scalar_t__ FUNC_3 (struct bnxt*) ;
 struct bnxt* VAR_7 ;
 struct bnxt* FUNC_4 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (struct net_device*,char*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (scalar_t__,int ) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_11(struct timer_list *VAR_10)
{
 struct bnxt *VAR_11 = FUNC_4(VAR_11, VAR_10, VAR_9);
 struct net_device *VAR_12 = VAR_11->dev;

 if (!FUNC_8(VAR_12))
  return;

 if (FUNC_0(&VAR_11->intr_sem) != 0)
  goto bnxt_restart_timer;

 if (VAR_11->fw_cap & VAR_3)
  FUNC_1(VAR_11);

 if (VAR_11->link_info.link_up && (VAR_11->flags & VAR_1) &&
     VAR_11->stats_coal_ticks) {
  FUNC_9(VAR_4, &VAR_11->sp_event);
  FUNC_2(VAR_11);
 }

 if (FUNC_3(VAR_11)) {
  FUNC_9(VAR_2, &VAR_11->sp_event);
  FUNC_2(VAR_11);
 }

 if (VAR_11->link_info.phy_retry) {
  if (FUNC_10(VAR_8, VAR_11->link_info.phy_retry_expires)) {
   VAR_11->link_info.phy_retry = 0;
   FUNC_6(VAR_11->dev, "failed to update phy settings after maximum retries.\n");
  } else {
   FUNC_9(VAR_6, &VAR_11->sp_event);
   FUNC_2(VAR_11);
  }
 }

 if ((VAR_11->flags & VAR_0) && FUNC_7(VAR_12)) {
  FUNC_9(VAR_5, &VAR_11->sp_event);
  FUNC_2(VAR_11);
 }
bnxt_restart_timer:
 FUNC_5(&VAR_11->timer, VAR_8 + VAR_11->current_interval);
}
