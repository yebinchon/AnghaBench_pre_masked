
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qla_hw_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct qla_hw_data*,int ) ;
 int FUNC_4 () ;

int FUNC_5(struct qla_hw_data *VAR_2)
{
 int VAR_3;
 int VAR_4 = 0, VAR_5 = 0;

 while (!VAR_4) {

  VAR_4 = FUNC_3(VAR_2, FUNC_0(VAR_1));
  if (VAR_4 == 1)
   break;
  if (VAR_5 >= VAR_0)
   return -1;

  VAR_5++;


  if (!FUNC_2())
   FUNC_4();
  else {
   for (VAR_3 = 0; VAR_3 < 20; VAR_3++)
    FUNC_1();
  }
 }

 return 0;
}
