
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cpcap_rtc {unsigned int alarm_enabled; int alarm_irq; } ;


 struct cpcap_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, unsigned int VAR_1)
{
 struct cpcap_rtc *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->alarm_enabled == VAR_1)
  return 0;

 if (VAR_1)
  FUNC_2(VAR_2->alarm_irq);
 else
  FUNC_1(VAR_2->alarm_irq);

 VAR_2->alarm_enabled = !!VAR_1;

 return 0;
}
