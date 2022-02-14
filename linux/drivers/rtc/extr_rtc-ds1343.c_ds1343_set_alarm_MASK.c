
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct rtc_wkalrm {scalar_t__ enabled; TYPE_1__ time; } ;
struct ds1343_priv {scalar_t__ irq; int mutex; int irqen; int alarm_mday; int alarm_hour; int alarm_min; int alarm_sec; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ds1343_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, struct rtc_wkalrm *VAR_3)
{
 struct ds1343_priv *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = 0;

 if (VAR_4->irq <= 0)
  return -VAR_0;

 FUNC_2(&VAR_4->mutex);

 VAR_4->alarm_sec = VAR_3->time.tm_sec;
 VAR_4->alarm_min = VAR_3->time.tm_min;
 VAR_4->alarm_hour = VAR_3->time.tm_hour;
 VAR_4->alarm_mday = VAR_3->time.tm_mday;

 if (VAR_3->enabled)
  VAR_4->irqen |= VAR_1;

 VAR_5 = FUNC_1(VAR_2);

 FUNC_3(&VAR_4->mutex);

 return VAR_5;
}
