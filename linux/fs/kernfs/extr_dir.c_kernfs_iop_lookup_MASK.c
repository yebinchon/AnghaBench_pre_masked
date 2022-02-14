
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kernfs_node {int dummy; } ;
struct inode {int i_sb; struct kernfs_node* i_private; } ;
struct TYPE_3__ {int name; } ;
struct dentry {TYPE_1__ d_name; } ;
struct TYPE_4__ {void* ns; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 struct dentry* FUNC_1 (struct inode*,struct dentry*) ;
 int FUNC_2 (struct kernfs_node*) ;
 struct kernfs_node* FUNC_3 (struct kernfs_node*,int ,void const*) ;
 struct inode* FUNC_4 (int ,struct kernfs_node*) ;
 TYPE_2__* FUNC_5 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (struct kernfs_node*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct dentry *FUNC_9(struct inode *VAR_2,
     struct dentry *VAR_3,
     unsigned int VAR_4)
{
 struct dentry *VAR_5;
 struct kernfs_node *VAR_6 = VAR_2->i_private;
 struct kernfs_node *VAR_7;
 struct inode *VAR_8;
 const void *VAR_9 = ((void*)0);

 FUNC_7(&VAR_1);

 if (FUNC_6(VAR_6))
  VAR_9 = FUNC_5(VAR_2->i_sb)->ns;

 VAR_7 = FUNC_3(VAR_6, VAR_3->d_name.name, VAR_9);


 if (!VAR_7 || !FUNC_2(VAR_7)) {
  VAR_5 = ((void*)0);
  goto out_unlock;
 }


 VAR_8 = FUNC_4(VAR_2->i_sb, VAR_7);
 if (!VAR_8) {
  VAR_5 = FUNC_0(-VAR_0);
  goto out_unlock;
 }


 VAR_5 = FUNC_1(VAR_8, VAR_3);
 out_unlock:
 FUNC_8(&VAR_1);
 return VAR_5;
}
