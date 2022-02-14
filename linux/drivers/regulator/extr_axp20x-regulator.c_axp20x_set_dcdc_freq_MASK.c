
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct axp20x_dev {int variant; int regmap; } ;




 unsigned int VAR_0 ;
 int VAR_1 ;


 unsigned int VAR_2 ;

 unsigned int VAR_3 ;



 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 struct axp20x_dev* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (int ,unsigned int,int ,int) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_5, u32 VAR_6)
{
 struct axp20x_dev *VAR_7 = FUNC_1(VAR_5->dev.parent);
 unsigned int VAR_8 = VAR_0;
 u32 VAR_9, VAR_10, VAR_11, VAR_12;

 switch (VAR_7->variant) {
 case 135:
 case 134:
  VAR_9 = 750;
  VAR_10 = 1875;
  VAR_11 = 1500;
  VAR_12 = 75;
  break;
 case 131:
 case 128:





  VAR_8 = VAR_2;

 case 130:




  if (VAR_7->variant == 130)
   VAR_8 = VAR_3;

 case 133:
 case 132:
 case 129:
  VAR_9 = 1800;
  VAR_10 = 4050;
  VAR_11 = 3000;
  VAR_12 = 150;
  break;
 default:
  FUNC_0(&VAR_5->dev,
   "Setting DCDC frequency for unsupported AXP variant\n");
  return -VAR_4;
 }

 if (VAR_6 == 0)
  VAR_6 = VAR_11;

 if (VAR_6 < VAR_9) {
  VAR_6 = VAR_9;
  FUNC_2(&VAR_5->dev, "DCDC frequency too low. Set to %ukHz\n",
    VAR_9);
 }

 if (VAR_6 > VAR_10) {
  VAR_6 = VAR_10;
  FUNC_2(&VAR_5->dev, "DCDC frequency too high. Set to %ukHz\n",
    VAR_10);
 }

 VAR_6 = (VAR_6 - VAR_9) / VAR_12;

 return FUNC_3(VAR_7->regmap, VAR_8,
      VAR_1, VAR_6);
}
