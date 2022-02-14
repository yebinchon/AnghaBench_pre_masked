
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cw1200_common {int * bh_workqueue; int bh_wq; int bh_term; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct cw1200_common *VAR_0)
{
 FUNC_0(1, &VAR_0->bh_term);
 FUNC_4(&VAR_0->bh_wq);

 FUNC_2(VAR_0->bh_workqueue);

 FUNC_1(VAR_0->bh_workqueue);
 VAR_0->bh_workqueue = ((void*)0);

 FUNC_3("[BH] unregistered.\n");
}
