
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at91wdt {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct at91wdt*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct at91wdt *VAR_4 = (struct at91wdt *)VAR_3;

 if (FUNC_2(VAR_4, VAR_0)) {
  FUNC_1("at91sam9 WDT software reset\n");
  FUNC_0();
  FUNC_1("Reboot didn't ?????\n");
 }

 return VAR_1;
}
