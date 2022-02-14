
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct lpc18xx_wdt_dev {scalar_t__ base; int timer; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct watchdog_device*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 struct lpc18xx_wdt_dev* FUNC_4 (struct watchdog_device*) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct watchdog_device *VAR_3)
{
 struct lpc18xx_wdt_dev *VAR_4 = FUNC_4(VAR_3);
 unsigned int VAR_5;

 if (FUNC_3(&VAR_4->timer))
  FUNC_0(&VAR_4->timer);

 VAR_5 = FUNC_2(VAR_4->base + VAR_0);
 VAR_5 |= VAR_1;
 VAR_5 |= VAR_2;
 FUNC_5(VAR_5, VAR_4->base + VAR_0);






 FUNC_1(VAR_3);

 return 0;
}
