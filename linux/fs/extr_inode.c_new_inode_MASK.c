
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_inode_list_lock; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *) ;

struct inode *FUNC_3(struct super_block *VAR_0)
{
 struct inode *VAR_1;

 FUNC_2(&VAR_0->s_inode_list_lock);

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  FUNC_0(VAR_1);
 return VAR_1;
}
