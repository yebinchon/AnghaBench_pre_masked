
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* tm_sec; void* tm_min; void* tm_hour; void* tm_yday; void* tm_wday; void* tm_mday; void* tm_mon; void* tm_year; } ;
struct rtc_wkalrm {int enabled; int pending; TYPE_1__ time; } ;
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
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct asm9260_rtc_priv* FUNC_0 (struct device*) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_10, struct rtc_wkalrm *VAR_11)
{
 struct asm9260_rtc_priv *VAR_12 = FUNC_0(VAR_10);

 VAR_11->time.tm_year = FUNC_1(VAR_12->iobase + VAR_7);
 VAR_11->time.tm_mon = FUNC_1(VAR_12->iobase + VAR_5);
 VAR_11->time.tm_mday = FUNC_1(VAR_12->iobase + VAR_0);
 VAR_11->time.tm_wday = FUNC_1(VAR_12->iobase + VAR_1);
 VAR_11->time.tm_yday = FUNC_1(VAR_12->iobase + VAR_2);
 VAR_11->time.tm_hour = FUNC_1(VAR_12->iobase + VAR_3);
 VAR_11->time.tm_min = FUNC_1(VAR_12->iobase + VAR_4);
 VAR_11->time.tm_sec = FUNC_1(VAR_12->iobase + VAR_6);

 VAR_11->enabled = FUNC_1(VAR_12->iobase + VAR_8) ? 1 : 0;
 VAR_11->pending = FUNC_1(VAR_12->iobase + VAR_9) ? 1 : 0;

 return FUNC_2(&VAR_11->time);
}
