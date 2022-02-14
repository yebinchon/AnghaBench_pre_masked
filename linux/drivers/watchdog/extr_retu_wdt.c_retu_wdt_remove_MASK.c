
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct retu_wdt_dev {int ping_work; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct watchdog_device* FUNC_1 (struct platform_device*) ;
 struct retu_wdt_dev* FUNC_2 (struct watchdog_device*) ;
 int FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct watchdog_device *VAR_1 = FUNC_1(VAR_0);
 struct retu_wdt_dev *VAR_2 = FUNC_2(VAR_1);

 FUNC_3(VAR_1);
 FUNC_0(&VAR_2->ping_work);

 return 0;
}
