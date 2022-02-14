
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct mtk_pinctrl {TYPE_1__* devdata; } ;
struct TYPE_2__ {unsigned int dir_offset; int (* spec_dir_set ) (unsigned int*,unsigned int) ;} ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int,struct mtk_pinctrl*) ;
 unsigned int FUNC_2 (unsigned int,struct mtk_pinctrl*) ;
 unsigned int FUNC_3 (struct mtk_pinctrl*,unsigned int) ;
 int FUNC_4 (struct mtk_pinctrl*,unsigned int) ;
 struct mtk_pinctrl* FUNC_5 (struct pinctrl_dev*) ;
 int FUNC_6 (int ,unsigned int,unsigned int) ;
 int FUNC_7 (unsigned int*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct pinctrl_dev *VAR_0,
   struct pinctrl_gpio_range *VAR_1, unsigned VAR_2,
   bool VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;
 struct mtk_pinctrl *VAR_6 = FUNC_5(VAR_0);

 VAR_4 = FUNC_3(VAR_6, VAR_2) + VAR_6->devdata->dir_offset;
 VAR_5 = FUNC_0(VAR_2 & 0xf);

 if (VAR_6->devdata->spec_dir_set)
  VAR_6->devdata->spec_dir_set(&VAR_4, VAR_2);

 if (VAR_3)

  VAR_4 = FUNC_1(VAR_4, VAR_6);
 else
  VAR_4 = FUNC_2(VAR_4, VAR_6);

 FUNC_6(FUNC_4(VAR_6, VAR_2), VAR_4, VAR_5);
 return 0;
}
