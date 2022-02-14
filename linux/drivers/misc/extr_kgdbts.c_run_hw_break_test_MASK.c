
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int tst; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void FUNC_5(int VAR_5)
{
 VAR_3 = 0;
 FUNC_3();
 if (VAR_5) {
  VAR_4.tst = VAR_1;
  VAR_4.name = "hw_write_break_test";
 } else {
  VAR_4.tst = VAR_0;
  VAR_4.name = "hw_access_break_test";
 }

 FUNC_4();
 FUNC_1();
 if (VAR_5) {
  if (VAR_3 == 2) {
   FUNC_0("kgdbts: ERROR %s broke on access\n",
    VAR_4.name);
   VAR_2 = 0;
  }
  FUNC_2();
 }
 FUNC_4();

 if (VAR_3 == 1)
  return;

 FUNC_0("kgdbts: ERROR %s test failed\n", VAR_4.name);
 VAR_2 = 0;
}
