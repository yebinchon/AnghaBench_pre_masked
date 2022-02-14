
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_rtc {int irq_enabled; int irq; } ;
struct device {int dummy; } ;


 struct st_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, unsigned int VAR_1)
{
 struct st_rtc *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1 && !VAR_2->irq_enabled) {
  FUNC_2(VAR_2->irq);
  VAR_2->irq_enabled = 1;
 } else if (!VAR_1 && VAR_2->irq_enabled) {
  FUNC_1(VAR_2->irq);
  VAR_2->irq_enabled = 0;
 }

 return 0;
}
