
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {unsigned int ngpio; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct gpio_chip *VAR_1,
     unsigned VAR_2)
{




 return (VAR_2 < VAR_1->ngpio) ? 0 : -VAR_0;
}
