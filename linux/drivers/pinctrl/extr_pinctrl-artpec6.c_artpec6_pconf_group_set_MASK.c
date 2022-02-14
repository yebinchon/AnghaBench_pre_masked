
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dev; } ;
struct TYPE_2__ {unsigned int num_pins; int * pins; } ;


 int FUNC_0 (struct pinctrl_dev*,unsigned int) ;
 int FUNC_1 (struct pinctrl_dev*,int ,unsigned long*,unsigned int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_1,
       unsigned int VAR_2, unsigned long *VAR_3,
       unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6;
 int VAR_7;

 FUNC_2(VAR_1->dev, "setting group %s configuration\n",
  FUNC_0(VAR_1, VAR_2));

 VAR_5 = VAR_0[VAR_2].num_pins;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_7 = FUNC_1(VAR_1,
    VAR_0[VAR_2].pins[VAR_6],
    VAR_3, VAR_4);

  if (VAR_7 < 0)
   return VAR_7;
 }

 return 0;
}
