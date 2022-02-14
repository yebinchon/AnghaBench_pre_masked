
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(void)
{
 int VAR_1;

 if (!VAR_0[0])
  return -1;

 for (;;) {
  VAR_1 = FUNC_0();
  if (VAR_1 == -1) {

   volatile unsigned long VAR_2;
   for (VAR_2=0; VAR_2 < 2000000; VAR_2++)
    ;
  } else {
   return VAR_1;
  }
 }
}
