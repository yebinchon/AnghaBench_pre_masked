
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct kernfs_node {int self; struct kernfs_node* kn; } ;
struct cgroup {int self; struct cgroup* kn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct kernfs_node*) ;
 int FUNC_1 (struct kernfs_node*) ;
 int FUNC_2 (int ,struct kernfs_node*) ;
 int FUNC_3 (struct kernfs_node*) ;
 int FUNC_4 (struct kernfs_node*) ;
 struct kernfs_node* FUNC_5 (struct kernfs_node*) ;
 int FUNC_6 (struct kernfs_node*) ;
 struct kernfs_node* FUNC_7 (struct kernfs_node*,int) ;
 int FUNC_8 (struct kernfs_node*) ;
 int FUNC_9 (struct kernfs_node*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct kernfs_node*) ;
 struct kernfs_node* FUNC_12 (struct kernfs_node*,char const*,int ,struct kernfs_node*) ;
 int FUNC_13 (struct kernfs_node*) ;
 int VAR_3 ;
 scalar_t__ FUNC_14 (char const*,char) ;

int FUNC_15(struct kernfs_node *VAR_4, const char *VAR_5, umode_t VAR_6)
{
 struct cgroup *VAR_7, *VAR_8;
 struct kernfs_node *VAR_9;
 int VAR_10;


 if (FUNC_14(VAR_5, '\n'))
  return -VAR_1;

 VAR_7 = FUNC_7(VAR_4, 0);
 if (!VAR_7)
  return -VAR_2;

 if (!FUNC_4(VAR_7)) {
  VAR_10 = -VAR_0;
  goto out_unlock;
 }

 VAR_8 = FUNC_5(VAR_7);
 if (FUNC_0(VAR_8)) {
  VAR_10 = FUNC_1(VAR_8);
  goto out_unlock;
 }


 VAR_9 = FUNC_12(VAR_7->kn, VAR_5, VAR_6, VAR_8);
 if (FUNC_0(VAR_9)) {
  VAR_10 = FUNC_1(VAR_9);
  goto out_destroy;
 }
 VAR_8->kn = VAR_9;





 FUNC_13(VAR_9);

 VAR_10 = FUNC_8(VAR_9);
 if (VAR_10)
  goto out_destroy;

 VAR_10 = FUNC_10(&VAR_8->self);
 if (VAR_10)
  goto out_destroy;

 VAR_10 = FUNC_3(VAR_8);
 if (VAR_10)
  goto out_destroy;

 FUNC_2(VAR_3, VAR_8);


 FUNC_11(VAR_9);

 VAR_10 = 0;
 goto out_unlock;

out_destroy:
 FUNC_6(VAR_8);
out_unlock:
 FUNC_9(VAR_4);
 return VAR_10;
}
