
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tm_sec; int tm_min; int tm_hour; int tm_yday; int tm_wday; int tm_mday; int tm_mon; int tm_year; } ;
struct rtc_wkalrm {scalar_t__ enabled; TYPE_1__ time; } ;
struct device {int dummy; } ;
struct asm9260_rtc_priv {scalar_t__ iobase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct asm9260_rtc_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_10, struct rtc_wkalrm *VAR_11)
{
 struct asm9260_rtc_priv *VAR_12 = FUNC_0(VAR_10);

 FUNC_1(VAR_11->time.tm_year, VAR_12->iobase + VAR_8);
 FUNC_1(VAR_11->time.tm_mon, VAR_12->iobase + VAR_6);
 FUNC_1(VAR_11->time.tm_mday, VAR_12->iobase + VAR_1);
 FUNC_1(VAR_11->time.tm_wday, VAR_12->iobase + VAR_2);
 FUNC_1(VAR_11->time.tm_yday, VAR_12->iobase + VAR_3);
 FUNC_1(VAR_11->time.tm_hour, VAR_12->iobase + VAR_4);
 FUNC_1(VAR_11->time.tm_min, VAR_12->iobase + VAR_5);
 FUNC_1(VAR_11->time.tm_sec, VAR_12->iobase + VAR_7);

 FUNC_1(VAR_11->enabled ? 0 : VAR_0, VAR_12->iobase + VAR_9);

 return 0;
}
