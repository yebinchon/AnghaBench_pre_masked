
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_rtc_registers {int alrmar; int isr; int cr; } ;
struct stm32_rtc {scalar_t__ base; TYPE_1__* data; } ;
struct rtc_time {unsigned int tm_mday; unsigned int tm_hour; unsigned int tm_min; unsigned int tm_sec; } ;
struct rtc_wkalrm {int enabled; struct rtc_time time; } ;
struct device {int dummy; } ;
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
 int FUNC_0 (struct device*,char*) ;
 struct stm32_rtc* FUNC_1 (struct device*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,unsigned int,unsigned int,int,int) ;
 int FUNC_4 (struct device*,int ) ;
 scalar_t__ FUNC_5 (struct stm32_rtc*,struct rtc_time*) ;
 int FUNC_6 (struct stm32_rtc*) ;
 int FUNC_7 (struct stm32_rtc*) ;
 int FUNC_8 (struct rtc_time*) ;
 int FUNC_9 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_12, struct rtc_wkalrm *VAR_13)
{
 struct stm32_rtc *VAR_14 = FUNC_1(VAR_12);
 const struct stm32_rtc_registers *VAR_15 = &VAR_14->data->regs;
 struct rtc_time *VAR_16 = &VAR_13->time;
 unsigned int VAR_17, VAR_18, VAR_19;
 int VAR_20 = 0;

 FUNC_8(VAR_16);





 if (FUNC_5(VAR_14, VAR_16) < 0) {
  FUNC_0(VAR_12, "Alarm can be set only on upcoming month.\n");
  return -VAR_0;
 }

 VAR_19 = 0;

 VAR_19 |= (VAR_16->tm_mday << VAR_2) &
    VAR_1;

 VAR_19 &= ~VAR_7;
 VAR_19 |= (VAR_16->tm_hour << VAR_4) &
    VAR_3;
 VAR_19 |= (VAR_16->tm_min << VAR_6) &
    VAR_5;
 VAR_19 |= (VAR_16->tm_sec << VAR_9) &
    VAR_8;

 FUNC_7(VAR_14);


 VAR_17 = FUNC_2(VAR_14->base + VAR_15->cr);
 VAR_17 &= ~VAR_10;
 FUNC_9(VAR_17, VAR_14->base + VAR_15->cr);





 VAR_20 = FUNC_3(VAR_14->base + VAR_15->isr,
      VAR_18,
      (VAR_18 & VAR_11),
      10, 100000);

 if (VAR_20) {
  FUNC_0(VAR_12, "Alarm update not allowed\n");
  goto end;
 }


 FUNC_9(VAR_19, VAR_14->base + VAR_15->alrmar);

 FUNC_4(VAR_12, VAR_13->enabled);
end:
 FUNC_6(VAR_14);

 return VAR_20;
}
