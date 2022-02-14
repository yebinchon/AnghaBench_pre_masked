
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct kernfs_open_file* private; } ;
struct kernfs_open_file {struct css_task_iter* priv; } ;
struct css_task_iter {int dummy; } ;
struct cgroup {int self; } ;
typedef int loff_t ;
struct TYPE_2__ {struct cgroup* cgroup; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (struct seq_file*,int *,int *) ;
 int FUNC_3 (struct css_task_iter*) ;
 int FUNC_4 (int *,unsigned int,struct css_task_iter*) ;
 struct css_task_iter* FUNC_5 (int,int ) ;
 TYPE_1__* FUNC_6 (struct seq_file*) ;

__attribute__((used)) static void *FUNC_7(struct seq_file *VAR_3, loff_t *VAR_4,
      unsigned int VAR_5)
{
 struct kernfs_open_file *VAR_6 = VAR_3->private;
 struct cgroup *VAR_7 = FUNC_6(VAR_3)->cgroup;
 struct css_task_iter *VAR_8 = VAR_6->priv;





 if (!VAR_8) {
  if (FUNC_1((*VAR_4)++))
   return FUNC_0(-VAR_0);

  VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_2);
  if (!VAR_8)
   return FUNC_0(-VAR_1);
  VAR_6->priv = VAR_8;
  FUNC_4(&VAR_7->self, VAR_5, VAR_8);
 } else if (!(*VAR_4)++) {
  FUNC_3(VAR_8);
  FUNC_4(&VAR_7->self, VAR_5, VAR_8);
 }

 return FUNC_2(VAR_3, ((void*)0), ((void*)0));
}
