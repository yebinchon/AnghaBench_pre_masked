
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_class_key {int dummy; } ;
struct kernfs_node {int dummy; } ;
struct cgroup_subsys_state {int dummy; } ;
struct cgroup_file {struct kernfs_node* kn; int notify_timer; } ;
struct cgroup {int kn; } ;
struct cftype {int file_offset; int kf_ops; struct lock_class_key lockdep_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct kernfs_node*) ;
 int FUNC_1 (struct kernfs_node*) ;
 struct kernfs_node* FUNC_2 (int ,int ,int ,int ,int ,int ,int ,struct cftype*,int *,struct lock_class_key*) ;
 int VAR_3 ;
 int FUNC_3 (struct cftype*) ;
 int FUNC_4 (struct cgroup*,struct cftype*,char*) ;
 int VAR_4 ;
 int FUNC_5 (struct kernfs_node*) ;
 int FUNC_6 (struct kernfs_node*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct cgroup_subsys_state *VAR_5, struct cgroup *VAR_6,
      struct cftype *VAR_7)
{
 char VAR_8[VAR_0];
 struct kernfs_node *VAR_9;
 struct lock_class_key *VAR_10 = ((void*)0);
 int VAR_11;




 VAR_9 = FUNC_2(VAR_6->kn, FUNC_4(VAR_6, VAR_7, VAR_8),
      FUNC_3(VAR_7),
      VAR_2, VAR_1,
      0, VAR_7->kf_ops, VAR_7,
      ((void*)0), VAR_10);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_11 = FUNC_5(VAR_9);
 if (VAR_11) {
  FUNC_6(VAR_9);
  return VAR_11;
 }

 if (VAR_7->file_offset) {
  struct cgroup_file *VAR_12 = (void *)VAR_5 + VAR_7->file_offset;

  FUNC_9(&VAR_12->notify_timer, VAR_4, 0);

  FUNC_7(&VAR_3);
  VAR_12->kn = VAR_9;
  FUNC_8(&VAR_3);
 }

 return 0;
}
