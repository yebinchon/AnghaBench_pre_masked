
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

void FUNC_2(void)
{
 int VAR_1;

 VAR_1 = FUNC_1(&VAR_0);
 if (VAR_1)
  FUNC_0("sdio_register_driver failed: %d\n", VAR_1);
}
