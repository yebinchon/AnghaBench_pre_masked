
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ quiet; int fs_gid; int fs_uid; } ;
struct msdos_sb_info {TYPE_1__ options; } ;
struct inode {scalar_t__ i_size; } ;
struct iattr {unsigned int ia_valid; scalar_t__ ia_size; int ia_mode; int ia_mtime; int ia_ctime; int ia_atime; int ia_gid; int ia_uid; } ;
struct dentry {int d_sb; } ;
struct TYPE_4__ {int truncate_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 struct msdos_sb_info* FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct msdos_sb_info*,struct inode*) ;
 int FUNC_5 (struct inode*,scalar_t__) ;
 int FUNC_6 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct msdos_sb_info*,struct inode*,int*) ;
 int FUNC_8 (struct inode*,scalar_t__) ;
 int FUNC_9 (struct inode*,int *,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*,struct iattr*) ;
 int FUNC_14 (struct dentry*,struct iattr*) ;
 int FUNC_15 (struct inode*,scalar_t__) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int *) ;

int FUNC_18(struct dentry *VAR_13, struct iattr *VAR_14)
{
 struct msdos_sb_info *VAR_15 = FUNC_1(VAR_13->d_sb);
 struct inode *VAR_16 = FUNC_2(VAR_13);
 unsigned int VAR_17;
 int VAR_18;


 VAR_17 = VAR_14->ia_valid;
 if (VAR_17 & VAR_12) {
  if (FUNC_4(VAR_15, VAR_16))
   VAR_14->ia_valid &= ~VAR_12;
 }

 VAR_18 = FUNC_14(VAR_13, VAR_14);
 VAR_14->ia_valid = VAR_17;
 if (VAR_18) {
  if (VAR_15->options.quiet)
   VAR_18 = 0;
  goto out;
 }







 if (VAR_14->ia_valid & VAR_5) {
  FUNC_11(VAR_16);

  if (VAR_14->ia_size > VAR_16->i_size) {
   VAR_18 = FUNC_6(VAR_16, VAR_14->ia_size);
   if (VAR_18 || VAR_14->ia_valid == VAR_5)
    goto out;
   VAR_14->ia_valid &= ~VAR_5;
  }
 }

 if (((VAR_14->ia_valid & VAR_6) &&
      (!FUNC_16(VAR_14->ia_uid, VAR_15->options.fs_uid))) ||
     ((VAR_14->ia_valid & VAR_2) &&
      (!FUNC_10(VAR_14->ia_gid, VAR_15->options.fs_gid))) ||
     ((VAR_14->ia_valid & VAR_3) &&
      (VAR_14->ia_mode & ~VAR_8)))
  VAR_18 = -VAR_7;

 if (VAR_18) {
  if (VAR_15->options.quiet)
   VAR_18 = 0;
  goto out;
 }





 if (VAR_14->ia_valid & VAR_3) {
  if (FUNC_7(VAR_15, VAR_16, &VAR_14->ia_mode) < 0)
   VAR_14->ia_valid &= ~VAR_3;
 }

 if (VAR_14->ia_valid & VAR_5) {
  VAR_18 = FUNC_5(VAR_16, VAR_14->ia_size);
  if (VAR_18)
   goto out;
  FUNC_3(&FUNC_0(VAR_16)->truncate_lock);
  FUNC_15(VAR_16, VAR_14->ia_size);
  FUNC_8(VAR_16, VAR_14->ia_size);
  FUNC_17(&FUNC_0(VAR_16)->truncate_lock);
 }





 if (VAR_14->ia_valid & VAR_0)
  FUNC_9(VAR_16, &VAR_14->ia_atime, VAR_9);
 if (VAR_14->ia_valid & VAR_1)
  FUNC_9(VAR_16, &VAR_14->ia_ctime, VAR_10);
 if (VAR_14->ia_valid & VAR_4)
  FUNC_9(VAR_16, &VAR_14->ia_mtime, VAR_11);
 VAR_14->ia_valid &= ~(VAR_0|VAR_1|VAR_4);

 FUNC_13(VAR_16, VAR_14);
 FUNC_12(VAR_16);
out:
 return VAR_18;
}
