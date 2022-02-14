
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernfs_node {TYPE_1__* parent; struct cgroup* priv; } ;
struct cgroup {int dummy; } ;
struct TYPE_2__ {struct cgroup* priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cgroup*) ;
 int FUNC_1 (struct kernfs_node*) ;
 int FUNC_2 (struct cgroup*) ;
 int VAR_1 ;
 int FUNC_3 (struct cgroup*) ;
 int FUNC_4 (struct kernfs_node*) ;
 scalar_t__ FUNC_5 (struct kernfs_node*) ;
 int FUNC_6 (int *) ;

struct cgroup *FUNC_7(struct kernfs_node *VAR_2, bool VAR_3)
{
 struct cgroup *VAR_4;

 if (FUNC_5(VAR_2) == VAR_0)
  VAR_4 = VAR_2->priv;
 else
  VAR_4 = VAR_2->parent->priv;







 if (!FUNC_3(VAR_4))
  return ((void*)0);
 FUNC_4(VAR_2);

 if (VAR_3)
  FUNC_2(VAR_4);
 else
  FUNC_6(&VAR_1);

 if (!FUNC_0(VAR_4))
  return VAR_4;

 FUNC_1(VAR_2);
 return ((void*)0);
}
