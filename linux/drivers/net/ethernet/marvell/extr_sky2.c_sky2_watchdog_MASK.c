
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct sky2_hw {int ports; int flags; int watchdog_timer; int restart_work; struct net_device** dev; int napi; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct sky2_hw* FUNC_0 (int ,struct timer_list*,int ) ;
 struct sky2_hw* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*,char*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct sky2_hw*,int ) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_9(struct timer_list *VAR_6)
{
 struct sky2_hw *VAR_7 = FUNC_0(VAR_7, VAR_6, VAR_5);


 if (FUNC_7(VAR_7, VAR_0)) {
  FUNC_2(&VAR_7->napi);
 } else {
  int VAR_8, VAR_9 = 0;

  for (VAR_8 = 0; VAR_8 < VAR_7->ports; VAR_8++) {
   struct net_device *VAR_10 = VAR_7->dev[VAR_8];
   if (!FUNC_4(VAR_10))
    continue;
   ++VAR_9;


   if ((VAR_7->flags & VAR_2) &&
        FUNC_8(VAR_10)) {
    FUNC_3(VAR_10, "receiver hang detected\n");
    FUNC_6(&VAR_7->restart_work);
    return;
   }
  }

  if (VAR_9 == 0)
   return;
 }

 FUNC_1(&VAR_7->watchdog_timer, FUNC_5(VAR_4 + VAR_1));
}
