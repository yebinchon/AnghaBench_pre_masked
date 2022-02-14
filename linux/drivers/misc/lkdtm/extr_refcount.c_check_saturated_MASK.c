
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int refcount_t ;




 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(refcount_t *VAR_0)
{
 switch (FUNC_3(VAR_0)) {
 case 128:
  FUNC_1("Saturation detected: still saturated\n");
  break;
 case 129:
  FUNC_2("Saturation detected: unsafely reset to max\n");
  break;
 default:
  FUNC_0("Fail: refcount went crazy: %d\n", FUNC_3(VAR_0));
 }
}
