
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct inode {int i_ino; TYPE_1__* i_mapping; int * i_fop; int * i_op; int i_mode; } ;
struct f2fs_sb_info {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int * a_ops; } ;


 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct f2fs_sb_info*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct f2fs_sb_info*,int ) ;
 int FUNC_8 (struct f2fs_sb_info*,int) ;
 int VAR_1 ;
 int FUNC_9 (struct inode*,struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,int) ;
 int FUNC_12 (struct f2fs_sb_info*) ;
 struct inode* FUNC_13 (struct inode*,int ) ;
 int FUNC_14 (struct f2fs_sb_info*) ;
 int VAR_4 ;
 int FUNC_15 (struct f2fs_sb_info*) ;
 int FUNC_16 (struct inode*,int ,int ) ;
 int FUNC_17 (struct inode*) ;

__attribute__((used)) static int FUNC_18(struct inode *VAR_5, struct dentry *VAR_6,
     umode_t VAR_7, struct inode **VAR_8)
{
 struct f2fs_sb_info *VAR_9 = FUNC_0(VAR_5);
 struct inode *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_5);
 if (VAR_11)
  return VAR_11;

 VAR_10 = FUNC_13(VAR_5, VAR_7);
 if (FUNC_1(VAR_10))
  return FUNC_2(VAR_10);

 if (VAR_8) {
  FUNC_16(VAR_10, VAR_10->i_mode, VAR_0);
  VAR_10->i_op = &VAR_4;
 } else {
  VAR_10->i_op = &VAR_2;
  VAR_10->i_fop = &VAR_3;
  VAR_10->i_mapping->a_ops = &VAR_1;
 }

 FUNC_12(VAR_9);
 VAR_11 = FUNC_5(VAR_9);
 if (VAR_11)
  goto out;

 VAR_11 = FUNC_9(VAR_10, VAR_5);
 if (VAR_11)
  goto release_out;





 FUNC_6(VAR_10);
 FUNC_7(VAR_9, VAR_10->i_ino);

 if (VAR_8) {
  FUNC_11(VAR_10, 0);
  *VAR_8 = VAR_10;
 } else {
  FUNC_3(VAR_6, VAR_10);
 }

 FUNC_15(VAR_9);
 FUNC_17(VAR_10);

 FUNC_8(VAR_9, 1);
 return 0;

release_out:
 FUNC_14(VAR_9);
out:
 FUNC_10(VAR_10);
 return VAR_11;
}
