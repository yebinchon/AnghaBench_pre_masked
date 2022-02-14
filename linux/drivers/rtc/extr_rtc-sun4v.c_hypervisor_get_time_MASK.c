
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (char*) ;
 unsigned long FUNC_1 (unsigned long*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static unsigned long FUNC_3(void)
{
 unsigned long VAR_2, VAR_3;
 int VAR_4 = 10000;

retry:
 VAR_2 = FUNC_1(&VAR_3);
 if (VAR_2 == VAR_0)
  return VAR_3;
 if (VAR_2 == VAR_1) {
  if (--VAR_4 > 0) {
   FUNC_2(100);
   goto retry;
  }
  FUNC_0("tod_get() timed out.\n");
  return 0;
 }
 FUNC_0("tod_get() not supported.\n");
 return 0;
}
