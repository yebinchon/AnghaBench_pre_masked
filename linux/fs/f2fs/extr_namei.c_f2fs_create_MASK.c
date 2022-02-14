
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct inode {int i_ino; TYPE_2__* i_mapping; int * i_fop; int * i_op; } ;
struct f2fs_sb_info {int sb; } ;
struct TYPE_3__ {int name; } ;
struct dentry {TYPE_1__ d_name; } ;
typedef int nid_t ;
struct TYPE_4__ {int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct f2fs_sb_info*) ;
 int FUNC_12 (struct f2fs_sb_info*) ;
 struct inode* FUNC_13 (struct inode*,int ) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (struct f2fs_sb_info*) ;
 int FUNC_16 (struct f2fs_sb_info*,struct inode*,int ) ;
 int FUNC_17 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19(struct inode *VAR_6, struct dentry *VAR_7, umode_t VAR_8,
      bool VAR_9)
{
 struct f2fs_sb_info *VAR_10 = FUNC_0(VAR_6);
 struct inode *VAR_11;
 nid_t VAR_12 = 0;
 int VAR_13;

 if (FUNC_18(FUNC_9(VAR_10)))
  return -VAR_1;
 if (!FUNC_11(VAR_10))
  return -VAR_2;

 VAR_13 = FUNC_5(VAR_6);
 if (VAR_13)
  return VAR_13;

 VAR_11 = FUNC_13(VAR_6, VAR_8);
 if (FUNC_2(VAR_11))
  return FUNC_3(VAR_11);

 if (!FUNC_17(VAR_10, VAR_0))
  FUNC_16(VAR_10, VAR_11, VAR_7->d_name.name);

 VAR_11->i_op = &VAR_4;
 VAR_11->i_fop = &VAR_5;
 VAR_11->i_mapping->a_ops = &VAR_3;
 VAR_12 = VAR_11->i_ino;

 FUNC_12(VAR_10);
 VAR_13 = FUNC_6(VAR_7, VAR_11);
 if (VAR_13)
  goto out;
 FUNC_15(VAR_10);

 FUNC_7(VAR_10, VAR_12);

 FUNC_4(VAR_7, VAR_11);

 if (FUNC_1(VAR_6))
  FUNC_14(VAR_10->sb, 1);

 FUNC_8(VAR_10, 1);
 return 0;
out:
 FUNC_10(VAR_11);
 return VAR_13;
}
