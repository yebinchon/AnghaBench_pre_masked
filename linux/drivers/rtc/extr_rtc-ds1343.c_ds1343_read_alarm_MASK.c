
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tm_sec; scalar_t__ tm_min; scalar_t__ tm_hour; scalar_t__ tm_mday; } ;
struct rtc_wkalrm {int enabled; int pending; TYPE_1__ time; } ;
struct ds1343_priv {scalar_t__ irq; int irqen; scalar_t__ alarm_sec; scalar_t__ alarm_min; scalar_t__ alarm_hour; scalar_t__ alarm_mday; int mutex; int map; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ds1343_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 struct ds1343_priv *VAR_6 = FUNC_0(VAR_4);
 int VAR_7 = 0;
 unsigned int VAR_8;

 if (VAR_6->irq <= 0)
  return -VAR_2;

 FUNC_1(&VAR_6->mutex);

 VAR_7 = FUNC_3(VAR_6->map, VAR_1, &VAR_8);
 if (VAR_7)
  goto out;

 VAR_5->enabled = !!(VAR_6->irqen & VAR_3);
 VAR_5->pending = !!(VAR_8 & VAR_0);

 VAR_5->time.tm_sec = VAR_6->alarm_sec < 0 ? 0 : VAR_6->alarm_sec;
 VAR_5->time.tm_min = VAR_6->alarm_min < 0 ? 0 : VAR_6->alarm_min;
 VAR_5->time.tm_hour = VAR_6->alarm_hour < 0 ? 0 : VAR_6->alarm_hour;
 VAR_5->time.tm_mday = VAR_6->alarm_mday < 0 ? 0 : VAR_6->alarm_mday;

out:
 FUNC_2(&VAR_6->mutex);
 return VAR_7;
}
