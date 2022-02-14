
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct kernfs_super_info {int root; } ;
struct kernfs_node {int dummy; } ;
struct inode {scalar_t__ i_generation; } ;


 struct inode* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 struct kernfs_node* FUNC_2 (int ,int ) ;
 struct inode* FUNC_3 (struct super_block*,struct kernfs_node*) ;
 struct kernfs_super_info* FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct kernfs_node*) ;

__attribute__((used)) static struct inode *FUNC_6(struct super_block *VAR_1,
  u64 VAR_2, u32 VAR_3)
{
 struct kernfs_super_info *VAR_4 = FUNC_4(VAR_1);
 struct inode *VAR_5;
 struct kernfs_node *VAR_6;

 if (VAR_2 == 0)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_2(VAR_4->root, VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_0);
 VAR_5 = FUNC_3(VAR_1, VAR_6);
 FUNC_5(VAR_6);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 if (VAR_3 && VAR_5->i_generation != VAR_3) {

  FUNC_1(VAR_5);
  return FUNC_0(-VAR_0);
 }
 return VAR_5;
}
