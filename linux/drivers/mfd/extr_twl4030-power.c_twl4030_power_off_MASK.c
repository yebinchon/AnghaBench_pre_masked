
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(void)
{
 int VAR_5;


 VAR_5 = FUNC_1(VAR_2 | VAR_1, 0);
 if (VAR_5)
  FUNC_0("TWL4030 Unable to configure start-up\n");

 VAR_5 = FUNC_2(VAR_4, VAR_0,
          VAR_3);
 if (VAR_5)
  FUNC_0("TWL4030 Unable to power off\n");
}
