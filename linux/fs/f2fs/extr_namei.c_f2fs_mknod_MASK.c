
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int i_ino; int * i_op; int i_mode; } ;
struct f2fs_sb_info {int sb; } ;
struct dentry {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct dentry*,struct inode*) ;
 int FUNC_7 (struct f2fs_sb_info*,int ) ;
 int FUNC_8 (struct f2fs_sb_info*,int) ;
 int FUNC_9 (struct f2fs_sb_info*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct f2fs_sb_info*) ;
 int FUNC_12 (struct f2fs_sb_info*) ;
 struct inode* FUNC_13 (struct inode*,int ) ;
 int VAR_2 ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (struct f2fs_sb_info*) ;
 int FUNC_16 (struct inode*,int ,int ) ;
 scalar_t__ FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(struct inode *VAR_3, struct dentry *VAR_4,
    umode_t VAR_5, dev_t VAR_6)
{
 struct f2fs_sb_info *VAR_7 = FUNC_0(VAR_3);
 struct inode *VAR_8;
 int VAR_9 = 0;

 if (FUNC_17(FUNC_9(VAR_7)))
  return -VAR_0;
 if (!FUNC_11(VAR_7))
  return -VAR_1;

 VAR_9 = FUNC_5(VAR_3);
 if (VAR_9)
  return VAR_9;

 VAR_8 = FUNC_13(VAR_3, VAR_5);
 if (FUNC_2(VAR_8))
  return FUNC_3(VAR_8);

 FUNC_16(VAR_8, VAR_8->i_mode, VAR_6);
 VAR_8->i_op = &VAR_2;

 FUNC_12(VAR_7);
 VAR_9 = FUNC_6(VAR_4, VAR_8);
 if (VAR_9)
  goto out;
 FUNC_15(VAR_7);

 FUNC_7(VAR_7, VAR_8->i_ino);

 FUNC_4(VAR_4, VAR_8);

 if (FUNC_1(VAR_3))
  FUNC_14(VAR_7->sb, 1);

 FUNC_8(VAR_7, 1);
 return 0;
out:
 FUNC_10(VAR_8);
 return VAR_9;
}
