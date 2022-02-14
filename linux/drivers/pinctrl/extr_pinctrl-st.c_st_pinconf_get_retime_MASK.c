
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_pio_control {int rt_pin_mask; } ;
struct st_pinctrl {TYPE_1__* data; } ;
struct TYPE_2__ {scalar_t__ rt_style; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct st_pinctrl*,struct st_pio_control*,int,unsigned long*) ;
 int FUNC_2 (struct st_pinctrl*,struct st_pio_control*,int,unsigned long*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_3(struct st_pinctrl *VAR_2,
 struct st_pio_control *VAR_3, int VAR_4, unsigned long *VAR_5)
{
 if (VAR_2->data->rt_style == VAR_1)
  FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
 else if (VAR_2->data->rt_style == VAR_0)
  if ((FUNC_0(VAR_4) & VAR_3->rt_pin_mask))
   FUNC_1(VAR_2, VAR_3,
     VAR_4, VAR_5);
}
