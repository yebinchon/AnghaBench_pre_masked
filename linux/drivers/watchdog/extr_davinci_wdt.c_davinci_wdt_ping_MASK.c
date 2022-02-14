
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct davinci_wdt_device {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 struct davinci_wdt_device* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_3)
{
 struct davinci_wdt_device *VAR_4 = FUNC_1(VAR_3);


 FUNC_0(VAR_0, VAR_4->base + VAR_2);

 FUNC_0(VAR_1, VAR_4->base + VAR_2);
 return 0;
}
