
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct kernfs_root {int dummy; } ;
struct kernfs_node {int dummy; } ;
struct cgroup_root {int dummy; } ;
struct cgroup {int kn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cgroup_root* FUNC_0 (struct kernfs_root*) ;
 int VAR_4 ;
 struct cgroup* FUNC_1 (struct cgroup_root*) ;
 int FUNC_2 (struct kernfs_node*,int ,char*,int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int,int ) ;
 int FUNC_5 (struct seq_file*,char*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct seq_file *VAR_5, struct kernfs_node *VAR_6,
       struct kernfs_root *VAR_7)
{
 int VAR_8 = 0;
 char *VAR_9 = ((void*)0);
 struct cgroup_root *VAR_10 = FUNC_0(VAR_7);
 struct cgroup *VAR_11;

 VAR_9 = FUNC_4(VAR_3, VAR_2);
 if (!VAR_9)
  return -VAR_0;

 FUNC_6(&VAR_4);
 VAR_11 = FUNC_1(VAR_10);
 VAR_8 = FUNC_2(VAR_6, VAR_11->kn, VAR_9, VAR_3);
 FUNC_7(&VAR_4);

 if (VAR_8 >= VAR_3)
  VAR_8 = -VAR_1;
 else if (VAR_8 > 0) {
  FUNC_5(VAR_5, VAR_9, " \t\n\\");
  VAR_8 = 0;
 }
 FUNC_3(VAR_9);
 return VAR_8;
}
