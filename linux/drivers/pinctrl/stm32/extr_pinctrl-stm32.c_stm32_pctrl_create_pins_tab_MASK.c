
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_pinctrl {int pkg; int npins; TYPE_1__* match_data; } ;
struct stm32_desc_pin {int pkg; int functions; int pin; } ;
struct TYPE_2__ {int npins; struct stm32_desc_pin* pins; } ;



__attribute__((used)) static int FUNC_0(struct stm32_pinctrl *VAR_0,
           struct stm32_desc_pin *VAR_1)
{
 const struct stm32_desc_pin *VAR_2;
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0->match_data->npins; VAR_3++) {
  VAR_2 = VAR_0->match_data->pins + VAR_3;
  if (VAR_0->pkg && !(VAR_0->pkg & VAR_2->pkg))
   continue;
  VAR_1->pin = VAR_2->pin;
  VAR_1->functions = VAR_2->functions;
  VAR_1++;
  VAR_4++;
 }

 VAR_0->npins = VAR_4;

 return 0;
}
