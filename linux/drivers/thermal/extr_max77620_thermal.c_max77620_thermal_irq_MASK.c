
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77620_therm_info {int irq_tjalarm1; int irq_tjalarm2; int tz_device; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct max77620_therm_info *VAR_4 = VAR_3;

 if (VAR_2 == VAR_4->irq_tjalarm1)
  FUNC_1(VAR_4->dev, "Junction Temp Alarm1(120C) occurred\n");
 else if (VAR_2 == VAR_4->irq_tjalarm2)
  FUNC_0(VAR_4->dev, "Junction Temp Alarm2(140C) occurred\n");

 FUNC_2(VAR_4->tz_device,
       VAR_1);

 return VAR_0;
}
