
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_hwfn {TYPE_1__* p_eq; int cdev; } ;
struct TYPE_2__ {int chain; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct qed_hwfn *VAR_0)
{
 if (!VAR_0->p_eq)
  return;

 FUNC_1(VAR_0->cdev, &VAR_0->p_eq->chain);

 FUNC_0(VAR_0->p_eq);
 VAR_0->p_eq = ((void*)0);
}
