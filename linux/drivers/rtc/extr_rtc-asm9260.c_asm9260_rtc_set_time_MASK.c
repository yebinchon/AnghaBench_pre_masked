
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_yday; int tm_wday; int tm_mday; int tm_mon; int tm_year; } ;
struct device {int dummy; } ;
struct asm9260_rtc_priv {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct asm9260_rtc_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_8, struct rtc_time *VAR_9)
{
 struct asm9260_rtc_priv *VAR_10 = FUNC_0(VAR_8);





 FUNC_1(0, VAR_10->iobase + VAR_6);

 FUNC_1(VAR_9->tm_year, VAR_10->iobase + VAR_7);
 FUNC_1(VAR_9->tm_mon, VAR_10->iobase + VAR_5);
 FUNC_1(VAR_9->tm_mday, VAR_10->iobase + VAR_0);
 FUNC_1(VAR_9->tm_wday, VAR_10->iobase + VAR_1);
 FUNC_1(VAR_9->tm_yday, VAR_10->iobase + VAR_2);
 FUNC_1(VAR_9->tm_hour, VAR_10->iobase + VAR_3);
 FUNC_1(VAR_9->tm_min, VAR_10->iobase + VAR_4);
 FUNC_1(VAR_9->tm_sec, VAR_10->iobase + VAR_6);

 return 0;
}
