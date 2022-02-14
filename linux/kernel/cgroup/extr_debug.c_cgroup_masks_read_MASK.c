
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct kernfs_open_file* private; } ;
struct kernfs_open_file {int kn; } ;
struct cgroup {int subtree_ss_mask; int subtree_control; } ;


 int VAR_0 ;
 struct cgroup* FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 struct kernfs_open_file *VAR_3 = VAR_1->private;
 struct cgroup *VAR_4;

 VAR_4 = FUNC_0(VAR_3->kn, 0);
 if (!VAR_4)
  return -VAR_0;

 FUNC_2(VAR_1, "subtree_control", VAR_4->subtree_control);
 FUNC_2(VAR_1, "subtree_ss_mask", VAR_4->subtree_ss_mask);

 FUNC_1(VAR_3->kn);
 return 0;
}
