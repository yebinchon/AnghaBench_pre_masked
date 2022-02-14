
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct imx1_pinctrl {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct imx1_pinctrl*,unsigned int,int ) ;
 struct imx1_pinctrl* FUNC_1 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_1,
        unsigned VAR_2, unsigned long *VAR_3)
{
 struct imx1_pinctrl *VAR_4 = FUNC_1(VAR_1);

 *VAR_3 = FUNC_0(VAR_4, VAR_2, VAR_0);

 return 0;
}
