
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int * pid_links; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_1(struct task_struct *VAR_2)
{
 enum pid_type VAR_3;

 for (VAR_3 = VAR_1; VAR_3 < VAR_0; ++VAR_3) {
  FUNC_0(&VAR_2->pid_links[VAR_3]);
 }
}
