
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_plat_data {scalar_t__ irq; int irqen; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rtc_plat_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct rtc_plat_data*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2,
 unsigned int VAR_3)
{
 struct rtc_plat_data *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->irq <= 0)
  return -VAR_0;
 if (VAR_3)
  VAR_4->irqen |= VAR_1;
 else
  VAR_4->irqen &= ~VAR_1;
 FUNC_1(VAR_4);
 return 0;
}
