
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* ops; } ;
struct seq_file {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int (* show_fdinfo ) (struct tty_struct*,struct seq_file*) ;} ;


 struct tty_struct* FUNC_0 (struct file*) ;
 int FUNC_1 (struct tty_struct*,struct seq_file*) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, struct file *VAR_1)
{
 struct tty_struct *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 && VAR_2->ops && VAR_2->ops->show_fdinfo)
  VAR_2->ops->show_fdinfo(VAR_2, VAR_0);
}
