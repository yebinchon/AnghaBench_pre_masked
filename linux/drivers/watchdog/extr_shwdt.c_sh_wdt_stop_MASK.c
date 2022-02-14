
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct watchdog_device {int dummy; } ;
struct sh_wdt {int dev; int clk; int lock; int timer; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct sh_wdt* FUNC_7 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_8(struct watchdog_device *VAR_1)
{
 struct sh_wdt *VAR_2 = FUNC_7(VAR_1);
 unsigned long VAR_3;
 u8 VAR_4;

 FUNC_5(&VAR_2->lock, VAR_3);

 FUNC_1(&VAR_2->timer);

 VAR_4 = FUNC_3();
 VAR_4 &= ~VAR_0;
 FUNC_4(VAR_4);

 FUNC_6(&VAR_2->lock, VAR_3);

 FUNC_0(VAR_2->clk);
 FUNC_2(VAR_2->dev);

 return 0;
}
