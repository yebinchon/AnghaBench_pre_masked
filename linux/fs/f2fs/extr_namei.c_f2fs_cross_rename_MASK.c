
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {scalar_t__ i_nlink; int i_ino; void* i_ctime; int i_mode; } ;
struct f2fs_sb_info {int sb; } ;
struct f2fs_dir_entry {int dummy; } ;
struct dentry {int d_name; struct inode* d_inode; } ;
struct TYPE_4__ {int i_sem; int i_projid; } ;
struct TYPE_3__ {scalar_t__ fsync_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_5 ;
 TYPE_1__ FUNC_2 (struct f2fs_sb_info*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_9 ;
 void* FUNC_7 (struct inode*) ;
 struct inode* FUNC_8 (struct dentry*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct f2fs_sb_info*,int ,int ) ;
 int FUNC_12 (struct f2fs_sb_info*,int) ;
 int FUNC_13 (struct f2fs_sb_info*) ;
 struct f2fs_dir_entry* FUNC_14 (struct inode*,int *,struct page**) ;
 int FUNC_15 (struct inode*,int) ;
 int FUNC_16 (struct f2fs_sb_info*) ;
 int FUNC_17 (struct f2fs_sb_info*) ;
 int FUNC_18 (struct inode*,int) ;
 struct f2fs_dir_entry* FUNC_19 (struct inode*,struct page**) ;
 int FUNC_20 (struct page*,int ) ;
 int FUNC_21 (struct inode*,struct f2fs_dir_entry*,struct page*,struct inode*) ;
 int FUNC_22 (int ,int) ;
 int FUNC_23 (struct f2fs_sb_info*) ;
 int FUNC_24 (struct f2fs_sb_info*,int ) ;
 int FUNC_25 (struct inode*) ;
 scalar_t__ FUNC_26 (struct inode*,int ) ;
 int FUNC_27 (int ,int ) ;
 scalar_t__ FUNC_28 (int ) ;
 int FUNC_29 (int *) ;

__attribute__((used)) static int FUNC_30(struct inode *VAR_10, struct dentry *VAR_11,
        struct inode *VAR_12, struct dentry *VAR_13)
{
 struct f2fs_sb_info *VAR_14 = FUNC_1(VAR_10);
 struct inode *VAR_15 = FUNC_8(VAR_11);
 struct inode *VAR_16 = FUNC_8(VAR_13);
 struct page *VAR_17, *VAR_18;
 struct page *VAR_19, *VAR_20;
 struct f2fs_dir_entry *VAR_21 = ((void*)0), *VAR_22 = ((void*)0);
 struct f2fs_dir_entry *VAR_23, *VAR_24;
 int VAR_25 = 0, VAR_26 = 0;
 int VAR_27;

 if (FUNC_28(FUNC_13(VAR_14)))
  return -VAR_0;
 if (!FUNC_16(VAR_14))
  return -VAR_3;

 if ((FUNC_26(VAR_12, VAR_6) &&
   !FUNC_27(FUNC_0(VAR_12)->i_projid,
   FUNC_0(VAR_11->d_inode)->i_projid)) ||
     (FUNC_26(VAR_12, VAR_6) &&
   !FUNC_27(FUNC_0(VAR_10)->i_projid,
   FUNC_0(VAR_13->d_inode)->i_projid)))
  return -VAR_4;

 VAR_27 = FUNC_10(VAR_10);
 if (VAR_27)
  goto out;

 VAR_27 = FUNC_10(VAR_12);
 if (VAR_27)
  goto out;

 VAR_27 = -VAR_2;
 VAR_23 = FUNC_14(VAR_10, &VAR_11->d_name, &VAR_19);
 if (!VAR_23) {
  if (FUNC_4(VAR_19))
   VAR_27 = FUNC_5(VAR_19);
  goto out;
 }

 VAR_24 = FUNC_14(VAR_12, &VAR_13->d_name, &VAR_20);
 if (!VAR_24) {
  if (FUNC_4(VAR_20))
   VAR_27 = FUNC_5(VAR_20);
  goto out_old;
 }


 if (VAR_10 != VAR_12) {
  if (FUNC_6(VAR_15->i_mode)) {
   VAR_21 = FUNC_19(VAR_15,
       &VAR_17);
   if (!VAR_21) {
    if (FUNC_4(VAR_17))
     VAR_27 = FUNC_5(VAR_17);
    goto out_new;
   }
  }

  if (FUNC_6(VAR_16->i_mode)) {
   VAR_22 = FUNC_19(VAR_16,
       &VAR_18);
   if (!VAR_22) {
    if (FUNC_4(VAR_18))
     VAR_27 = FUNC_5(VAR_18);
    goto out_old_dir;
   }
  }
 }






 if ((!VAR_21 || !VAR_22) &&
    VAR_21 != VAR_22) {
  VAR_25 = VAR_21 ? -1 : 1;
  VAR_26 = -VAR_25;
  VAR_27 = -VAR_1;
  if ((VAR_25 > 0 && VAR_10->i_nlink >= VAR_5) ||
   (VAR_26 > 0 && VAR_12->i_nlink >= VAR_5))
   goto out_new_dir;
 }

 FUNC_12(VAR_14, 1);

 FUNC_17(VAR_14);


 if (VAR_21)
  FUNC_21(VAR_15, VAR_21, VAR_17, VAR_12);


 if (VAR_22)
  FUNC_21(VAR_16, VAR_22, VAR_18, VAR_10);


 FUNC_21(VAR_10, VAR_23, VAR_19, VAR_16);

 FUNC_9(&FUNC_0(VAR_15)->i_sem);
 FUNC_25(VAR_15);
 FUNC_29(&FUNC_0(VAR_15)->i_sem);

 VAR_10->i_ctime = FUNC_7(VAR_10);
 if (VAR_25) {
  FUNC_9(&FUNC_0(VAR_10)->i_sem);
  FUNC_15(VAR_10, VAR_25 > 0);
  FUNC_29(&FUNC_0(VAR_10)->i_sem);
 }
 FUNC_18(VAR_10, 0);


 FUNC_21(VAR_12, VAR_24, VAR_20, VAR_15);

 FUNC_9(&FUNC_0(VAR_16)->i_sem);
 FUNC_25(VAR_16);
 FUNC_29(&FUNC_0(VAR_16)->i_sem);

 VAR_12->i_ctime = FUNC_7(VAR_12);
 if (VAR_26) {
  FUNC_9(&FUNC_0(VAR_12)->i_sem);
  FUNC_15(VAR_12, VAR_26 > 0);
  FUNC_29(&FUNC_0(VAR_12)->i_sem);
 }
 FUNC_18(VAR_12, 0);

 if (FUNC_2(VAR_14).fsync_mode == VAR_7) {
  FUNC_11(VAR_14, VAR_10->i_ino, VAR_9);
  FUNC_11(VAR_14, VAR_12->i_ino, VAR_9);
 }

 FUNC_23(VAR_14);

 if (FUNC_3(VAR_10) || FUNC_3(VAR_12))
  FUNC_22(VAR_14->sb, 1);

 FUNC_24(VAR_14, VAR_8);
 return 0;
out_new_dir:
 if (VAR_22) {
  FUNC_20(VAR_18, 0);
 }
out_old_dir:
 if (VAR_21) {
  FUNC_20(VAR_17, 0);
 }
out_new:
 FUNC_20(VAR_20, 0);
out_old:
 FUNC_20(VAR_19, 0);
out:
 return VAR_27;
}
