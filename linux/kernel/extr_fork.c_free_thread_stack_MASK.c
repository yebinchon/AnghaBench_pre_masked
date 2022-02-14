
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {int * pages; } ;
struct task_struct {int stack; int stack_vm_area; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int * VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 struct vm_struct* FUNC_3 (struct task_struct*) ;
 int * FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static inline void FUNC_7(struct task_struct *VAR_6)
{
 FUNC_0(FUNC_6(VAR_6->stack), VAR_4);
}
