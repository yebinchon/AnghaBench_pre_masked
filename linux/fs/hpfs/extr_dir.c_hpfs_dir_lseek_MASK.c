
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct quad_buffer_head {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct hpfs_inode_info {int i_dno; } ;
struct file {int f_pos; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct inode* FUNC_0 (struct file*) ;
 scalar_t__ FUNC_1 (struct inode*,int*) ;
 int FUNC_2 (struct quad_buffer_head*) ;
 scalar_t__ FUNC_3 (struct super_block*,int ) ;
 struct hpfs_inode_info* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 scalar_t__ FUNC_9 (struct inode*,int*,struct quad_buffer_head*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static loff_t FUNC_11(struct file *VAR_5, loff_t VAR_6, int VAR_7)
{
 loff_t VAR_8 = VAR_6 + (VAR_7 == 1 ? VAR_5->f_pos : 0);
 loff_t VAR_9;
 struct quad_buffer_head VAR_10;
 struct inode *VAR_11 = FUNC_0(VAR_5);
 struct hpfs_inode_info *VAR_12 = FUNC_4(VAR_11);
 struct super_block *VAR_13 = VAR_11->i_sb;


 if (VAR_7 == VAR_3 || VAR_7 == VAR_4)
  return -VAR_0;

 FUNC_7(VAR_11);
 FUNC_5(VAR_13);


 if (VAR_8 == 0 || VAR_8 == 1 || VAR_8 == 11 || VAR_8 == 12 || VAR_8 == 13) goto ok;
 VAR_9 = ((loff_t) FUNC_3(VAR_13, VAR_12->i_dno) << 4) + 1;
 while (VAR_9 != VAR_8) {
  if (FUNC_9(VAR_11, &VAR_9, &VAR_10)) FUNC_2(&VAR_10);
  else goto fail;
  if (VAR_9 == 12) goto fail;
 }
 if (FUNC_10(FUNC_1(VAR_11, &VAR_5->f_pos) < 0)) {
  FUNC_6(VAR_13);
  FUNC_8(VAR_11);
  return -VAR_1;
 }
ok:
 VAR_5->f_pos = VAR_8;
 FUNC_6(VAR_13);
 FUNC_8(VAR_11);
 return VAR_8;
fail:

 FUNC_6(VAR_13);
 FUNC_8(VAR_11);
 return -VAR_2;
}
