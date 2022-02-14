
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm80x_rtc_info {int irq; int chip; } ;
struct platform_device {int dummy; } ;


 struct pm80x_rtc_info* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ,int ,struct pm80x_rtc_info*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct pm80x_rtc_info *VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_1->chip, VAR_1->irq, VAR_1);
 return 0;
}
