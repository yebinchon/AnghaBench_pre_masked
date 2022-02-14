
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 unsigned char FUNC_1 (struct parport*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;

int FUNC_4(struct parport *VAR_2,
       unsigned char VAR_3,
       unsigned char VAR_4,
       int VAR_5)
{

 int VAR_6 = VAR_5 / 5 + 2;
 int VAR_7;
 unsigned char VAR_8;
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_8 = FUNC_1 (VAR_2);
  if ((VAR_8 & VAR_3) == VAR_4)
   return 0;
  if (FUNC_2 (VAR_1))
   return -VAR_0;
  if (FUNC_0())
   break;
  if (VAR_7 >= 2)
   FUNC_3 (5);
 }

 return 1;
}
