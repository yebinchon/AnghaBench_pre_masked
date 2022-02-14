
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {int dummy; } ;
struct cgroup {int dummy; } ;


 int FUNC_0 (int ,struct cgroup*) ;
 int FUNC_1 (struct cgroup*) ;
 struct cgroup* FUNC_2 (struct kernfs_node*,int) ;
 int FUNC_3 (struct kernfs_node*) ;
 int VAR_0 ;

int FUNC_4(struct kernfs_node *VAR_1)
{
 struct cgroup *VAR_2;
 int VAR_3 = 0;

 VAR_2 = FUNC_2(VAR_1, 0);
 if (!VAR_2)
  return 0;

 VAR_3 = FUNC_1(VAR_2);
 if (!VAR_3)
  FUNC_0(VAR_0, VAR_2);

 FUNC_3(VAR_1);
 return VAR_3;
}
