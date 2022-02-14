
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {int * neigh_update; int * recv; } ;
struct adapter {struct t3cdev tdev; } ;


 int FUNC_0 (struct t3cdev*) ;

void FUNC_1(struct adapter *VAR_0)
{
 struct t3cdev *VAR_1 = &VAR_0->tdev;

 VAR_1->recv = ((void*)0);
 VAR_1->neigh_update = ((void*)0);

 FUNC_0(VAR_1);
}
