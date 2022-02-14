
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct as3722_rtc {int irq_enable; int alarm_irq; } ;


 struct as3722_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0,
  unsigned int VAR_1)
{
 struct as3722_rtc *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1 && !VAR_2->irq_enable) {
  FUNC_2(VAR_2->alarm_irq);
  VAR_2->irq_enable = 1;
 } else if (!VAR_1 && VAR_2->irq_enable) {
  FUNC_1(VAR_2->alarm_irq);
  VAR_2->irq_enable = 0;
 }
 return 0;
}
