
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (int ) ;

int FUNC_1(void)
{
 int VAR_4 = 0x10000000;
 unsigned int VAR_5 = VAR_3 | VAR_1 |
  VAR_2;

 while (VAR_4--) {
  unsigned int VAR_6 = FUNC_0(VAR_0);

  if ((VAR_6 & VAR_5) ==
      (VAR_1 | VAR_2))
   return 0;
 }

 return -1;
}
