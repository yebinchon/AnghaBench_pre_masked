
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct stmp3xxx_wdt_pdata {int (* wdt_set_timeout ) (int ,int ) ;} ;
struct device {int parent; } ;


 struct stmp3xxx_wdt_pdata* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 struct device* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_0)
{
 struct device *VAR_1 = FUNC_2(VAR_0);
 struct stmp3xxx_wdt_pdata *VAR_2 = FUNC_0(VAR_1);

 VAR_2->wdt_set_timeout(VAR_1->parent, 0);
 return 0;
}
