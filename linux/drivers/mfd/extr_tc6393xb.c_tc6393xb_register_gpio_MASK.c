
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* label; int base; int ngpio; int direction_output; int direction_input; int get; int set; } ;
struct tc6393xb {TYPE_1__ gpio; } ;


 int FUNC_0 (TYPE_1__*,struct tc6393xb*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct tc6393xb *VAR_4, int VAR_5)
{
 VAR_4->gpio.label = "tc6393xb";
 VAR_4->gpio.base = VAR_5;
 VAR_4->gpio.ngpio = 16;
 VAR_4->gpio.set = VAR_3;
 VAR_4->gpio.get = VAR_2;
 VAR_4->gpio.direction_input = VAR_0;
 VAR_4->gpio.direction_output = VAR_1;

 return FUNC_0(&VAR_4->gpio, VAR_4);
}
