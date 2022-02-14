
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_pio_control {int dummy; } ;
struct st_pinctrl {int dummy; } ;
struct pinctrl_dev {int dummy; } ;


 struct st_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 struct st_pio_control* FUNC_1 (struct pinctrl_dev*,unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct st_pio_control*,int,unsigned long*) ;
 int FUNC_4 (struct st_pinctrl*,struct st_pio_control*,int,unsigned long*) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_0,
        unsigned VAR_1, unsigned long *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_1);
 struct st_pinctrl *VAR_4 = FUNC_0(VAR_0);
 struct st_pio_control *VAR_5 = FUNC_1(VAR_0, VAR_1);

 *VAR_2 = 0;
 FUNC_3(VAR_5, VAR_3, VAR_2);
 FUNC_4(VAR_4, VAR_5, VAR_3, VAR_2);

 return 0;
}
