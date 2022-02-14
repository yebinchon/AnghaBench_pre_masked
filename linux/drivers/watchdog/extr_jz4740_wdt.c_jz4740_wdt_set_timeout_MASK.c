
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned short u16 ;
struct watchdog_device {unsigned int timeout; } ;
struct jz4740_wdt_drvdata {scalar_t__ base; int rtc_clk; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct jz4740_wdt_drvdata* FUNC_2 (struct watchdog_device*) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (unsigned short,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct watchdog_device *VAR_9,
        unsigned int VAR_10)
{
 struct jz4740_wdt_drvdata *VAR_11 = FUNC_2(VAR_9);
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned short VAR_14 = VAR_0;
 u8 VAR_15;

 VAR_12 = FUNC_0(VAR_11->rtc_clk);

 VAR_13 = VAR_12 * VAR_10;
 while (VAR_13 > 0xffff) {
  if (VAR_14 == VAR_1) {


   VAR_13 = 0xffff;
   break;
  }
  VAR_13 >>= 2;
  VAR_14 += (1 << VAR_7);
 }

 VAR_15 = FUNC_1(VAR_11->base + VAR_3);
 FUNC_3(0x0, VAR_11->base + VAR_3);
 FUNC_4(VAR_14, VAR_11->base + VAR_5);

 FUNC_4((u16)VAR_13, VAR_11->base + VAR_6);
 FUNC_4(0x0, VAR_11->base + VAR_4);
 FUNC_4(VAR_14 | VAR_2, VAR_11->base + VAR_5);

 if (VAR_15 & VAR_8)
  FUNC_3(VAR_8, VAR_11->base + VAR_3);

 VAR_9->timeout = VAR_10;
 return 0;
}
