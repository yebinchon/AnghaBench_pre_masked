
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; } ;
struct timer_list {int dummy; } ;
struct lpc18xx_wdt_dev {int timer; struct watchdog_device wdt_dev; } ;


 int VAR_0 ;
 struct lpc18xx_wdt_dev* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 struct lpc18xx_wdt_dev* VAR_2 ;
 int FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 struct lpc18xx_wdt_dev *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);
 struct watchdog_device *VAR_6 = &VAR_5->wdt_dev;

 FUNC_1(VAR_6);


 FUNC_2(&VAR_5->timer, VAR_1 +
    FUNC_3((VAR_6->timeout * VAR_0) / 2));
}
