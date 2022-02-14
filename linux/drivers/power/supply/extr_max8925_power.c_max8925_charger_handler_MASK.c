
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8925_power_info {int ac_online; struct max8925_chip* chip; } ;
struct max8925_chip {int irq_base; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct max8925_power_info*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct max8925_power_info *VAR_3 = (struct max8925_power_info *)VAR_2;
 struct max8925_chip *VAR_4 = VAR_3->chip;

 switch (VAR_1 - VAR_4->irq_base) {
 case 136:
  VAR_3->ac_online = 1;
  FUNC_0(VAR_3, 1);
  FUNC_1(VAR_4->dev, "Adapter inserted\n");
  break;
 case 138:
  VAR_3->ac_online = 0;
  FUNC_0(VAR_3, 0);
  FUNC_1(VAR_4->dev, "Adapter removed\n");
  break;
 case 131:

  FUNC_1(VAR_4->dev, "Battery temperature is out of range\n");

 case 137:
  FUNC_1(VAR_4->dev, "Error detection\n");
  FUNC_0(VAR_3, 0);
  break;
 case 130:

  FUNC_1(VAR_4->dev, "Battery temperature is in range\n");
  break;
 case 132:

  FUNC_2(VAR_4->dev, "Sys power is too low\n");
  break;
 case 133:
  FUNC_1(VAR_4->dev, "Sys power is above low threshold\n");
  break;
 case 135:
  FUNC_0(VAR_3, 0);
  FUNC_1(VAR_4->dev, "Charging is done\n");
  break;
 case 128:
  FUNC_1(VAR_4->dev, "Charging in top-off mode\n");
  break;
 case 129:
  FUNC_0(VAR_3, 0);
  FUNC_1(VAR_4->dev, "Safe timer is expired\n");
  break;
 case 134:
  FUNC_0(VAR_3, 0);
  FUNC_1(VAR_4->dev, "Charger is reset\n");
  break;
 }
 return VAR_0;
}
