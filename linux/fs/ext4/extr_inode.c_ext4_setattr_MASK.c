
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_size; int i_sb; int i_mode; scalar_t__ i_nlink; int i_mtime; int i_ctime; int i_gid; int i_uid; } ;
struct iattr {unsigned int ia_valid; scalar_t__ ia_size; int ia_gid; int ia_uid; } ;
struct ext4_sb_info {scalar_t__ s_bitmap_maxbytes; } ;
struct dentry {int dummy; } ;
typedef scalar_t__ loff_t ;
typedef int handle_t ;
struct TYPE_2__ {scalar_t__ i_disksize; int i_mmap_sem; int i_data_sem; int xattr_sem; } ;


 unsigned int const VAR_0 ;
 unsigned int const VAR_1 ;
 int VAR_2 ;
 unsigned int const VAR_3 ;
 unsigned int const VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ext4_sb_info* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct inode*) ;
 struct inode* FUNC_11 (struct dentry*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*,struct iattr*) ;
 int FUNC_16 (struct inode*,scalar_t__) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct ext4_sb_info*) ;
 scalar_t__ FUNC_19 (int *) ;
 int * FUNC_20 (struct inode*,int ,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,struct inode*) ;
 int FUNC_23 (int *,struct inode*) ;
 int FUNC_24 (int *,struct inode*) ;
 scalar_t__ FUNC_25 (struct inode*) ;
 scalar_t__ FUNC_26 (struct inode*) ;
 int FUNC_27 (int ,int) ;
 int FUNC_28 (struct inode*,int ) ;
 int FUNC_29 (struct inode*) ;
 int FUNC_30 (struct inode*) ;
 int FUNC_31 (struct dentry*,struct iattr*) ;
 int FUNC_32 (struct dentry*,struct iattr*) ;
 int FUNC_33 (int ,int ) ;
 int FUNC_34 (struct inode*,scalar_t__) ;
 int FUNC_35 (struct inode*) ;
 int FUNC_36 (struct inode*) ;
 scalar_t__ FUNC_37 (struct inode*,struct iattr*) ;
 int FUNC_38 (struct inode*) ;
 int FUNC_39 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_40 (struct inode*,int ) ;
 int FUNC_41 (struct inode*,struct iattr*) ;
 int FUNC_42 (struct dentry*,struct iattr*) ;
 int FUNC_43 (struct inode*,scalar_t__) ;
 int FUNC_44 (int ,int ) ;
 scalar_t__ FUNC_45 (int) ;
 int FUNC_46 (int *) ;
 int FUNC_47 (int *) ;

