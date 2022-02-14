
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_rtc_registers {scalar_t__ sr; int cr; int alrmar; } ;
struct stm32_rtc_events {unsigned int alra; } ;
struct stm32_rtc {scalar_t__ base; TYPE_1__* data; } ;
struct rtc_time {int tm_mday; int tm_wday; int tm_hour; int tm_min; int tm_sec; } ;
struct rtc_wkalrm {int enabled; int pending; struct rtc_time time; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct stm32_rtc_events events; struct stm32_rtc_registers regs; } ;


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
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int FUNC_0 (struct rtc_time*) ;
 struct stm32_rtc* FUNC_1 (struct device*) ;
 unsigned int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_17, struct rtc_wkalrm *VAR_18)
{
 struct stm32_rtc *VAR_19 = FUNC_1(VAR_17);
 const struct stm32_rtc_registers *VAR_20 = &VAR_19->data->regs;
 const struct stm32_rtc_events *VAR_21 = &VAR_19->data->events;
 struct rtc_time *VAR_22 = &VAR_18->time;
 unsigned int VAR_23, VAR_24, VAR_25;

 VAR_23 = FUNC_2(VAR_19->base + VAR_20->alrmar);
 VAR_24 = FUNC_2(VAR_19->base + VAR_20->cr);
 VAR_25 = FUNC_2(VAR_19->base + VAR_20->sr);

 if (VAR_23 & VAR_1) {




  VAR_22->tm_mday = -1;
  VAR_22->tm_wday = -1;
 } else {
  if (VAR_23 & VAR_15) {

   VAR_22->tm_mday = -1;
   VAR_22->tm_wday = (VAR_23 & VAR_13) >>
          VAR_14;
   VAR_22->tm_wday %= 7;
  } else {

   VAR_22->tm_wday = -1;
   VAR_22->tm_mday = (VAR_23 & VAR_0) >>
           VAR_2;
  }
 }

 if (VAR_23 & VAR_4) {

  VAR_22->tm_hour = -1;
 } else {
  VAR_22->tm_hour = (VAR_23 & VAR_3) >>
          VAR_5;
  if (VAR_23 & VAR_9)
   VAR_22->tm_hour += 12;
 }

 if (VAR_23 & VAR_7) {

  VAR_22->tm_min = -1;
 } else {
  VAR_22->tm_min = (VAR_23 & VAR_6) >>
         VAR_8;
 }

 if (VAR_23 & VAR_11) {

  VAR_22->tm_sec = -1;
 } else {
  VAR_22->tm_sec = (VAR_23 & VAR_10) >>
         VAR_12;
 }

 FUNC_0(VAR_22);

 VAR_18->enabled = (VAR_24 & VAR_16) ? 1 : 0;
 VAR_18->pending = (VAR_25 & VAR_21->alra) ? 1 : 0;

 return 0;
}
