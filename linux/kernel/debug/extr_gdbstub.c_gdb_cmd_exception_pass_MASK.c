
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kgdb_state {int pass_exception; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct kgdb_state *VAR_2)
{



 if (VAR_1[1] == '0' && VAR_1[2] == '9') {

  VAR_2->pass_exception = 1;
  VAR_1[0] = 'c';

 } else if (VAR_1[1] == '1' && VAR_1[2] == '5') {

  VAR_2->pass_exception = 1;
  VAR_1[0] = 'D';
  FUNC_0();
  VAR_0 = 0;
  return 1;

 } else {
  FUNC_1("KGDB only knows signal 9 (pass)"
   " and 15 (pass and disconnect)\n"
   "Executing a continue without signal passing\n", 0);
  VAR_1[0] = 'c';
 }


 return -1;
}
