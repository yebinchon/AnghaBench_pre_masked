
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct watchdog_device {int dummy; } ;
struct bcm7038_watchdog {unsigned int rate; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 struct bcm7038_watchdog* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static unsigned int FUNC_2(struct watchdog_device *VAR_1)
{
 struct bcm7038_watchdog *VAR_2 = FUNC_1(VAR_1);
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2->base + VAR_0);

 return VAR_3 / VAR_2->rate;
}
