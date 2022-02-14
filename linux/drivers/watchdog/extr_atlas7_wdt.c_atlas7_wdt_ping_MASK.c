
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int timeout; } ;
struct atlas7_wdog {int tick_rate; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct atlas7_wdog* FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_2)
{
 struct atlas7_wdog *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4, VAR_5, VAR_6;

 VAR_4 = FUNC_0(VAR_3->base + VAR_0);
 VAR_6 = VAR_2->timeout * VAR_3->tick_rate;
 VAR_5 = VAR_4 + VAR_6;

 FUNC_2(VAR_5, VAR_3->base + VAR_1);

 return 0;
}
