
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qla_hw_data {int portnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qla_hw_data*,int ) ;
 int FUNC_2 (struct qla_hw_data*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct qla_hw_data *VAR_3)
{
 int VAR_4 = 0, VAR_5 = 0;

 while (!VAR_4) {

  VAR_4 = FUNC_1(VAR_3, FUNC_0(VAR_1));
  if (VAR_4 == 1)
   break;
  if (VAR_5 >= VAR_0)
   return -1;
  VAR_5++;
 }
 FUNC_2(VAR_3, VAR_2, VAR_3->portnum);
 return 0;
}
