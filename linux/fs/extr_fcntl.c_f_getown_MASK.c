
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pid_type; int lock; int pid; } ;
struct file {TYPE_1__ f_owner; } ;
typedef int pid_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

pid_t FUNC_3(struct file *VAR_1)
{
 pid_t VAR_2;
 FUNC_1(&VAR_1->f_owner.lock);
 VAR_2 = FUNC_0(VAR_1->f_owner.pid);
 if (VAR_1->f_owner.pid_type == VAR_0)
  VAR_2 = -VAR_2;
 FUNC_2(&VAR_1->f_owner.lock);
 return VAR_2;
}
