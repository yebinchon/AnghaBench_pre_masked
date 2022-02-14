
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_root; int * s_op; } ;
struct kernfs_node {int name; int parent; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct dentry* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (int) ;
 struct dentry* FUNC_4 (int ) ;
 int FUNC_5 (struct dentry*) ;
 struct kernfs_node* FUNC_6 (struct kernfs_node*,struct kernfs_node*) ;
 int VAR_1 ;
 struct dentry* FUNC_7 (int ,struct dentry*,int ) ;
 int FUNC_8 (int ) ;

struct dentry *FUNC_9(struct kernfs_node *VAR_2,
      struct super_block *VAR_3)
{
 struct dentry *VAR_4;
 struct kernfs_node *VAR_5 = ((void*)0);

 FUNC_0(VAR_3->s_op != &VAR_1);

 VAR_4 = FUNC_4(VAR_3->s_root);


 if (!VAR_2->parent)
  return VAR_4;

 VAR_5 = FUNC_6(VAR_2, ((void*)0));
 if (FUNC_3(!VAR_5)) {
  FUNC_5(VAR_4);
  return FUNC_1(-VAR_0);
 }

 do {
  struct dentry *VAR_6;
  struct kernfs_node *VAR_7;

  if (VAR_2 == VAR_5)
   return VAR_4;
  VAR_7 = FUNC_6(VAR_2, VAR_5);
  if (FUNC_3(!VAR_7)) {
   FUNC_5(VAR_4);
   return FUNC_1(-VAR_0);
  }
  VAR_6 = FUNC_7(VAR_7->name, VAR_4,
            FUNC_8(VAR_7->name));
  FUNC_5(VAR_4);
  if (FUNC_2(VAR_6))
   return VAR_6;
  VAR_5 = VAR_7;
  VAR_4 = VAR_6;
 } while (1);
}
