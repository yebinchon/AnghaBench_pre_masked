
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_pool {int max; int * pool; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct iscsi_pool *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->max; VAR_1++)
  FUNC_0(VAR_0->pool[VAR_1]);
 FUNC_1(VAR_0->pool);
}
