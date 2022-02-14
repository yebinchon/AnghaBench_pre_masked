
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct fown_struct {int dummy; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct task_struct*,int) ;
 scalar_t__ FUNC_1 (struct task_struct*,struct fown_struct*,int ) ;

__attribute__((used)) static void FUNC_2(struct task_struct *VAR_2,
    struct fown_struct *VAR_3, enum pid_type VAR_4)
{
 if (FUNC_1(VAR_2, VAR_3, VAR_1))
  FUNC_0(VAR_1, VAR_0, VAR_2, VAR_4);
}
