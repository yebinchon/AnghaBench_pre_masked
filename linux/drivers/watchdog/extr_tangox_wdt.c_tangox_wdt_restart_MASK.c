
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct tangox_wdt_device {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 struct tangox_wdt_device* FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_1,
         unsigned long VAR_2, void *VAR_3)
{
 struct tangox_wdt_device *VAR_4 = FUNC_0(VAR_1);

 FUNC_1(1, VAR_4->base + VAR_0);

 return 0;
}
