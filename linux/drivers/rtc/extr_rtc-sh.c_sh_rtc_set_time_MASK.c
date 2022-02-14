
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_rtc {int capabilities; int lock; scalar_t__ regbase; } ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_mday; int tm_mon; int tm_year; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned int FUNC_0 (int) ;
 struct sh_rtc* FUNC_1 (struct device*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned int,scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_12, struct rtc_time *VAR_13)
{
 struct sh_rtc *VAR_14 = FUNC_1(VAR_12);
 unsigned int VAR_15;
 int VAR_16;

 FUNC_3(&VAR_14->lock);


 VAR_15 = FUNC_2(VAR_14->regbase + VAR_0);
 VAR_15 |= VAR_1;
 VAR_15 &= ~VAR_3;
 FUNC_5(VAR_15, VAR_14->regbase + VAR_0);

 FUNC_5(FUNC_0(VAR_13->tm_sec), VAR_14->regbase + VAR_8);
 FUNC_5(FUNC_0(VAR_13->tm_min), VAR_14->regbase + VAR_6);
 FUNC_5(FUNC_0(VAR_13->tm_hour), VAR_14->regbase + VAR_5);
 FUNC_5(FUNC_0(VAR_13->tm_wday), VAR_14->regbase + VAR_10);
 FUNC_5(FUNC_0(VAR_13->tm_mday), VAR_14->regbase + VAR_4);
 FUNC_5(FUNC_0(VAR_13->tm_mon + 1), VAR_14->regbase + VAR_7);

 if (VAR_14->capabilities & VAR_9) {
  VAR_16 = (FUNC_0((VAR_13->tm_year + 1900) / 100) << 8) |
   FUNC_0(VAR_13->tm_year % 100);
  FUNC_6(VAR_16, VAR_14->regbase + VAR_11);
 } else {
  VAR_16 = VAR_13->tm_year % 100;
  FUNC_5(FUNC_0(VAR_16), VAR_14->regbase + VAR_11);
 }


 VAR_15 = FUNC_2(VAR_14->regbase + VAR_0);
 VAR_15 &= ~VAR_1;
 VAR_15 |= VAR_2 | VAR_3;
 FUNC_5(VAR_15, VAR_14->regbase + VAR_0);

 FUNC_4(&VAR_14->lock);

 return 0;
}
