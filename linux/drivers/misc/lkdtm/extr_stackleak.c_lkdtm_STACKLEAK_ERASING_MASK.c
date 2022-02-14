
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long* FUNC_0 (unsigned long*,int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;

void FUNC_3(void)
{
 unsigned long *VAR_3, VAR_4, VAR_5, VAR_6;
 const unsigned long VAR_7 =
   VAR_1 / sizeof(unsigned long);





 VAR_3 = FUNC_0(&VAR_6, sizeof(unsigned long));

 VAR_4 = ((unsigned long)VAR_3 & (VAR_2 - 1)) / sizeof(unsigned long);
 VAR_3--;





 if (VAR_4 > 1) {
  VAR_4--;
 } else {
  FUNC_1("FAIL: not enough stack space for the test\n");
  return;
 }

 FUNC_2("checking unused part of the thread stack (%lu bytes)...\n",
     VAR_4 * sizeof(unsigned long));





 for (VAR_6 = 0, VAR_5 = 0; VAR_6 < VAR_4 && VAR_5 <= VAR_7; VAR_6++) {
  if (*(VAR_3 - VAR_6) == VAR_0)
   VAR_5++;
  else
   VAR_5 = 0;
 }

 if (VAR_5 <= VAR_7) {
  FUNC_1("FAIL: thread stack is not erased (checked %lu bytes)\n",
      VAR_6 * sizeof(unsigned long));
  return;
 }

 FUNC_2("first %lu bytes are unpoisoned\n",
    (VAR_6 - VAR_5) * sizeof(unsigned long));


 for (; VAR_6 < VAR_4; VAR_6++) {
  if (*(VAR_3 - VAR_6) != VAR_0) {
   FUNC_1("FAIL: thread stack is NOT properly erased\n");
   return;
  }
 }

 FUNC_2("OK: the rest of the thread stack is properly erased\n");
 return;
}
