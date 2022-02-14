
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct optee_supp {int idr; int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct optee_supp *VAR_0)
{
 FUNC_1(&VAR_0->mutex);
 FUNC_0(&VAR_0->idr);
}
