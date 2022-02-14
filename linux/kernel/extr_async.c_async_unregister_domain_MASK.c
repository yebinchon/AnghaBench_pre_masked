
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async_domain {scalar_t__ registered; int pending; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct async_domain *VAR_1)
{
 FUNC_2(&VAR_0);
 FUNC_0(!VAR_1->registered || !FUNC_1(&VAR_1->pending));
 VAR_1->registered = 0;
 FUNC_3(&VAR_0);
}
