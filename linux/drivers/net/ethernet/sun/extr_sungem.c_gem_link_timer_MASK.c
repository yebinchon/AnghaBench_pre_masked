
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct timer_list {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_7__ {int advertising; TYPE_2__* def; int speed; } ;
struct gem {scalar_t__ phy_type; scalar_t__ lstate; int timer_ticks; int link_timer; TYPE_3__ phy_mii; int last_forced_speed; scalar_t__ want_autoneg; scalar_t__ regs; scalar_t__ reset_task_pending; struct net_device* dev; } ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* setup_aneg ) (TYPE_3__*,int ) ;scalar_t__ (* poll_link ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct gem*) ;
 struct gem* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (struct gem*,int *) ;
 int FUNC_3 (struct gem*) ;
 int FUNC_4 (struct gem*) ;
 scalar_t__ FUNC_5 (struct gem*) ;
 struct gem* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (struct net_device*,char*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct gem*,int ,struct net_device*,char*) ;
 scalar_t__ FUNC_11 (struct gem*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_15(struct timer_list *VAR_13)
{
 struct gem *VAR_14 = FUNC_1(VAR_14, VAR_13, VAR_9);
 struct net_device *VAR_15 = VAR_14->dev;
 int VAR_16 = 0;


 if (VAR_14->reset_task_pending)
  return;

 if (VAR_14->phy_type == VAR_12 ||
     VAR_14->phy_type == VAR_11) {
  u32 VAR_17 = FUNC_12(VAR_14->regs + VAR_1);

  if (!(VAR_17 & VAR_2))
   VAR_17 = FUNC_12(VAR_14->regs + VAR_1);

  if ((VAR_17 & VAR_2) != 0) {
   if (VAR_14->lstate == VAR_10)
    goto restart;

   VAR_14->lstate = VAR_10;
   FUNC_9(VAR_15);
   (void)FUNC_5(VAR_14);
  }
  goto restart;
 }
 if (FUNC_0(VAR_14) && VAR_14->phy_mii.def->ops->poll_link(&VAR_14->phy_mii)) {





  if (VAR_14->lstate == VAR_8 && VAR_14->want_autoneg) {
   VAR_14->lstate = VAR_7;
   VAR_14->last_forced_speed = VAR_14->phy_mii.speed;
   VAR_14->timer_ticks = 5;
   if (FUNC_11(VAR_14))
    FUNC_7(VAR_15,
         "Got link after fallback, retrying autoneg once...\n");
   VAR_14->phy_mii.def->ops->setup_aneg(&VAR_14->phy_mii, VAR_14->phy_mii.advertising);
  } else if (VAR_14->lstate != VAR_10) {
   VAR_14->lstate = VAR_10;
   FUNC_9(VAR_15);
   if (FUNC_5(VAR_14))
    VAR_16 = 1;
  }
 } else {



  if (VAR_14->lstate == VAR_10) {
   VAR_14->lstate = VAR_6;
   FUNC_10(VAR_14, VAR_5, VAR_15, "Link down\n");
   FUNC_8(VAR_15);
   FUNC_4(VAR_14);

   return;
  } else if (++VAR_14->timer_ticks > 10) {
   if (FUNC_0(VAR_14))
    VAR_16 = FUNC_3(VAR_14);
   else
    VAR_16 = 1;
  }
 }
 if (VAR_16) {
  FUNC_2(VAR_14, ((void*)0));
  return;
 }
restart:
 FUNC_6(&VAR_14->link_timer, VAR_4 + ((12 * VAR_0) / 10));
}
