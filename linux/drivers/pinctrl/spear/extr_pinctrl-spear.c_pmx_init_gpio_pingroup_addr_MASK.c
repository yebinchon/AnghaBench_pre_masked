
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct spear_gpio_pingroup {int nmuxregs; TYPE_1__* muxregs; } ;
struct TYPE_2__ {int reg; } ;



void FUNC_0(struct spear_gpio_pingroup *VAR_0,
     unsigned VAR_1, u16 VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  for (VAR_4 = 0; VAR_4 < VAR_0[VAR_3].nmuxregs; VAR_4++)
   VAR_0[VAR_3].muxregs[VAR_4].reg = VAR_2;
}
