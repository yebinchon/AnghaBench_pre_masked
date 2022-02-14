
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max77693_charger {TYPE_1__* max77693; int dev; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct max77693_charger *VAR_4,
  unsigned int VAR_5)
{
 unsigned int VAR_6;

 switch (VAR_5) {
 case 4300000:
  VAR_6 = 0x0;
  break;
 case 4700000:
 case 4800000:
 case 4900000:
  VAR_6 = (VAR_5 - 4700000) / 100000;
  break;
 default:
  FUNC_1(VAR_4->dev, "Wrong value for charge input voltage regulation threshold\n");
  return -VAR_2;
 }

 VAR_6 <<= VAR_1;

 FUNC_0(VAR_4->dev, "Charge input voltage regulation threshold: %u (0x%x)\n",
   VAR_5, VAR_6);

 return FUNC_2(VAR_4->max77693->regmap,
   VAR_3,
   VAR_0, VAR_6);
}
