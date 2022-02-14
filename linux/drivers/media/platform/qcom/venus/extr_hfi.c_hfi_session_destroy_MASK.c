
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int list; struct venus_core* core; } ;
struct venus_core {int lock; int insts_count; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct venus_inst *VAR_0)
{
 struct venus_core *VAR_1 = VAR_0->core;

 FUNC_2(&VAR_1->lock);
 FUNC_1(&VAR_0->list);
 if (FUNC_0(&VAR_1->insts_count))
  FUNC_4(&VAR_1->insts_count);
 FUNC_3(&VAR_1->lock);
}
