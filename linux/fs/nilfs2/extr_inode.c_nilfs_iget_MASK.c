
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct nilfs_root {int dummy; } ;
struct inode {int i_state; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct super_block*,struct nilfs_root*,unsigned long,struct inode*) ;
 int FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct super_block*,struct nilfs_root*,unsigned long) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct inode*) ;

struct inode *FUNC_6(struct super_block *VAR_2, struct nilfs_root *VAR_3,
    unsigned long VAR_4)
{
 struct inode *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4);
 if (FUNC_4(!VAR_5))
  return FUNC_0(-VAR_0);
 if (!(VAR_5->i_state & VAR_1))
  return VAR_5;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 if (FUNC_4(VAR_6)) {
  FUNC_2(VAR_5);
  return FUNC_0(VAR_6);
 }
 FUNC_5(VAR_5);
 return VAR_5;
}
