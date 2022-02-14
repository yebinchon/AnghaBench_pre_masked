
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int dummy; } ;
struct davinci_wdt_device {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int,scalar_t__) ;
 struct davinci_wdt_device* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_13,
          unsigned long VAR_14, void *VAR_15)
{
 struct davinci_wdt_device *VAR_16 = FUNC_1(VAR_13);
 u32 VAR_17, VAR_18;


 FUNC_0(0, VAR_16->base + VAR_2);


 VAR_17 = 0;
 FUNC_0(VAR_17, VAR_16->base + VAR_3);
 VAR_17 = VAR_8 | VAR_5 | VAR_7;
 FUNC_0(VAR_17, VAR_16->base + VAR_3);


 FUNC_0(0, VAR_16->base + VAR_4);
 FUNC_0(0, VAR_16->base + VAR_6);
 FUNC_0(0, VAR_16->base + VAR_0);
 FUNC_0(0, VAR_16->base + VAR_1);


 VAR_18 = VAR_10 | VAR_9;
 FUNC_0(VAR_18, VAR_16->base + VAR_12);


 VAR_18 = VAR_11 | VAR_9;
 FUNC_0(VAR_18, VAR_16->base + VAR_12);


 VAR_18 = 0x00004000;
 FUNC_0(VAR_18, VAR_16->base + VAR_12);

 return 0;
}
