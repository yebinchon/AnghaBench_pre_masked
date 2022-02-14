
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct watchdog_device {int dummy; } ;
struct atlas7_wdog {unsigned int tick_rate; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 struct atlas7_wdog* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static unsigned int FUNC_2(struct watchdog_device *VAR_2)
{
 struct atlas7_wdog *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4, VAR_5, VAR_6;

 VAR_4 = FUNC_0(VAR_3->base + VAR_0);
 VAR_5 = FUNC_0(VAR_3->base + VAR_1);
 VAR_6 = VAR_5 - VAR_4;

 return VAR_6 / VAR_3->tick_rate;
}
