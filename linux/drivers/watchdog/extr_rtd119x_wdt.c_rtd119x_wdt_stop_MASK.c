
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int dummy; } ;
struct rtd119x_watchdog_device {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 struct rtd119x_watchdog_device* FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_3)
{
 struct rtd119x_watchdog_device *VAR_4 = FUNC_1(VAR_3);
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_4->base + VAR_0);
 VAR_5 &= ~VAR_2;
 VAR_5 |= VAR_1;
 FUNC_2(VAR_5, VAR_4->base + VAR_0);

 return 0;
}
