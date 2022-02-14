
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct timer_list {int dummy; } ;
struct sh_wdt {int lock; int dev; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct sh_wdt* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int VAR_4 ;
 struct sh_wdt* VAR_5 ;

__attribute__((used)) static void FUNC_10(struct timer_list *VAR_6)
{
 struct sh_wdt *VAR_7 = FUNC_1(VAR_7, VAR_6, VAR_4);
 unsigned long VAR_8;

 FUNC_7(&VAR_7->lock, VAR_8);
 if (FUNC_9(VAR_2, VAR_3)) {
  u8 VAR_9;

  VAR_9 = FUNC_4();
  VAR_9 &= ~VAR_0;
  FUNC_6(VAR_9);

  FUNC_5(0);

  FUNC_2(&VAR_7->timer, FUNC_3(VAR_1));
 } else
  FUNC_0(VAR_7->dev, "Heartbeat lost! Will not ping "
           "the watchdog\n");
 FUNC_8(&VAR_7->lock, VAR_8);
}
