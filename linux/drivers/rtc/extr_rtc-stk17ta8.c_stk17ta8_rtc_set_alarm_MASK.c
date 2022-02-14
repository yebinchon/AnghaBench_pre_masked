
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tm_sec; int tm_min; int tm_hour; int tm_mday; } ;
struct rtc_wkalrm {scalar_t__ enabled; TYPE_1__ time; } ;
struct rtc_plat_data {scalar_t__ irq; int irqen; int alrm_sec; int alrm_min; int alrm_hour; int alrm_mday; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rtc_plat_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct rtc_plat_data*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, struct rtc_wkalrm *VAR_3)
{
 struct rtc_plat_data *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->irq <= 0)
  return -VAR_0;
 VAR_4->alrm_mday = VAR_3->time.tm_mday;
 VAR_4->alrm_hour = VAR_3->time.tm_hour;
 VAR_4->alrm_min = VAR_3->time.tm_min;
 VAR_4->alrm_sec = VAR_3->time.tm_sec;
 if (VAR_3->enabled)
  VAR_4->irqen |= VAR_1;
 FUNC_1(VAR_4);
 return 0;
}
