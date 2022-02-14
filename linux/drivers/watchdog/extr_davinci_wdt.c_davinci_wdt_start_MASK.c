
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef int u32 ;
struct watchdog_device {scalar_t__ timeout; } ;
struct davinci_wdt_device {scalar_t__ base; int clk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;
 struct davinci_wdt_device* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_14)
{
 u32 VAR_15;
 u32 VAR_16;
 unsigned long VAR_17;
 struct davinci_wdt_device *VAR_18 = FUNC_2(VAR_14);

 VAR_17 = FUNC_0(VAR_18->clk);


 FUNC_1(0, VAR_18->base + VAR_3);

 FUNC_1(0, VAR_18->base + VAR_4);
 VAR_15 = VAR_9 | VAR_6 | VAR_8;
 FUNC_1(VAR_15, VAR_18->base + VAR_4);

 FUNC_1(0, VAR_18->base + VAR_5);
 FUNC_1(0, VAR_18->base + VAR_7);

 VAR_16 = (((u64)VAR_14->timeout * VAR_17) & 0xffffffff);
 FUNC_1(VAR_16, VAR_18->base + VAR_1);
 VAR_16 = (((u64)VAR_14->timeout * VAR_17) >> 32);
 FUNC_1(VAR_16, VAR_18->base + VAR_2);

 FUNC_1(VAR_0, VAR_18->base + VAR_3);





 FUNC_1(VAR_11 | VAR_10, VAR_18->base + VAR_13);

 FUNC_1(VAR_12 | VAR_10, VAR_18->base + VAR_13);
 return 0;
}
