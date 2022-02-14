
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wait_opts {scalar_t__ wo_type; scalar_t__ wo_pid; } ;
struct task_struct {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct task_struct*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct wait_opts *VAR_1, struct task_struct *VAR_2)
{
 return VAR_1->wo_type == VAR_0 ||
  FUNC_0(VAR_2, VAR_1->wo_type) == VAR_1->wo_pid;
}
