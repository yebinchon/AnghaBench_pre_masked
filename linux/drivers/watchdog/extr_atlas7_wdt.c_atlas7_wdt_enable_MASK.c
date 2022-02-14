
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct atlas7_wdog {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (scalar_t__) ;
 struct atlas7_wdog* FUNC_2 (struct watchdog_device*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_3)
{
 struct atlas7_wdog *VAR_4 = FUNC_2(VAR_3);

 FUNC_0(VAR_3);

 FUNC_3(FUNC_1(VAR_4->base + VAR_0) | VAR_1,
       VAR_4->base + VAR_0);
 FUNC_3(1, VAR_4->base + VAR_2);

 return 0;
}
