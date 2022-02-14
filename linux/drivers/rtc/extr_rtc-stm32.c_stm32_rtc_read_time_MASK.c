
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_rtc_registers {int dr; int tr; } ;
struct stm32_rtc {scalar_t__ base; TYPE_1__* data; } ;
struct rtc_time {unsigned int tm_sec; unsigned int tm_min; unsigned int tm_hour; unsigned int tm_mday; unsigned int tm_mon; unsigned int tm_year; unsigned int tm_wday; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct stm32_rtc_registers regs; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_0 (struct rtc_time*) ;
 struct stm32_rtc* FUNC_1 (struct device*) ;
 unsigned int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_14, struct rtc_time *VAR_15)
{
 struct stm32_rtc *VAR_16 = FUNC_1(VAR_14);
 const struct stm32_rtc_registers *VAR_17 = &VAR_16->data->regs;
 unsigned int VAR_18, VAR_19;


 VAR_18 = FUNC_2(VAR_16->base + VAR_17->tr);
 VAR_19 = FUNC_2(VAR_16->base + VAR_17->dr);

 VAR_15->tm_sec = (VAR_18 & VAR_12) >> VAR_13;
 VAR_15->tm_min = (VAR_18 & VAR_10) >> VAR_11;
 VAR_15->tm_hour = (VAR_18 & VAR_8) >> VAR_9;

 VAR_15->tm_mday = (VAR_19 & VAR_0) >> VAR_1;
 VAR_15->tm_mon = (VAR_19 & VAR_2) >> VAR_3;
 VAR_15->tm_year = (VAR_19 & VAR_6) >> VAR_7;
 VAR_15->tm_wday = (VAR_19 & VAR_4) >> VAR_5;



 FUNC_0(VAR_15);

 return 0;
}
