
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ctime; } ;
struct f2fs_sb_info {int sb; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {int i_projid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*,struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct dentry*,struct inode*) ;
 int FUNC_9 (struct f2fs_sb_info*,int) ;
 int FUNC_10 (struct f2fs_sb_info*) ;
 int FUNC_11 (struct f2fs_sb_info*) ;
 int FUNC_12 (struct f2fs_sb_info*) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (struct f2fs_sb_info*) ;
 int FUNC_15 (struct dentry*,struct inode*,struct dentry*) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (struct inode*) ;
 scalar_t__ FUNC_18 (struct inode*,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (struct inode*,int ) ;
 scalar_t__ FUNC_21 (int ) ;

__attribute__((used)) static int FUNC_22(struct dentry *VAR_5, struct inode *VAR_6,
  struct dentry *VAR_7)
{
 struct inode *VAR_8 = FUNC_5(VAR_5);
 struct f2fs_sb_info *VAR_9 = FUNC_1(VAR_6);
 int VAR_10;

 if (FUNC_21(FUNC_10(VAR_9)))
  return -VAR_0;
 if (!FUNC_11(VAR_9))
  return -VAR_1;

 VAR_10 = FUNC_15(VAR_5, VAR_6, VAR_7);
 if (VAR_10)
  return VAR_10;

 if (FUNC_18(VAR_6, VAR_4) &&
   (!FUNC_19(FUNC_0(VAR_6)->i_projid,
   FUNC_0(VAR_5->d_inode)->i_projid)))
  return -VAR_2;

 VAR_10 = FUNC_7(VAR_6);
 if (VAR_10)
  return VAR_10;

 FUNC_9(VAR_9, 1);

 VAR_8->i_ctime = FUNC_4(VAR_8);
 FUNC_16(VAR_8);

 FUNC_20(VAR_8, VAR_3);
 FUNC_12(VAR_9);
 VAR_10 = FUNC_8(VAR_7, VAR_8);
 if (VAR_10)
  goto out;
 FUNC_14(VAR_9);

 FUNC_6(VAR_7, VAR_8);

 if (FUNC_2(VAR_6))
  FUNC_13(VAR_9->sb, 1);
 return 0;
out:
 FUNC_3(VAR_8, VAR_3);
 FUNC_17(VAR_8);
 FUNC_14(VAR_9);
 return VAR_10;
}
