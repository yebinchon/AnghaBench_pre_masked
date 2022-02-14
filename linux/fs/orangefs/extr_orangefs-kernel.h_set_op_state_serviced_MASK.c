
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orangefs_kernel_op_s {int waitq; int op_state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct orangefs_kernel_op_s *VAR_1)
{
 VAR_1->op_state = VAR_0;
 FUNC_0(&VAR_1->waitq);
}
