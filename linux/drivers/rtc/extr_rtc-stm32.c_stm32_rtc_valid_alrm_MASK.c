
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_rtc_registers {int tr; int dr; } ;
struct stm32_rtc {scalar_t__ base; TYPE_1__* data; } ;
struct rtc_time {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct TYPE_2__ {struct stm32_rtc_registers regs; } ;


 int VAR_0 ;
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
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct stm32_rtc *VAR_13, struct rtc_time *VAR_14)
{
 const struct stm32_rtc_registers *VAR_15 = &VAR_13->data->regs;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 unsigned int VAR_22 = FUNC_0(VAR_13->base + VAR_15->dr);
 unsigned int VAR_23 = FUNC_0(VAR_13->base + VAR_15->tr);

 VAR_16 = (VAR_22 & VAR_1) >> VAR_2;
 VAR_17 = (VAR_22 & VAR_3) >> VAR_4;
 VAR_18 = (VAR_22 & VAR_5) >> VAR_6;
 VAR_21 = (VAR_23 & VAR_11) >> VAR_12;
 VAR_20 = (VAR_23 & VAR_9) >> VAR_10;
 VAR_19 = (VAR_23 & VAR_7) >> VAR_8;
 if ((((VAR_14->tm_year > VAR_18) &&
       (VAR_14->tm_mon == 0x1) && (VAR_17 == 0x12)) ||
      ((VAR_14->tm_year == VAR_18) &&
       (VAR_14->tm_mon <= VAR_17 + 1))) &&
     ((VAR_14->tm_mday > VAR_16) ||
      ((VAR_14->tm_mday == VAR_16) &&
      ((VAR_14->tm_hour > VAR_19) ||
       ((VAR_14->tm_hour == VAR_19) && (VAR_14->tm_min > VAR_20)) ||
       ((VAR_14->tm_hour == VAR_19) && (VAR_14->tm_min == VAR_20) &&
        (VAR_14->tm_sec >= VAR_21))))))
  return 0;

 return -VAR_0;
}
