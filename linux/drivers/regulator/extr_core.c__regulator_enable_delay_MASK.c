
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_0)
{
 unsigned int VAR_1 = VAR_0 / 1000;
 unsigned int VAR_2 = VAR_0 % 1000;

 if (VAR_1 > 0) {




  if (VAR_1 < 20)
   VAR_2 += VAR_1 * 1000;
  else
   FUNC_0(VAR_1);
 }







 if (VAR_2 >= 10)
  FUNC_2(VAR_2, VAR_2 + 100);
 else
  FUNC_1(VAR_2);
}
