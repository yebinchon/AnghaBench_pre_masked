
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_driver {struct proc_dir_entry* proc_entry; TYPE_1__* ops; int driver_name; } ;
struct proc_dir_entry {int dummy; } ;
struct TYPE_2__ {int proc_show; } ;


 struct proc_dir_entry* FUNC_0 (int ,int ,int ,int ,struct tty_driver*) ;
 int VAR_0 ;

void FUNC_1(struct tty_driver *VAR_1)
{
 struct proc_dir_entry *VAR_2;

 if (!VAR_1->driver_name || VAR_1->proc_entry ||
     !VAR_1->ops->proc_show)
  return;

 VAR_2 = FUNC_0(VAR_1->driver_name, 0, VAR_0,
          VAR_1->ops->proc_show, VAR_1);
 VAR_1->proc_entry = VAR_2;
}
