
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct rtc_wkalrm {int enabled; TYPE_1__ time; } ;
struct rtc_plat_data {scalar_t__ irq; scalar_t__ alrm_mday; scalar_t__ alrm_hour; scalar_t__ alrm_min; scalar_t__ alrm_sec; int irqen; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rtc_plat_data* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_2, struct rtc_wkalrm *VAR_3)
{
 struct rtc_plat_data *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->irq <= 0)
  return -VAR_0;
 VAR_3->time.tm_mday = VAR_4->alrm_mday < 0 ? 0 : VAR_4->alrm_mday;
 VAR_3->time.tm_hour = VAR_4->alrm_hour < 0 ? 0 : VAR_4->alrm_hour;
 VAR_3->time.tm_min = VAR_4->alrm_min < 0 ? 0 : VAR_4->alrm_min;
 VAR_3->time.tm_sec = VAR_4->alrm_sec < 0 ? 0 : VAR_4->alrm_sec;
 VAR_3->enabled = (VAR_4->irqen & VAR_1) ? 1 : 0;
 return 0;
}
