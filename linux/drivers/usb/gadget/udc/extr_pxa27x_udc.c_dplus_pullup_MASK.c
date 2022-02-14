
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_udc {int pullup_on; int (* udc_command ) (int ) ;scalar_t__ gpiod; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct pxa_udc *VAR_2, int VAR_3)
{
 if (VAR_2->gpiod) {
  FUNC_0(VAR_2->gpiod, VAR_3);
 } else if (VAR_2->udc_command) {
  if (VAR_3)
   VAR_2->udc_command(VAR_0);
  else
   VAR_2->udc_command(VAR_1);
 }
 VAR_2->pullup_on = VAR_3;
}
