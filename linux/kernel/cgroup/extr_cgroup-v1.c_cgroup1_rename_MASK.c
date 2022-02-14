
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {struct kernfs_node* parent; struct cgroup* priv; } ;
struct cgroup {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct cgroup*) ;
 int VAR_3 ;
 int FUNC_1 (struct kernfs_node*) ;
 int FUNC_2 (struct kernfs_node*,struct kernfs_node*,char const*) ;
 scalar_t__ FUNC_3 (struct kernfs_node*) ;
 int FUNC_4 (struct kernfs_node*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct kernfs_node *VAR_5, struct kernfs_node *VAR_6,
     const char *VAR_7)
{
 struct cgroup *VAR_8 = VAR_5->priv;
 int VAR_9;

 if (FUNC_3(VAR_5) != VAR_2)
  return -VAR_1;
 if (VAR_5->parent != VAR_6)
  return -VAR_0;






 FUNC_1(VAR_6);
 FUNC_1(VAR_5);

 FUNC_5(&VAR_3);

 VAR_9 = FUNC_2(VAR_5, VAR_6, VAR_7);
 if (!VAR_9)
  FUNC_0(VAR_4, VAR_8);

 FUNC_6(&VAR_3);

 FUNC_4(VAR_5);
 FUNC_4(VAR_6);
 return VAR_9;
}
