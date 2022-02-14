
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {int parent; } ;
struct dentry {int d_sb; } ;


 struct dentry* FUNC_0 (int ) ;
 struct kernfs_node* FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static struct dentry *FUNC_3(struct dentry *VAR_0)
{
 struct kernfs_node *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(FUNC_2(VAR_0->d_sb, VAR_1->parent));
}
