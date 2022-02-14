
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_q_vector {int * dbg_q_vector; struct fm10k_intfc* interface; } ;
struct fm10k_intfc {scalar_t__ dbg_intfc; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct fm10k_q_vector *VAR_0)
{
 struct fm10k_intfc *VAR_1 = VAR_0->interface;

 if (VAR_1->dbg_intfc)
  FUNC_0(VAR_0->dbg_q_vector);
 VAR_0->dbg_q_vector = ((void*)0);
}
