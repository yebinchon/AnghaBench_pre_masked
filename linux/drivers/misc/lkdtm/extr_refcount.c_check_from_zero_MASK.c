
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int refcount_t ;




 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(refcount_t *VAR_0)
{
 switch (FUNC_2(VAR_0)) {
 case 0:
  FUNC_0("Zero detected: stayed at zero\n");
  break;
 case 128:
  FUNC_0("Zero detected: saturated\n");
  break;
 case 129:
  FUNC_1("Zero detected: unsafely reset to max\n");
  break;
 default:
  FUNC_0("Fail: zero not detected, incremented to %d\n",
   FUNC_2(VAR_0));
 }
}
