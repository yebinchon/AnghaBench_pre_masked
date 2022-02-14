
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct watchdog_device {unsigned int timeout; } ;
struct davinci_wdt_device {scalar_t__ base; int clk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int,unsigned long) ;
 int FUNC_2 (scalar_t__) ;
 struct davinci_wdt_device* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static unsigned int FUNC_4(struct watchdog_device *VAR_4)
{
 u64 VAR_5;
 unsigned long VAR_6;
 u32 VAR_7;
 struct davinci_wdt_device *VAR_8 = FUNC_3(VAR_4);


 VAR_7 = FUNC_2(VAR_8->base + VAR_3);
 if (VAR_7 & VAR_2)
  return 0;

 VAR_6 = FUNC_0(VAR_8->clk);

 if (!VAR_6)
  return 0;

 VAR_5 = FUNC_2(VAR_8->base + VAR_0);
 VAR_5 |= ((u64)FUNC_2(VAR_8->base + VAR_1) << 32);

 FUNC_1(VAR_5, VAR_6);

 return VAR_4->timeout - VAR_5;
}
