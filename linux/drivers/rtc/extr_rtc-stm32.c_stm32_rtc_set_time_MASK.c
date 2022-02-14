
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
 int FUNC_0 (struct device*,char*) ;
 struct stm32_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (struct stm32_rtc*) ;
 int FUNC_3 (struct stm32_rtc*) ;
 int FUNC_4 (struct stm32_rtc*) ;
 int FUNC_5 (struct stm32_rtc*) ;
 int FUNC_6 (struct stm32_rtc*) ;
 int FUNC_7 (struct rtc_time*) ;
 int FUNC_8 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_14, struct rtc_time *VAR_15)
{
 struct stm32_rtc *VAR_16 = FUNC_1(VAR_14);
 const struct stm32_rtc_registers *VAR_17 = &VAR_16->data->regs;
 unsigned int VAR_18, VAR_19;
 int VAR_20 = 0;

 FUNC_7(VAR_15);


 VAR_18 = ((VAR_15->tm_sec << VAR_13) & VAR_12) |
      ((VAR_15->tm_min << VAR_11) & VAR_10) |
      ((VAR_15->tm_hour << VAR_9) & VAR_8);


 VAR_19 = ((VAR_15->tm_mday << VAR_1) & VAR_0) |
      ((VAR_15->tm_mon << VAR_3) & VAR_2) |
      ((VAR_15->tm_year << VAR_7) & VAR_6) |
      ((VAR_15->tm_wday << VAR_5) & VAR_4);

 FUNC_6(VAR_16);

 VAR_20 = FUNC_2(VAR_16);
 if (VAR_20) {
  FUNC_0(VAR_14, "Can't enter in init mode. Set time aborted.\n");
  goto end;
 }

 FUNC_8(VAR_18, VAR_16->base + VAR_17->tr);
 FUNC_8(VAR_19, VAR_16->base + VAR_17->dr);

 FUNC_3(VAR_16);

 VAR_20 = FUNC_4(VAR_16);
end:
 FUNC_5(VAR_16);

 return VAR_20;
}
