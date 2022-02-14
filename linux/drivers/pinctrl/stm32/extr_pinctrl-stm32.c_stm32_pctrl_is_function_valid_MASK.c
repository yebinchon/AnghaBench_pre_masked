
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct stm32_pinctrl {int npins; struct stm32_desc_pin* pins; } ;
struct TYPE_2__ {scalar_t__ number; } ;
struct stm32_desc_pin {TYPE_1__ pin; struct stm32_desc_function* functions; } ;
struct stm32_desc_function {scalar_t__ num; scalar_t__ name; } ;



__attribute__((used)) static bool FUNC_0(struct stm32_pinctrl *VAR_0,
  u32 VAR_1, u32 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->npins; VAR_3++) {
  const struct stm32_desc_pin *VAR_4 = VAR_0->pins + VAR_3;
  const struct stm32_desc_function *VAR_5 = VAR_4->functions;

  if (VAR_4->pin.number != VAR_1)
   continue;

  while (VAR_5 && VAR_5->name) {
   if (VAR_5->num == VAR_2)
    return 1;
   VAR_5++;
  }

  break;
 }

 return 0;
}
