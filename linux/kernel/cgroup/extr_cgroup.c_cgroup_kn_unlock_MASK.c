
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernfs_node {TYPE_1__* parent; struct cgroup* priv; } ;
struct cgroup {int dummy; } ;
struct TYPE_2__ {struct cgroup* priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cgroup*) ;
 scalar_t__ FUNC_1 (struct kernfs_node*) ;
 int FUNC_2 (struct kernfs_node*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct kernfs_node *VAR_2)
{
 struct cgroup *VAR_3;

 if (FUNC_1(VAR_2) == VAR_0)
  VAR_3 = VAR_2->priv;
 else
  VAR_3 = VAR_2->parent->priv;

 FUNC_3(&VAR_1);

 FUNC_2(VAR_2);
 FUNC_0(VAR_3);
}
