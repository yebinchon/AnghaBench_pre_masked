
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ci_hdrc {int qh_pool; int td_pool; int gadget; int * roles; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct ci_hdrc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ci_hdrc *VAR_1)
{
 if (!VAR_1->roles[VAR_0])
  return;

 FUNC_2(&VAR_1->gadget);

 FUNC_0(VAR_1);

 FUNC_1(VAR_1->td_pool);
 FUNC_1(VAR_1->qh_pool);
}
