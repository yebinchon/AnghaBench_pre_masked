
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct imx_pinctrl_soc_info {int flags; } ;
struct imx_pinctrl {struct imx_pinctrl_soc_info* info; } ;


 int VAR_0 ;
 int FUNC_0 (struct pinctrl_dev*,unsigned int,unsigned long*,unsigned int) ;
 int FUNC_1 (struct pinctrl_dev*,unsigned int,unsigned long*,unsigned int) ;
 struct imx_pinctrl* FUNC_2 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_1,
      unsigned VAR_2, unsigned long *VAR_3,
      unsigned VAR_4)
{
 struct imx_pinctrl *VAR_5 = FUNC_2(VAR_1);
 const struct imx_pinctrl_soc_info *VAR_6 = VAR_5->info;

 if (VAR_6->flags & VAR_0)
  return FUNC_1(VAR_1, VAR_2,
        VAR_3, VAR_4);
 else
  return FUNC_0(VAR_1, VAR_2,
         VAR_3, VAR_4);
}
