
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orangefs_kernel_op_s {int lock; int waitq; int op_state; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct orangefs_kernel_op_s*) ;
 int FUNC_3 (struct orangefs_kernel_op_s*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static inline void FUNC_7(struct orangefs_kernel_op_s *VAR_1)
{
 FUNC_4(&VAR_1->lock);
 if (FUNC_6(FUNC_2(VAR_1))) {
  FUNC_1(&VAR_1->list);
  FUNC_5(&VAR_1->lock);
  FUNC_3(VAR_1);
 } else {
  VAR_1->op_state |= VAR_0;
  FUNC_0(&VAR_1->waitq);
  FUNC_5(&VAR_1->lock);
 }
}
