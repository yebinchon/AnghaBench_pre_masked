
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct kernfs_open_file* private; } ;
struct kernfs_open_file {struct css_task_iter* priv; } ;
struct css_task_iter {int dummy; } ;
typedef int loff_t ;


 void* FUNC_0 (struct css_task_iter*) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_0, void *VAR_1, loff_t *VAR_2)
{
 struct kernfs_open_file *VAR_3 = VAR_0->private;
 struct css_task_iter *VAR_4 = VAR_3->priv;

 return FUNC_0(VAR_4);
}
