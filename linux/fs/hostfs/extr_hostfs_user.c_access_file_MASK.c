
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int) ;
 int VAR_3 ;

int FUNC_1(char *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8 = 0;

 if (VAR_5)
  VAR_8 = VAR_0;
 if (VAR_6)
  VAR_8 |= VAR_1;
 if (VAR_7)
  VAR_8 |= VAR_2;
 if (FUNC_0(VAR_4, VAR_8) != 0)
  return -VAR_3;
 else return 0;
}
