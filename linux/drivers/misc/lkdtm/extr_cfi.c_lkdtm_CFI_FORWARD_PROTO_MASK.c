
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void FUNC_0 (int*) ;
 int FUNC_1 (char*) ;

void FUNC_2(void)
{




 void (*VAR_2)(int *);

 FUNC_1("Calling matched prototype ...\n");
 VAR_2 = FUNC_0;
 VAR_2(&VAR_0);

 FUNC_1("Calling mismatched prototype ...\n");
 VAR_2 = (void *)VAR_1;
 VAR_2(&VAR_0);

 FUNC_1("Fail: survived mismatched prototype function call!\n");
}
