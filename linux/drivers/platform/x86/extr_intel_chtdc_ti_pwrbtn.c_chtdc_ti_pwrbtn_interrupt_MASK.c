
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct TYPE_2__ {struct device* parent; } ;
struct input_dev {TYPE_1__ dev; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct regmap* FUNC_1 (struct device*) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct regmap*,int ,int*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct input_dev *VAR_6 = VAR_5;
 struct device *VAR_7 = VAR_6->dev.parent;
 struct regmap *VAR_8 = FUNC_1(VAR_7);
 int VAR_9;

 if (!FUNC_4(VAR_8, VAR_0, &VAR_9)) {
  FUNC_0(VAR_7, "SIRQ_REG=0x%x\n", VAR_9);
  FUNC_2(VAR_6, VAR_2, !(VAR_9 & VAR_3));
  FUNC_3(VAR_6);
 }

 return VAR_1;
}
