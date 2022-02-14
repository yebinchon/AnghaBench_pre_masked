
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int tst; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 () ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_7(int VAR_3)
{
 unsigned long VAR_4;

 FUNC_1();
 VAR_2.tst = VAR_0;
 VAR_2.name = "nmi_sleep_test";

 FUNC_2();
 FUNC_4(VAR_4);
 FUNC_5(VAR_3*1000);
 FUNC_6();
 FUNC_3(VAR_4);
 if (VAR_1 != 2)
  FUNC_0("kgdbts: ERROR nmi_test did not hit nmi\n");
 FUNC_2();
 if (VAR_1 == 1)
  return;

 FUNC_0("kgdbts: ERROR %s test failed\n", VAR_2.name);
}
