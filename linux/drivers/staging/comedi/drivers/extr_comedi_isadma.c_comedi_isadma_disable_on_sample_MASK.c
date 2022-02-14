
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 () ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int) ;

unsigned int FUNC_5(unsigned int VAR_0,
          unsigned int VAR_1)
{
 int VAR_2 = 0;
 unsigned long VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_1(VAR_0);
 while (VAR_4 % VAR_1) {

  VAR_3 = FUNC_0();
  FUNC_2(VAR_0);
  FUNC_3(VAR_3);

  FUNC_4(2);
  VAR_5 = FUNC_1(VAR_0);


  if (VAR_5 == VAR_4) {
   VAR_2++;
   if (VAR_2 > 10)
    break;
  } else {
   VAR_4 = VAR_5;
   VAR_2 = 0;
  }
 }
 return VAR_4;
}
