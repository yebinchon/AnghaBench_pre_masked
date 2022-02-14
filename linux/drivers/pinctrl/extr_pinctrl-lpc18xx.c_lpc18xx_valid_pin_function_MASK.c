
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpc18xx_pin_caps {scalar_t__ analog; scalar_t__ type; unsigned int* functions; } ;
struct TYPE_2__ {struct lpc18xx_pin_caps* drv_data; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static bool FUNC_0(unsigned VAR_9, unsigned VAR_10)
{
 struct lpc18xx_pin_caps *VAR_11 = VAR_8[VAR_9].drv_data;
 int VAR_12;

 if (VAR_10 == VAR_2 && VAR_11->analog == VAR_0)
  return 1;

 if (VAR_10 == VAR_1 && VAR_11->analog)
  return 1;

 if (VAR_10 == VAR_3 && VAR_11->type == VAR_6)
  return 1;

 if (VAR_10 == VAR_4 && VAR_11->type == VAR_7)
  return 1;

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  if (VAR_10 == VAR_11->functions[VAR_12])
   return 1;
 }

 return 0;
}
