
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_pinctrl_regulator {int * regulator; int refcount; } ;
struct sunxi_pinctrl {struct sunxi_pinctrl_regulator* regulators; TYPE_1__* desc; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {unsigned int pin_base; } ;


 unsigned int VAR_0 ;
 struct sunxi_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_1, unsigned VAR_2)
{
 struct sunxi_pinctrl *VAR_3 = FUNC_0(VAR_1);
 unsigned short VAR_4 = VAR_2 / VAR_0;
 unsigned short VAR_5 = VAR_4 - VAR_3->desc->pin_base /
         VAR_0;
 struct sunxi_pinctrl_regulator *VAR_6 = &VAR_3->regulators[VAR_5];

 if (!FUNC_1(&VAR_6->refcount))
  return 0;

 FUNC_2(VAR_6->regulator);
 FUNC_3(VAR_6->regulator);
 VAR_6->regulator = ((void*)0);

 return 0;
}
