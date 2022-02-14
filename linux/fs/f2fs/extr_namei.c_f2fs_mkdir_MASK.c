
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct inode {int i_ino; TYPE_1__* i_mapping; int * i_fop; int * i_op; } ;
struct f2fs_sb_info {int sb; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int * a_ops; } ;


 int VAR_0 ;
 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int VAR_2 ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct dentry*,struct inode*) ;
 int FUNC_8 (struct f2fs_sb_info*,int ) ;
 int FUNC_9 (struct f2fs_sb_info*,int) ;
 int FUNC_10 (struct f2fs_sb_info*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct f2fs_sb_info*) ;
 struct inode* FUNC_13 (struct inode*,int) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (struct f2fs_sb_info*) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (struct inode*,int ) ;
 scalar_t__ FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19(struct inode *VAR_6, struct dentry *VAR_7, umode_t VAR_8)
{
 struct f2fs_sb_info *VAR_9 = FUNC_0(VAR_6);
 struct inode *VAR_10;
 int VAR_11;

 if (FUNC_18(FUNC_10(VAR_9)))
  return -VAR_0;

 VAR_11 = FUNC_6(VAR_6);
 if (VAR_11)
  return VAR_11;

 VAR_10 = FUNC_13(VAR_6, VAR_2 | VAR_8);
 if (FUNC_2(VAR_10))
  return FUNC_3(VAR_10);

 VAR_10->i_op = &VAR_4;
 VAR_10->i_fop = &VAR_5;
 VAR_10->i_mapping->a_ops = &VAR_3;
 FUNC_16(VAR_10);

 FUNC_17(VAR_10, VAR_1);
 FUNC_12(VAR_9);
 VAR_11 = FUNC_7(VAR_7, VAR_10);
 if (VAR_11)
  goto out_fail;
 FUNC_15(VAR_9);

 FUNC_8(VAR_9, VAR_10->i_ino);

 FUNC_5(VAR_7, VAR_10);

 if (FUNC_1(VAR_6))
  FUNC_14(VAR_9->sb, 1);

 FUNC_9(VAR_9, 1);
 return 0;

out_fail:
 FUNC_4(VAR_10, VAR_1);
 FUNC_11(VAR_10);
 return VAR_11;
}
