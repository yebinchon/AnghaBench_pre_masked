
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_rtc {int lock; scalar_t__ regbase; } ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_mday; int tm_mon; } ;
struct rtc_wkalrm {scalar_t__ enabled; struct rtc_time time; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sh_rtc* FUNC_0 (struct device*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sh_rtc*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_9, struct rtc_wkalrm *VAR_10)
{
 struct sh_rtc *VAR_11 = FUNC_0(VAR_9);
 unsigned int VAR_12;
 struct rtc_time *VAR_13 = &VAR_10->time;
 int VAR_14;

 FUNC_3(&VAR_11->lock);


 VAR_12 = FUNC_1(VAR_11->regbase + VAR_0);
 VAR_12 &= ~(VAR_1 | VAR_2);
 FUNC_5(VAR_12, VAR_11->regbase + VAR_0);


 FUNC_2(VAR_11, VAR_13->tm_sec, VAR_7);
 FUNC_2(VAR_11, VAR_13->tm_min, VAR_5);
 FUNC_2(VAR_11, VAR_13->tm_hour, VAR_4);
 FUNC_2(VAR_11, VAR_13->tm_wday, VAR_8);
 FUNC_2(VAR_11, VAR_13->tm_mday, VAR_3);
 VAR_14 = VAR_13->tm_mon;
 if (VAR_14 >= 0)
  VAR_14 += 1;
 FUNC_2(VAR_11, VAR_14, VAR_6);

 if (VAR_10->enabled) {
  VAR_12 |= VAR_2;
  FUNC_5(VAR_12, VAR_11->regbase + VAR_0);
 }

 FUNC_4(&VAR_11->lock);

 return 0;
}
