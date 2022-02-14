
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct axp20x_pctl {TYPE_1__* funcs; TYPE_2__* desc; } ;
struct TYPE_4__ {unsigned int ldo_mask; unsigned int adc_mask; } ;
struct TYPE_3__ {int muxval; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (struct pinctrl_dev*,unsigned int,int ) ;
 struct axp20x_pctl* FUNC_2 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_3,
         unsigned int VAR_4, unsigned int VAR_5)
{
 struct axp20x_pctl *VAR_6 = FUNC_2(VAR_3);
 unsigned int VAR_7;


 if (VAR_4 <= VAR_0)
  return FUNC_1(VAR_3, VAR_5,
          VAR_6->funcs[VAR_4].muxval);

 if (VAR_4 == VAR_1)
  VAR_7 = VAR_6->desc->ldo_mask;
 else
  VAR_7 = VAR_6->desc->adc_mask;

 if (!(FUNC_0(VAR_5) & VAR_7))
  return -VAR_2;







 if (VAR_4 == VAR_1)
  return 0;

 return FUNC_1(VAR_3, VAR_5, VAR_6->funcs[VAR_4].muxval);
}
