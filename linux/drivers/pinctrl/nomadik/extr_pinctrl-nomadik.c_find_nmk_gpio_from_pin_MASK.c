
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int base; unsigned int ngpio; } ;
struct nmk_gpio_chip {TYPE_1__ chip; } ;


 int VAR_0 ;
 struct nmk_gpio_chip** VAR_1 ;

__attribute__((used)) static struct nmk_gpio_chip *FUNC_0(unsigned VAR_2)
{
 int VAR_3;
 struct nmk_gpio_chip *VAR_4;

 for(VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = VAR_1[VAR_3];
  if (!VAR_4)
   continue;
  if (VAR_2 >= VAR_4->chip.base &&
   VAR_2 < VAR_4->chip.base + VAR_4->chip.ngpio)
   return VAR_4;
 }
 return ((void*)0);
}
