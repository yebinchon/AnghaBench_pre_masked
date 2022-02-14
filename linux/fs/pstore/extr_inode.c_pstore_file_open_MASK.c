
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_operations {int dummy; } ;
struct seq_file {struct pstore_private* private; } ;
struct pstore_private {TYPE_1__* record; } ;
struct inode {struct pstore_private* i_private; } ;
struct file {struct seq_file* private_data; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 struct seq_operations VAR_1 ;
 int FUNC_0 (struct file*,struct seq_operations const*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_2, struct file *VAR_3)
{
 struct pstore_private *VAR_4 = VAR_2->i_private;
 struct seq_file *VAR_5;
 int VAR_6;
 const struct seq_operations *VAR_7 = ((void*)0);

 if (VAR_4->record->type == VAR_0)
  VAR_7 = &VAR_1;

 VAR_6 = FUNC_0(VAR_3, VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = VAR_3->private_data;
 VAR_5->private = VAR_4;

 return 0;
}
