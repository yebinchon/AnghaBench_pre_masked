
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int pde_unload_completion; int in_use; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct proc_dir_entry *VAR_1)
{
 if (FUNC_2(FUNC_0(&VAR_1->in_use) == VAR_0))
  FUNC_1(VAR_1->pde_unload_completion);
}
