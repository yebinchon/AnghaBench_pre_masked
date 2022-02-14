
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;

__attribute__((used)) static unsigned char FUNC_5(unsigned char VAR_0)
{
 int VAR_1;
 unsigned char VAR_2 = 0;

 for (VAR_1 = 7; VAR_1 >= 0; VAR_1--) {

  FUNC_2(0);
  FUNC_3(1);
  FUNC_4();


  FUNC_2(1);
  FUNC_4();


  VAR_2 |= (FUNC_1() << VAR_1);
 }

 if (VAR_0)
  FUNC_0();


 FUNC_2(0);
 FUNC_3(1);

 return VAR_2;
}
