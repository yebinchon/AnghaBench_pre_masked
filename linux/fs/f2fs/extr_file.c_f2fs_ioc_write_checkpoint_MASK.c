
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;
struct f2fs_sb_info {int sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct f2fs_sb_info*,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 struct inode* FUNC_5 (struct file*) ;
 int FUNC_6 (struct f2fs_sb_info*,int ) ;
 int FUNC_7 (struct file*) ;
 int FUNC_8 (struct file*) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_5, unsigned long VAR_6)
{
 struct inode *VAR_7 = FUNC_5(VAR_5);
 struct f2fs_sb_info *VAR_8 = FUNC_0(VAR_7);
 int VAR_9;

 if (!FUNC_1(VAR_0))
  return -VAR_2;

 if (FUNC_3(VAR_8->sb))
  return -VAR_3;

 if (FUNC_9(FUNC_6(VAR_8, VAR_4))) {
  FUNC_2(VAR_8, "Skipping Checkpoint. Checkpoints currently disabled.");
  return -VAR_1;
 }

 VAR_9 = FUNC_8(VAR_5);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_4(VAR_8->sb, 1);

 FUNC_7(VAR_5);
 return VAR_9;
}
