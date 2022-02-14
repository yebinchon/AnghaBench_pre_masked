
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct kernfs_node* target_kn; } ;
struct kernfs_node {TYPE_1__ symlink; struct kernfs_node* parent; } ;
struct inode {struct kernfs_node* i_private; } ;


 int FUNC_0 (struct kernfs_node*,struct kernfs_node*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, char *VAR_2)
{
 struct kernfs_node *VAR_3 = VAR_1->i_private;
 struct kernfs_node *VAR_4 = VAR_3->parent;
 struct kernfs_node *VAR_5 = VAR_3->symlink.target_kn;
 int VAR_6;

 FUNC_1(&VAR_0);
 VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_2);
 FUNC_2(&VAR_0);

 return VAR_6;
}
