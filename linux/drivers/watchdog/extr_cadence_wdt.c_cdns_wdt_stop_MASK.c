
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct cdns_wdt {int io_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cdns_wdt*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct cdns_wdt* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_3)
{
 struct cdns_wdt *VAR_4 = FUNC_3(VAR_3);

 FUNC_1(&VAR_4->io_lock);
 FUNC_0(VAR_4, VAR_0,
     VAR_2 & (~VAR_1));
 FUNC_2(&VAR_4->io_lock);

 return 0;
}
