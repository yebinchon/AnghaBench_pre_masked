
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
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,unsigned int) ;
 struct regmap* FUNC_1 (struct device*) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct regmap*,int ,unsigned int*) ;
 int FUNC_5 (struct regmap*,int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_7, void *VAR_8)
{
 struct input_dev *VAR_9 = VAR_8;
 struct device *VAR_10 = VAR_9->dev.parent;
 struct regmap *VAR_11 = FUNC_1(VAR_10);
 unsigned int VAR_12;
 int VAR_13;

 VAR_13 = FUNC_4(VAR_11, VAR_2, &VAR_12);
 if (VAR_13)
  return VAR_5;

 FUNC_0(VAR_10, "PBSTATUS=0x%x\n", VAR_12);
 FUNC_2(VAR_9, VAR_6, !(VAR_12 & VAR_3));
 FUNC_3(VAR_9);

 FUNC_5(VAR_11, VAR_1, VAR_0, 0);
 return VAR_4;
}
