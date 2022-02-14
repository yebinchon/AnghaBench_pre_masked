
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocelot_pinctrl {TYPE_2__* desc; } ;
struct ocelot_pin_caps {unsigned int* functions; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct TYPE_3__ {struct ocelot_pin_caps* drv_data; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ocelot_pinctrl *VAR_1,
       unsigned int VAR_2, unsigned int VAR_3)
{
 struct ocelot_pin_caps *VAR_4 = VAR_1->desc->pins[VAR_2].drv_data;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_3 == VAR_4->functions[VAR_5])
   return VAR_5;
 }

 return -1;
}
