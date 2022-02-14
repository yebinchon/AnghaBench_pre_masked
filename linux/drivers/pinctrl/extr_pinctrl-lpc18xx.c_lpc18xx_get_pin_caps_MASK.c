
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lpc18xx_pin_caps {int dummy; } ;
struct TYPE_3__ {unsigned int number; struct lpc18xx_pin_caps* drv_data; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static struct lpc18xx_pin_caps *FUNC_1(unsigned VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2].number == VAR_1)
   return VAR_0[VAR_2].drv_data;
 }

 return ((void*)0);
}
