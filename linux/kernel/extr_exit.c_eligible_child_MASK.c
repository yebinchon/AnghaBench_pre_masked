
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wait_opts {int wo_flags; } ;
struct task_struct {scalar_t__ exit_signal; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wait_opts*,struct task_struct*) ;

__attribute__((used)) static int
FUNC_1(struct wait_opts *VAR_3, bool VAR_4, struct task_struct *VAR_5)
{
 if (!FUNC_0(VAR_3, VAR_5))
  return 0;





 if (VAR_4 || (VAR_3->wo_flags & VAR_1))
  return 1;
 if ((VAR_5->exit_signal != VAR_0) ^ !!(VAR_3->wo_flags & VAR_2))
  return 0;

 return 1;
}
