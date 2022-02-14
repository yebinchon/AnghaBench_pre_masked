
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_charger_info {int irq_nums; int * irq; int usb; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ,struct pm860x_charger_info*) ;
 struct pm860x_charger_info* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct pm860x_charger_info *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 FUNC_2(VAR_1->usb);
 for (VAR_2 = 0; VAR_2 < VAR_1->irq_nums; VAR_2++)
  FUNC_0(VAR_1->irq[VAR_2], VAR_1);
 return 0;
}
