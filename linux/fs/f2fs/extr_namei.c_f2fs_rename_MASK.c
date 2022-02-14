
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int i_ino; int i_mode; int i_state; void* i_ctime; int i_nlink; } ;
struct f2fs_sb_info {int sb; } ;
struct f2fs_dir_entry {int dummy; } ;
struct dentry {int d_name; struct inode* d_inode; } ;
struct TYPE_4__ {int i_sem; int i_pino; int i_projid; } ;
struct TYPE_3__ {scalar_t__ fsync_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 TYPE_1__ FUNC_2 (struct f2fs_sb_info*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int VAR_8 ;
 int FUNC_5 (struct page*) ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_11 ;
 void* FUNC_7 (struct inode*) ;
 struct inode* FUNC_8 (struct dentry*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct f2fs_sb_info*) ;
 int FUNC_12 (struct f2fs_sb_info*,int ,int ) ;
 int FUNC_13 (struct dentry*,struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct f2fs_sb_info*,int) ;
 int FUNC_16 (struct f2fs_sb_info*) ;
 int FUNC_17 (struct inode*,struct inode**) ;
 int FUNC_18 (struct f2fs_dir_entry*,struct page*,struct inode*,int *) ;
 int FUNC_19 (struct inode*) ;
 struct f2fs_dir_entry* FUNC_20 (struct inode*,int *,struct page**) ;
 int FUNC_21 (struct inode*) ;
 int FUNC_22 (struct inode*,int) ;
 int FUNC_23 (struct f2fs_sb_info*) ;
 int FUNC_24 (struct f2fs_sb_info*) ;
 int FUNC_25 (struct inode*,int) ;
 struct f2fs_dir_entry* FUNC_26 (struct inode*,struct page**) ;
 int FUNC_27 (struct page*,int ) ;
 int FUNC_28 (struct f2fs_sb_info*) ;
 int FUNC_29 (struct inode*,struct f2fs_dir_entry*,struct page*,struct inode*) ;
 int FUNC_30 (int ,int) ;
 int FUNC_31 (struct f2fs_sb_info*) ;
 int FUNC_32 (struct f2fs_sb_info*,int ) ;
 int FUNC_33 (struct inode*) ;
 int FUNC_34 (struct inode*) ;
 scalar_t__ FUNC_35 (struct inode*,int ) ;
 int FUNC_36 (int ,int ) ;
 int FUNC_37 (struct inode*,int ) ;
 scalar_t__ FUNC_38 (int ) ;
 int FUNC_39 (int *) ;

__attribute__((used)) static int FUNC_40(struct inode *VAR_12, struct dentry *VAR_13,
   struct inode *VAR_14, struct dentry *VAR_15,
   unsigned int VAR_16)
{
 struct f2fs_sb_info *VAR_17 = FUNC_1(VAR_12);
 struct inode *VAR_18 = FUNC_8(VAR_13);
 struct inode *VAR_19 = FUNC_8(VAR_15);
 struct inode *VAR_20 = ((void*)0);
 struct page *VAR_21;
 struct page *VAR_22, *VAR_23 = ((void*)0);
 struct f2fs_dir_entry *VAR_24 = ((void*)0);
 struct f2fs_dir_entry *VAR_25;
 struct f2fs_dir_entry *VAR_26;
 bool VAR_27 = FUNC_21(VAR_12);
 int VAR_28;

 if (FUNC_38(FUNC_16(VAR_17)))
  return -VAR_0;
 if (!FUNC_23(VAR_17))
  return -VAR_2;

 if (FUNC_35(VAR_14, VAR_6) &&
   (!FUNC_36(FUNC_0(VAR_14)->i_projid,
   FUNC_0(VAR_13->d_inode)->i_projid)))
  return -VAR_4;

 VAR_28 = FUNC_10(VAR_12);
 if (VAR_28)
  goto out;

 VAR_28 = FUNC_10(VAR_14);
 if (VAR_28)
  goto out;

 if (VAR_19) {
  VAR_28 = FUNC_10(VAR_19);
  if (VAR_28)
   goto out;
 }

 VAR_28 = -VAR_1;
 VAR_25 = FUNC_20(VAR_12, &VAR_13->d_name, &VAR_22);
 if (!VAR_25) {
  if (FUNC_4(VAR_22))
   VAR_28 = FUNC_5(VAR_22);
  goto out;
 }

 if (FUNC_6(VAR_18->i_mode)) {
  VAR_24 = FUNC_26(VAR_18, &VAR_21);
  if (!VAR_24) {
   if (FUNC_4(VAR_21))
    VAR_28 = FUNC_5(VAR_21);
   goto out_old;
  }
 }

 if (VAR_16 & VAR_9) {
  VAR_28 = FUNC_17(VAR_12, &VAR_20);
  if (VAR_28)
   goto out_dir;
 }

 if (VAR_19) {

  VAR_28 = -VAR_3;
  if (VAR_24 && !FUNC_19(VAR_19))
   goto out_whiteout;

  VAR_28 = -VAR_1;
  VAR_26 = FUNC_20(VAR_14, &VAR_15->d_name,
      &VAR_23);
  if (!VAR_26) {
   if (FUNC_4(VAR_23))
    VAR_28 = FUNC_5(VAR_23);
   goto out_whiteout;
  }

  FUNC_15(VAR_17, 1);

  FUNC_24(VAR_17);

  VAR_28 = FUNC_11(VAR_17);
  if (VAR_28)
   goto put_out_dir;

  FUNC_29(VAR_14, VAR_26, VAR_23, VAR_18);

  VAR_19->i_ctime = FUNC_7(VAR_19);
  FUNC_9(&FUNC_0(VAR_19)->i_sem);
  if (VAR_24)
   FUNC_22(VAR_19, 0);
  FUNC_22(VAR_19, 0);
  FUNC_39(&FUNC_0(VAR_19)->i_sem);

  if (!VAR_19->i_nlink)
   FUNC_14(VAR_19);
  else
   FUNC_28(VAR_17);
 } else {
  FUNC_15(VAR_17, 1);

  FUNC_24(VAR_17);

  VAR_28 = FUNC_13(VAR_15, VAR_18);
  if (VAR_28) {
   FUNC_31(VAR_17);
   goto out_whiteout;
  }

  if (VAR_24)
   FUNC_22(VAR_14, 1);
  if (VAR_27 && !FUNC_21(VAR_12)) {
   FUNC_27(VAR_22, 0);
   VAR_22 = ((void*)0);

   VAR_25 = FUNC_20(VAR_12,
      &VAR_13->d_name, &VAR_22);
   if (!VAR_25) {
    VAR_28 = -VAR_1;
    if (FUNC_4(VAR_22))
     VAR_28 = FUNC_5(VAR_22);
    FUNC_31(VAR_17);
    goto out_whiteout;
   }
  }
 }

 FUNC_9(&FUNC_0(VAR_18)->i_sem);
 if (!VAR_24 || VAR_20)
  FUNC_33(VAR_18);
 else
  FUNC_0(VAR_18)->i_pino = VAR_14->i_ino;
 FUNC_39(&FUNC_0(VAR_18)->i_sem);

 VAR_18->i_ctime = FUNC_7(VAR_18);
 FUNC_25(VAR_18, 0);

 FUNC_18(VAR_25, VAR_22, VAR_12, ((void*)0));

 if (VAR_20) {
  VAR_20->i_state |= VAR_8;
  FUNC_37(VAR_20, VAR_5);
  VAR_28 = FUNC_13(VAR_13, VAR_20);
  if (VAR_28)
   goto put_out_dir;
  VAR_20->i_state &= ~VAR_8;
  FUNC_34(VAR_20);
 }

 if (VAR_24) {
  if (VAR_12 != VAR_14 && !VAR_20)
   FUNC_29(VAR_18, VAR_24,
      VAR_21, VAR_14);
  else
   FUNC_27(VAR_21, 0);
  FUNC_22(VAR_12, 0);
 }
 if (FUNC_2(VAR_17).fsync_mode == VAR_7) {
  FUNC_12(VAR_17, VAR_14->i_ino, VAR_11);
  if (FUNC_6(VAR_18->i_mode))
   FUNC_12(VAR_17, VAR_18->i_ino,
       VAR_11);
 }

 FUNC_31(VAR_17);

 if (FUNC_3(VAR_12) || FUNC_3(VAR_14))
  FUNC_30(VAR_17->sb, 1);

 FUNC_32(VAR_17, VAR_10);
 return 0;

put_out_dir:
 FUNC_31(VAR_17);
 if (VAR_23)
  FUNC_27(VAR_23, 0);
out_whiteout:
 if (VAR_20)
  FUNC_34(VAR_20);
out_dir:
 if (VAR_24)
  FUNC_27(VAR_21, 0);
out_old:
 FUNC_27(VAR_22, 0);
out:
 return VAR_28;
}
