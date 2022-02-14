
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct nilfs_iget_args {unsigned long ino; int for_gc; int cno; int * root; } ;
struct inode {int i_state; } ;
typedef int __u64 ;


 int VAR_0 ;
 struct inode* FUNC_0 (int) ;
 int VAR_1 ;
 struct inode* FUNC_1 (struct super_block*,unsigned long,int ,int ,struct nilfs_iget_args*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct inode*) ;

struct inode *FUNC_6(struct super_block *VAR_4, unsigned long VAR_5,
    __u64 VAR_6)
{
 struct nilfs_iget_args VAR_7 = {
  .ino = VAR_5, .root = ((void*)0), .cno = VAR_6, .for_gc = 1
 };
 struct inode *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_3, VAR_2, &VAR_7);
 if (FUNC_4(!VAR_8))
  return FUNC_0(-VAR_0);
 if (!(VAR_8->i_state & VAR_1))
  return VAR_8;

 VAR_9 = FUNC_3(VAR_8);
 if (FUNC_4(VAR_9)) {
  FUNC_2(VAR_8);
  return FUNC_0(VAR_9);
 }
 FUNC_5(VAR_8);
 return VAR_8;
}
