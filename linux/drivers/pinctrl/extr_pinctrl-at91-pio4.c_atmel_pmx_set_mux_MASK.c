
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct pinctrl_dev {int dev; } ;
struct atmel_pioctrl {TYPE_1__* groups; } ;
struct TYPE_2__ {unsigned int name; unsigned int pin; } ;


 unsigned int VAR_0 ;
 unsigned int* VAR_1 ;
 unsigned int FUNC_0 (struct pinctrl_dev*,unsigned int) ;
 int FUNC_1 (struct pinctrl_dev*,unsigned int,unsigned int) ;
 int FUNC_2 (int ,char*,unsigned int,unsigned int) ;
 struct atmel_pioctrl* FUNC_3 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_2,
        unsigned VAR_3,
        unsigned VAR_4)
{
 struct atmel_pioctrl *VAR_5 = FUNC_3(VAR_2);
 unsigned VAR_6;
 u32 VAR_7;

 FUNC_2(VAR_2->dev, "enable function %s group %s\n",
  VAR_1[VAR_3], VAR_5->groups[VAR_4].name);

 VAR_6 = VAR_5->groups[VAR_4].pin;
 VAR_7 = FUNC_0(VAR_2, VAR_6);
 VAR_7 &= (~VAR_0);
 VAR_7 |= (VAR_3 & VAR_0);
 FUNC_2(VAR_2->dev, "pin: %u, conf: 0x%08x\n", VAR_6, VAR_7);
 FUNC_1(VAR_2, VAR_6, VAR_7);

 return 0;
}
