
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3(void)
{
 if (VAR_1 < 8)
  VAR_1 = 8;
 if (VAR_1 > 32)
  VAR_1 = 32;
 if (VAR_2 < 1)
  VAR_2 = 1;
 if (VAR_2 > 43)
  VAR_2 = 43;

 if (FUNC_1() < 0)
  return -1;
 VAR_0 = FUNC_0("ddbridge", 0, 0);
 if (!VAR_0)
  return FUNC_2(1, -1);

 return 0;
}
