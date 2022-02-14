
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_operations {int (* show ) (struct seq_file*,void*) ;int stop; int next; int start; } ;
struct seq_file {void* private; } ;
struct file {scalar_t__ private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct seq_operations*) ;
 struct seq_operations* FUNC_1 (int,int ) ;
 int FUNC_2 (struct file*,struct seq_operations*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_3(struct file *VAR_5, int (*VAR_6)(struct seq_file *, void *),
  void *VAR_7)
{
 struct seq_operations *VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_1);
 int VAR_9 = -VAR_0;

 if (VAR_8) {
  VAR_8->start = VAR_3;
  VAR_8->next = VAR_2;
  VAR_8->stop = VAR_4;
  VAR_8->show = VAR_6;
  VAR_9 = FUNC_2(VAR_5, VAR_8);
  if (!VAR_9)
   ((struct seq_file *)VAR_5->private_data)->private = VAR_7;
  else
   FUNC_0(VAR_8);
 }
 return VAR_9;
}
