
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void)
{
 if (VAR_0) {
  FUNC_1("Initiating system reboot\n");
  FUNC_0();
  FUNC_1("Reboot didn't ?????\n");
 }

 else {
  FUNC_1("Immediate Reboot Disabled\n");
  FUNC_1("System will reset when watchdog timer times out!\n");
 }
}