int FUNC_48(struct dentry *VAR_12, struct iattr *VAR_13)
{
 struct inode *VAR_14 = FUNC_11(VAR_12);
 int VAR_15, VAR_16 = 0;
 int VAR_17 = 0;
 const unsigned int VAR_18 = VAR_13->ia_valid;

 if (FUNC_45(FUNC_18(FUNC_3(VAR_14->i_sb))))
  return -VAR_7;

 if (FUNC_45(FUNC_6(VAR_14)))
  return -VAR_8;

 if (FUNC_45(FUNC_4(VAR_14) &&
       (VAR_18 & (VAR_1 | VAR_4 |
      VAR_0 | VAR_3))))
  return -VAR_8;

 VAR_15 = FUNC_42(VAR_12, VAR_13);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_31(VAR_12, VAR_13);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_32(VAR_12, VAR_13);
 if (VAR_15)
  return VAR_15;

 if (FUNC_37(VAR_14, VAR_13)) {
  VAR_15 = FUNC_14(VAR_14);
  if (VAR_15)
   return VAR_15;
 }
 if ((VAR_18 & VAR_4 && !FUNC_44(VAR_13->ia_uid, VAR_14->i_uid)) ||
     (VAR_18 & VAR_0 && !FUNC_33(VAR_13->ia_gid, VAR_14->i_gid))) {
  handle_t *VAR_19;



  VAR_19 = FUNC_20(VAR_14, VAR_10,
   (FUNC_2(VAR_14->i_sb) +
    FUNC_1(VAR_14->i_sb)) + 3);
  if (FUNC_5(VAR_19)) {
   VAR_15 = FUNC_8(VAR_19);
   goto err_out;
  }




  FUNC_12(&FUNC_0(VAR_14)->xattr_sem);
  VAR_15 = FUNC_15(VAR_14, VAR_13);
  FUNC_46(&FUNC_0(VAR_14)->xattr_sem);

  if (VAR_15) {
   FUNC_21(VAR_19);
   return VAR_15;
  }


  if (VAR_13->ia_valid & VAR_4)
   VAR_14->i_uid = VAR_13->ia_uid;
  if (VAR_13->ia_valid & VAR_0)
   VAR_14->i_gid = VAR_13->ia_gid;
  VAR_15 = FUNC_22(VAR_19, VAR_14);
  FUNC_21(VAR_19);
 }

 if (VAR_13->ia_valid & VAR_2) {
  handle_t *VAR_20;
  loff_t VAR_21 = VAR_14->i_size;
  int VAR_22 = (VAR_13->ia_size < VAR_14->i_size);

  if (!(FUNC_28(VAR_14, VAR_11))) {
   struct ext4_sb_info *VAR_23 = FUNC_3(VAR_14->i_sb);

   if (VAR_13->ia_size > VAR_23->s_bitmap_maxbytes)
    return -VAR_5;
  }
  if (!FUNC_9(VAR_14->i_mode))
   return -VAR_6;

  if (FUNC_7(VAR_14) && VAR_13->ia_size != VAR_14->i_size)
   FUNC_36(VAR_14);

  if (VAR_22) {
   if (FUNC_26(VAR_14)) {
    VAR_15 = FUNC_16(VAR_14,
           VAR_13->ia_size);
    if (VAR_15)
     goto err_out;
   }




   FUNC_35(VAR_14);
  }

  FUNC_13(&FUNC_0(VAR_14)->i_mmap_sem);

  VAR_16 = FUNC_17(VAR_14);
  if (VAR_16) {
   FUNC_47(&FUNC_0(VAR_14)->i_mmap_sem);
   return VAR_16;
  }

  if (VAR_13->ia_size != VAR_14->i_size) {
   VAR_20 = FUNC_20(VAR_14, VAR_9, 3);
   if (FUNC_5(VAR_20)) {
    VAR_15 = FUNC_8(VAR_20);
    goto out_mmap_sem;
   }
   if (FUNC_19(VAR_20) && VAR_22) {
    VAR_15 = FUNC_23(VAR_20, VAR_14);
    VAR_17 = 1;
   }




   if (!VAR_22) {
    VAR_14->i_mtime = FUNC_10(VAR_14);
    VAR_14->i_ctime = VAR_14->i_mtime;
   }
   FUNC_13(&FUNC_0(VAR_14)->i_data_sem);
   FUNC_0(VAR_14)->i_disksize = VAR_13->ia_size;
   VAR_16 = FUNC_22(VAR_20, VAR_14);
   if (!VAR_15)
    VAR_15 = VAR_16;





   if (!VAR_15)
    FUNC_34(VAR_14, VAR_13->ia_size);
   FUNC_47(&FUNC_0(VAR_14)->i_data_sem);
   FUNC_21(VAR_20);
   if (VAR_15)
    goto out_mmap_sem;
   if (!VAR_22) {
    FUNC_39(VAR_14, VAR_21,
        VAR_14->i_size);
   } else if (FUNC_25(VAR_14)) {
    FUNC_30(VAR_14);
   }
  }





  FUNC_43(VAR_14, VAR_14->i_size);




  if (VAR_13->ia_size <= VAR_21) {
   VAR_16 = FUNC_29(VAR_14);
   if (VAR_16)
    VAR_15 = VAR_16;
  }
out_mmap_sem:
  FUNC_47(&FUNC_0(VAR_14)->i_mmap_sem);
 }

 if (!VAR_15) {
  FUNC_41(VAR_14, VAR_13);
  FUNC_38(VAR_14);
 }





 if (VAR_17 && VAR_14->i_nlink)
  FUNC_24(((void*)0), VAR_14);

 if (!VAR_15 && (VAR_18 & VAR_1))
  VAR_16 = FUNC_40(VAR_14, VAR_14->i_mode);

err_out:
 FUNC_27(VAR_14->i_sb, VAR_15);
 if (!VAR_15)
  VAR_15 = VAR_16;
 return VAR_15;
}
