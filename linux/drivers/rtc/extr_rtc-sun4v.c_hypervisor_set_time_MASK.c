
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (char*) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_4)
{
 unsigned long VAR_5;
 int VAR_6 = 10000;

retry:
 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 == VAR_2)
  return 0;
 if (VAR_5 == VAR_3) {
  if (--VAR_6 > 0) {
   FUNC_2(100);
   goto retry;
  }
  FUNC_0("tod_set() timed out.\n");
  return -VAR_0;
 }
 FUNC_0("tod_set() not supported.\n");
 return -VAR_1;
}
