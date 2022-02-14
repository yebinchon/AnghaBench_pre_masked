
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_pio_control {int dummy; } ;
struct st_pinctrl {struct st_pctl_data* data; } ;
struct st_pctl_data {scalar_t__ rt_style; } ;


 int VAR_0 ;
 int FUNC_0 (struct st_pinctrl*,int,struct st_pio_control*) ;
 int FUNC_1 (struct st_pinctrl*,int,struct st_pio_control*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_2(struct st_pinctrl *VAR_3,
 int VAR_4, struct st_pio_control *VAR_5)
{
 const struct st_pctl_data *VAR_6 = VAR_3->data;
 if (VAR_6->rt_style == VAR_2)
  return FUNC_1(VAR_3, VAR_4, VAR_5);
 else if (VAR_6->rt_style == VAR_1)
  return FUNC_0(VAR_3, VAR_4, VAR_5);

 return -VAR_0;
}
