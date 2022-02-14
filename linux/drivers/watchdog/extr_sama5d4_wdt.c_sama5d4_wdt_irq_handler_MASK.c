
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sama5d4_wdt {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct sama5d4_wdt* FUNC_1 (void*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct sama5d4_wdt*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct sama5d4_wdt *VAR_4 = FUNC_1(VAR_3);

 if (FUNC_3(VAR_4, VAR_0)) {
  FUNC_2("Atmel Watchdog Software Reset\n");
  FUNC_0();
  FUNC_2("Reboot didn't succeed\n");
 }

 return VAR_1;
}
