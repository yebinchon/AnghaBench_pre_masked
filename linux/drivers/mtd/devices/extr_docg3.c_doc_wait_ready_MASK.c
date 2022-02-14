
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct docg3 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct docg3*,int) ;
 int FUNC_2 (struct docg3*) ;

__attribute__((used)) static int FUNC_3(struct docg3 *VAR_1)
{
 int VAR_2 = 100;

 do {
  FUNC_1(VAR_1, 4);
  FUNC_0();
 } while (!FUNC_2(VAR_1) && VAR_2--);
 FUNC_1(VAR_1, 2);
 if (VAR_2 > 0)
  return 0;
 else
  return -VAR_0;
}
