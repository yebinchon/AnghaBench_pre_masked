
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct bnx2 {int flags; int hc_cmd; int phy_flags; scalar_t__ current_interval; int timer; scalar_t__ stats_ticks; TYPE_1__* stats_blk; int intr_sem; int dev; } ;
struct TYPE_2__ {int stat_FwRxDrop; } ;


 scalar_t__ FUNC_0 (struct bnx2*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct bnx2*,int ,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct bnx2*) ;
 int FUNC_4 (struct bnx2*) ;
 int FUNC_5 (struct bnx2*) ;
 int FUNC_6 (struct bnx2*,int ) ;
 int FUNC_7 (struct bnx2*) ;
 struct bnx2* VAR_8 ;
 struct bnx2* FUNC_8 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int ) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_11(struct timer_list *VAR_11)
{
 struct bnx2 *VAR_12 = FUNC_8(VAR_12, VAR_11, VAR_10);

 if (!FUNC_10(VAR_12->dev))
  return;

 if (FUNC_2(&VAR_12->intr_sem) != 0)
  goto bnx2_restart_timer;

 if ((VAR_12->flags & (VAR_3 | VAR_2)) ==
      VAR_3)
  FUNC_5(VAR_12);

 FUNC_7(VAR_12);

 VAR_12->stats_blk->stat_FwRxDrop =
  FUNC_6(VAR_12, VAR_4);


 if ((VAR_12->flags & VAR_1) && VAR_12->stats_ticks)
  FUNC_1(VAR_12, VAR_5, VAR_12->hc_cmd |
   VAR_6);

 if (VAR_12->phy_flags & VAR_7) {
  if (FUNC_0(VAR_12) == VAR_0)
   FUNC_3(VAR_12);
  else
   FUNC_4(VAR_12);
 }

bnx2_restart_timer:
 FUNC_9(&VAR_12->timer, VAR_9 + VAR_12->current_interval);
}
