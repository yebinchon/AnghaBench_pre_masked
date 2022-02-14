
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; } ;
struct stmp3xxx_wdt_pdata {int (* wdt_set_timeout ) (int ,int) ;} ;
struct device {int parent; } ;


 int VAR_0 ;
 struct stmp3xxx_wdt_pdata* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int) ;
 struct device* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_1)
{
 struct device *VAR_2 = FUNC_2(VAR_1);
 struct stmp3xxx_wdt_pdata *VAR_3 = FUNC_0(VAR_2);

 VAR_3->wdt_set_timeout(VAR_2->parent, VAR_1->timeout * VAR_0);
 return 0;
}
