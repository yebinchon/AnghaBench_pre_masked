
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct kernfs_open_file* private; } ;
struct kernfs_open_file {struct cgroup_pidlist* priv; } ;
struct cgroup_pidlist {int destroy_dwork; } ;
struct TYPE_4__ {TYPE_1__* cgroup; } ;
struct TYPE_3__ {int pidlist_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (struct seq_file*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_2, void *VAR_3)
{
 struct kernfs_open_file *VAR_4 = VAR_2->private;
 struct cgroup_pidlist *VAR_5 = VAR_4->priv;

 if (VAR_5)
  FUNC_0(VAR_1, &VAR_5->destroy_dwork,
     VAR_0);
 FUNC_1(&FUNC_2(VAR_2)->cgroup->pidlist_mutex);
}
