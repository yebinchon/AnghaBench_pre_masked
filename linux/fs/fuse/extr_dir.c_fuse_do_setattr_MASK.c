
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_mode; scalar_t__ i_size; int i_mapping; int i_ctime; int i_mtime; } ;
struct iattr {int ia_valid; scalar_t__ ia_size; int ia_ctime; int ia_mtime; } ;
struct TYPE_3__ {int mode; scalar_t__ size; } ;
struct fuse_setattr_in {TYPE_1__ attr; int lock_owner; int valid; int fh; } ;
struct fuse_inode {int state; int lock; } ;
struct fuse_file {int fh; } ;
struct fuse_conn {int writeback_cache; scalar_t__ atomic_o_trunc; int default_permissions; } ;
struct fuse_attr_out {TYPE_1__ attr; int lock_owner; int valid; int fh; } ;
struct file {struct fuse_file* private_data; } ;
struct dentry {int dummy; } ;
typedef int outarg ;
typedef scalar_t__ loff_t ;
typedef int inarg ;
struct TYPE_4__ {int files; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct inode*) ;
 int VAR_16 ;
 int FUNC_4 (struct fuse_setattr_in*) ;
 int FUNC_5 (int ,int *) ;
 TYPE_2__* VAR_17 ;
 struct inode* FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct inode*,TYPE_1__*,int ) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct fuse_conn*,int ) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct fuse_conn*,int *,struct inode*,struct fuse_setattr_in*,struct fuse_setattr_in*) ;
 int FUNC_13 (struct fuse_conn*,int *) ;
 struct fuse_conn* FUNC_14 (struct inode*) ;
 struct fuse_inode* FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*,scalar_t__) ;
 int FUNC_17 (struct fuse_conn*,struct iattr*,struct fuse_setattr_in*,int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (struct fuse_setattr_in*,int ,int) ;
 int FUNC_21 (int ,int *) ;
 int FUNC_22 (struct dentry*,struct iattr*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (struct inode*,scalar_t__) ;
 int FUNC_26 (struct inode*,int) ;

int FUNC_27(struct dentry *VAR_18, struct iattr *VAR_19,
      struct file *VAR_20)
{
 struct inode *VAR_21 = FUNC_6(VAR_18);
 struct fuse_conn *VAR_22 = FUNC_14(VAR_21);
 struct fuse_inode *VAR_23 = FUNC_15(VAR_21);
 FUNC_0(VAR_16);
 struct fuse_setattr_in VAR_24;
 struct fuse_attr_out VAR_25;
 bool VAR_26 = 0;
 bool VAR_27 = VAR_22->writeback_cache;
 loff_t VAR_28;
 int VAR_29;
 bool VAR_30 = VAR_27 && FUNC_1(VAR_21->i_mode);

 if (!VAR_22->default_permissions)
  VAR_19->ia_valid |= VAR_1;

 VAR_29 = FUNC_22(VAR_18, VAR_19);
 if (VAR_29)
  return VAR_29;

 if (VAR_19->ia_valid & VAR_6) {

  FUNC_2(!(VAR_19->ia_valid & VAR_7));
  FUNC_2(VAR_19->ia_size != 0);
  if (VAR_22->atomic_o_trunc) {





   FUNC_16(VAR_21, 0);
   FUNC_25(VAR_21, 0);
   return 0;
  }
  VAR_20 = ((void*)0);
 }

 if (VAR_19->ia_valid & VAR_7) {
  if (FUNC_2(!FUNC_1(VAR_21->i_mode)))
   return -VAR_11;
  VAR_26 = 1;
 }


 if (VAR_27 && FUNC_1(VAR_21->i_mode) &&
     VAR_19->ia_valid &
   (VAR_3 | VAR_9 | VAR_2 | VAR_5 |
    VAR_8)) {
  VAR_29 = FUNC_26(VAR_21, 1);
  if (VAR_29)
   return VAR_29;

  FUNC_11(VAR_21);
  FUNC_10(VAR_21);
 }

 if (VAR_26) {
  FUNC_11(VAR_21);
  FUNC_21(VAR_14, &VAR_23->state);
  if (VAR_30 && VAR_19->ia_size != VAR_21->i_size)
   VAR_19->ia_valid |= VAR_4 | VAR_0;
 }

 FUNC_20(&VAR_24, 0, sizeof(VAR_24));
 FUNC_20(&VAR_25, 0, sizeof(VAR_25));
 FUNC_17(VAR_22, VAR_19, &VAR_24, VAR_30);
 if (VAR_20) {
  struct fuse_file *VAR_31 = VAR_20->private_data;
  VAR_24.valid |= VAR_12;
  VAR_24.fh = VAR_31->fh;
 }
 if (VAR_19->ia_valid & VAR_7) {

  VAR_24.valid |= VAR_13;
  VAR_24.lock_owner = FUNC_9(VAR_22, VAR_17->files);
 }
 FUNC_12(VAR_22, &VAR_16, VAR_21, &VAR_24, &VAR_25);
 VAR_29 = FUNC_13(VAR_22, &VAR_16);
 if (VAR_29) {
  if (VAR_29 == -VAR_10)
   FUNC_8(VAR_21);
  goto error;
 }

 if ((VAR_21->i_mode ^ VAR_25.attr.mode) & VAR_15) {
  FUNC_19(VAR_21);
  VAR_29 = -VAR_11;
  goto error;
 }

 FUNC_23(&VAR_23->lock);

 if (VAR_30) {
  if (VAR_19->ia_valid & VAR_4)
   VAR_21->i_mtime = VAR_19->ia_mtime;
  if (VAR_19->ia_valid & VAR_0)
   VAR_21->i_ctime = VAR_19->ia_ctime;

 }

 FUNC_7(VAR_21, &VAR_25.attr,
          FUNC_4(&VAR_25));
 VAR_28 = VAR_21->i_size;

 if (!VAR_27 || VAR_26 || !FUNC_1(VAR_21->i_mode))
  FUNC_16(VAR_21, VAR_25.attr.size);

 if (VAR_26) {

  FUNC_3(VAR_21);
 }
 FUNC_24(&VAR_23->lock);





 if ((VAR_26 || !VAR_27) &&
     FUNC_1(VAR_21->i_mode) && VAR_28 != VAR_25.attr.size) {
  FUNC_25(VAR_21, VAR_25.attr.size);
  FUNC_18(VAR_21->i_mapping);
 }

 FUNC_5(VAR_14, &VAR_23->state);
 return 0;

error:
 if (VAR_26)
  FUNC_10(VAR_21);

 FUNC_5(VAR_14, &VAR_23->state);
 return VAR_29;
}
