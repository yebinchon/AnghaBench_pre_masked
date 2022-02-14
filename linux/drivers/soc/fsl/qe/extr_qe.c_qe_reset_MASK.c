
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int * VAR_4 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;

void FUNC_7(void)
{
 if (VAR_4 == ((void*)0))
  VAR_4 = FUNC_1(FUNC_0(), VAR_2);

 FUNC_6();

 FUNC_3(VAR_3, VAR_1,
       VAR_0, 0);


 FUNC_4();

 if (FUNC_5())
  FUNC_2("sdma init failed!");
}
