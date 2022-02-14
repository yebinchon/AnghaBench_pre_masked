
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct max77686_rtc_info {int rtc_irq_data; int rtc_irq; int virq; } ;


 int FUNC_0 (int ,struct max77686_rtc_info*) ;
 struct max77686_rtc_info* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct max77686_rtc_info *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->virq, VAR_1);
 FUNC_2(VAR_1->rtc_irq, VAR_1->rtc_irq_data);

 return 0;
}
