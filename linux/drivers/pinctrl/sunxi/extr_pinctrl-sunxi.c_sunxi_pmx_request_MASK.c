
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int supply ;
struct sunxi_pinctrl_regulator {struct regulator* regulator; int refcount; } ;
struct sunxi_pinctrl {int dev; struct sunxi_pinctrl_regulator* regulators; TYPE_1__* desc; } ;
struct regulator {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {unsigned int pin_base; } ;


 scalar_t__ FUNC_0 (struct regulator*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct regulator*) ;
 int FUNC_2 (int ,char*,char) ;
 struct sunxi_pinctrl* FUNC_3 (struct pinctrl_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct regulator*) ;
 struct regulator* FUNC_7 (int ,char*) ;
 int FUNC_8 (struct regulator*) ;
 int FUNC_9 (char*,int,char*,char) ;
 int FUNC_10 (struct sunxi_pinctrl*,unsigned int,struct regulator*) ;

__attribute__((used)) static int FUNC_11(struct pinctrl_dev *VAR_1, unsigned VAR_2)
{
 struct sunxi_pinctrl *VAR_3 = FUNC_3(VAR_1);
 unsigned short VAR_4 = VAR_2 / VAR_0;
 unsigned short VAR_5 = VAR_4 - VAR_3->desc->pin_base /
         VAR_0;
 struct sunxi_pinctrl_regulator *VAR_6 = &VAR_3->regulators[VAR_5];
 struct regulator *VAR_7 = VAR_6->regulator;
 char VAR_8[16];
 int VAR_9;

 if (VAR_7) {
  FUNC_4(&VAR_6->refcount);
  return 0;
 }

 FUNC_9(VAR_8, sizeof(VAR_8), "vcc-p%c", 'a' + VAR_4);
 VAR_7 = FUNC_7(VAR_3->dev, VAR_8);
 if (FUNC_0(VAR_7)) {
  FUNC_2(VAR_3->dev, "Couldn't get bank P%c regulator\n",
   'A' + VAR_4);
  return FUNC_1(VAR_7);
 }

 VAR_9 = FUNC_6(VAR_7);
 if (VAR_9) {
  FUNC_2(VAR_3->dev,
   "Couldn't enable bank P%c regulator\n", 'A' + VAR_4);
  goto out;
 }

 FUNC_10(VAR_3, VAR_2, VAR_7);

 VAR_6->regulator = VAR_7;
 FUNC_5(&VAR_6->refcount, 1);

 return 0;

out:
 FUNC_8(VAR_6->regulator);

 return VAR_9;
}
