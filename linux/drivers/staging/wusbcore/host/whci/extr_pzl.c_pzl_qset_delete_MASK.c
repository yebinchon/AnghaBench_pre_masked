
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct whc_qset {int remove; } ;
struct whc {int periodic_work; int workqueue; } ;


 int FUNC_0 (struct whc*,struct whc_qset*) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct whc *VAR_0, struct whc_qset *VAR_1)
{
 VAR_1->remove = 1;
 FUNC_1(VAR_0->workqueue, &VAR_0->periodic_work);
 FUNC_0(VAR_0, VAR_1);
}
