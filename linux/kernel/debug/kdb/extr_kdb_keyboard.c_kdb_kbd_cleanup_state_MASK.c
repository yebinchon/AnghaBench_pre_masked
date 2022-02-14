
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;

void FUNC_2(void)
{
 int VAR_5, VAR_6;






 if (!VAR_4)
  return;

 VAR_4 = 0;
 while (1) {
  while ((FUNC_1(VAR_1) & VAR_3) == 0)
   FUNC_0();




  VAR_5 = FUNC_1(VAR_0);
  VAR_6 = FUNC_1(VAR_1);




  if (VAR_6 & VAR_2)
   continue;
  if (VAR_5 != 0x9c)
   continue;

  return;
 }
}
