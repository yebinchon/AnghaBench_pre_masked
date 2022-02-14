
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct watchdog_device {int dummy; } ;
struct sh_wdt {int lock; int timer; int clk; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 struct sh_wdt* FUNC_11 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_12(struct watchdog_device *VAR_9)
{
 struct sh_wdt *VAR_10 = FUNC_11(VAR_9);
 unsigned long VAR_11;
 u8 VAR_12;

 FUNC_3(VAR_10->dev);
 FUNC_0(VAR_10->clk);

 FUNC_9(&VAR_10->lock, VAR_11);

 VAR_8 = VAR_7 + (VAR_6 * VAR_0);
 FUNC_1(&VAR_10->timer, FUNC_2(VAR_5));

 VAR_12 = FUNC_4();
 VAR_12 |= VAR_4 | VAR_5;
 FUNC_7(VAR_12);

 FUNC_6(0);
 VAR_12 = FUNC_4();
 VAR_12 |= VAR_3;
 VAR_12 &= ~VAR_2;
 FUNC_7(VAR_12);






 FUNC_10(&VAR_10->lock, VAR_11);

 return 0;
}
