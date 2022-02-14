
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int mems_allowed; } ;
struct TYPE_2__ {int mems_allowed; int cpus_ptr; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct task_struct*,int ) ;
 scalar_t__ FUNC_1 (struct task_struct*,int ) ;

__attribute__((used)) static void FUNC_2(struct task_struct *VAR_2)
{
 if (FUNC_1(VAR_2, VAR_0))
  return;

 FUNC_0(VAR_2, VAR_1->cpus_ptr);
 VAR_2->mems_allowed = VAR_1->mems_allowed;
}
