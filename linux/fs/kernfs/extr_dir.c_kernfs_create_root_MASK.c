
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernfs_syscall_ops {int dummy; } ;
struct kernfs_root {int next_generation; unsigned int flags; int deactivate_waitq; struct kernfs_node* kn; struct kernfs_syscall_ops* syscall_ops; int ino_idr; int supers; } ;
struct TYPE_2__ {struct kernfs_root* root; } ;
struct kernfs_node {TYPE_1__ dir; void* priv; } ;


 int VAR_0 ;
 struct kernfs_root* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct kernfs_node* FUNC_2 (struct kernfs_root*,int *,char*,int,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct kernfs_node*) ;
 int FUNC_7 (struct kernfs_root*) ;
 struct kernfs_root* FUNC_8 (int,int ) ;

struct kernfs_root *FUNC_9(struct kernfs_syscall_ops *VAR_9,
           unsigned int VAR_10, void *VAR_11)
{
 struct kernfs_root *VAR_12;
 struct kernfs_node *VAR_13;

 VAR_12 = FUNC_8(sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return FUNC_0(-VAR_0);

 FUNC_4(&VAR_12->ino_idr);
 FUNC_1(&VAR_12->supers);
 VAR_12->next_generation = 1;

 VAR_13 = FUNC_2(VAR_12, ((void*)0), "", VAR_6 | VAR_7 | VAR_8,
          VAR_3, VAR_2,
          VAR_4);
 if (!VAR_13) {
  FUNC_3(&VAR_12->ino_idr);
  FUNC_7(VAR_12);
  return FUNC_0(-VAR_0);
 }

 VAR_13->priv = VAR_11;
 VAR_13->dir.root = VAR_12;

 VAR_12->syscall_ops = VAR_9;
 VAR_12->flags = VAR_10;
 VAR_12->kn = VAR_13;
 FUNC_5(&VAR_12->deactivate_waitq);

 if (!(VAR_12->flags & VAR_5))
  FUNC_6(VAR_13);

 return VAR_12;
}
