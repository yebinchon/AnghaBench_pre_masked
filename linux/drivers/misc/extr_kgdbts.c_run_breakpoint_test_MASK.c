
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int tst; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void FUNC_4(int VAR_5)
{
 VAR_3 = 0;
 FUNC_1();
 if (VAR_5) {
  VAR_4.tst = VAR_0;
  VAR_4.name = "hw_breakpoint_test";
 } else {
  VAR_4.tst = VAR_2;
  VAR_4.name = "sw_breakpoint_test";
 }

 FUNC_2();

 FUNC_3();
 FUNC_2();

 if (VAR_3)
  return;

 FUNC_0("kgdbts: ERROR %s test failed\n", VAR_4.name);
 if (VAR_5)
  VAR_1 = 0;
}
