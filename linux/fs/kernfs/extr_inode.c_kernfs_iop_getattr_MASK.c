
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct path {int dentry; } ;
struct kstat {int dummy; } ;
struct kernfs_node {int dummy; } ;
struct inode {struct kernfs_node* i_private; } ;


 struct inode* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct kstat*) ;
 int VAR_0 ;
 int FUNC_2 (struct kernfs_node*,struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(const struct path *VAR_1, struct kstat *VAR_2,
         u32 VAR_3, unsigned int VAR_4)
{
 struct inode *VAR_5 = FUNC_0(VAR_1->dentry);
 struct kernfs_node *VAR_6 = VAR_5->i_private;

 FUNC_3(&VAR_0);
 FUNC_2(VAR_6, VAR_5);
 FUNC_4(&VAR_0);

 FUNC_1(VAR_5, VAR_2);
 return 0;
}
