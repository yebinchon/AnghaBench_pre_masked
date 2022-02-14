
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct nilfs_root {int dummy; } ;
struct nilfs_iget_args {unsigned long ino; int for_gc; int cno; struct nilfs_root* root; } ;
struct inode {int dummy; } ;


 struct inode* FUNC_0 (struct super_block*,unsigned long,int ,struct nilfs_iget_args*) ;
 int VAR_0 ;

struct inode *FUNC_1(struct super_block *VAR_1, struct nilfs_root *VAR_2,
       unsigned long VAR_3)
{
 struct nilfs_iget_args VAR_4 = {
  .ino = VAR_3, .root = VAR_2, .cno = 0, .for_gc = 0
 };

 return FUNC_0(VAR_1, VAR_3, VAR_0, &VAR_4);
}
