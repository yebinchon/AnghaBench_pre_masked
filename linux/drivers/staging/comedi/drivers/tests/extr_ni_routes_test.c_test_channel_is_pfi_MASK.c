
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*) ;

void FUNC_4(void)
{
 FUNC_2();
 FUNC_3(FUNC_1(FUNC_0(0)), "check First pfi channel\n");
 FUNC_3(FUNC_1(FUNC_0(10)), "check 10th pfi channel\n");
 FUNC_3(FUNC_1(FUNC_0(-1)), "check last pfi channel\n");
 FUNC_3(!FUNC_1(FUNC_0(-1) + 1),
   "check first non pfi channel\n");
}
