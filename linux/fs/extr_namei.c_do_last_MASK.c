
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct path {struct dentry* dentry; } ;
struct open_flags {int open_flag; int acc_mode; int intent; } ;
struct TYPE_8__ {int mnt; struct dentry* dentry; } ;
struct TYPE_6__ {int* name; size_t len; } ;
struct nameidata {int flags; scalar_t__ last_type; scalar_t__ inode; TYPE_3__ path; int name; TYPE_1__ last; } ;
struct inode {int dummy; } ;
struct TYPE_7__ {struct dentry* dentry; } ;
struct file {int f_mode; TYPE_2__ f_path; } ;
struct dentry {scalar_t__ d_inode; } ;
struct TYPE_9__ {int i_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct dentry*,int ) ;
 int FUNC_4 (struct nameidata*) ;
 struct inode* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 scalar_t__ FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct dentry*) ;
 TYPE_5__* FUNC_10 (struct file*) ;
 int FUNC_11 (struct path*,struct nameidata*) ;
 int FUNC_12 (struct nameidata*,scalar_t__) ;
 int FUNC_13 (struct file*) ;
 int FUNC_14 (struct file*,int) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (scalar_t__) ;
 scalar_t__ FUNC_19 (int) ;
 int FUNC_20 (struct nameidata*,struct path*,struct inode**,unsigned int*) ;
 int FUNC_21 (struct nameidata*,struct path*,struct file*,struct open_flags const*,int) ;
 int FUNC_22 (struct dentry*,struct inode*) ;
 int FUNC_23 (TYPE_3__*,int,int) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (struct path*,struct nameidata*) ;
 int FUNC_27 (struct nameidata*,struct path*,int ,struct inode*,unsigned int) ;
 scalar_t__ FUNC_28 (int) ;
 int FUNC_29 (TYPE_3__*,struct file*) ;

__attribute__((used)) static int FUNC_30(struct nameidata *VAR_18,
     struct file *VAR_19, const struct open_flags *VAR_20)
{
 struct dentry *VAR_21 = VAR_18->path.dentry;
 int VAR_22 = VAR_20->open_flag;
 bool VAR_23 = (VAR_22 & VAR_16) != 0;
 bool VAR_24 = 0;
 int VAR_25 = VAR_20->acc_mode;
 unsigned VAR_26;
 struct inode *VAR_27;
 struct path VAR_28;
 int VAR_29;

 VAR_18->flags &= ~VAR_11;
 VAR_18->flags |= VAR_20->intent;

 if (VAR_18->last_type != VAR_8) {
  VAR_29 = FUNC_12(VAR_18, VAR_18->last_type);
  if (FUNC_28(VAR_29))
   return VAR_29;
  goto finish_open;
 }

 if (!(VAR_22 & VAR_13)) {
  if (VAR_18->last.name[VAR_18->last.len])
   VAR_18->flags |= VAR_10 | VAR_9;

  VAR_29 = FUNC_20(VAR_18, &VAR_28, &VAR_27, &VAR_26);
  if (FUNC_19(VAR_29 > 0))
   goto finish_lookup;

  if (VAR_29 < 0)
   return VAR_29;

  FUNC_0(VAR_18->inode != VAR_21->d_inode);
  FUNC_0(VAR_18->flags & VAR_12);
 } else {






  VAR_29 = FUNC_4(VAR_18);
  if (VAR_29)
   return VAR_29;

  FUNC_3(VAR_18->name, VAR_21, VAR_0);

  if (FUNC_28(VAR_18->last.name[VAR_18->last.len]))
   return -VAR_3;
 }

 if (VAR_22 & (VAR_13 | VAR_16 | VAR_17 | VAR_15)) {
  VAR_29 = FUNC_25(VAR_18->path.mnt);
  if (!VAR_29)
   VAR_24 = 1;





 }
 if (VAR_22 & VAR_13)
  FUNC_15(VAR_21->d_inode);
 else
  FUNC_16(VAR_21->d_inode);
 VAR_29 = FUNC_21(VAR_18, &VAR_28, VAR_19, VAR_20, VAR_24);
 if (VAR_22 & VAR_13)
  FUNC_17(VAR_21->d_inode);
 else
  FUNC_18(VAR_21->d_inode);

 if (VAR_29)
  goto out;

 if (VAR_19->f_mode & VAR_7) {
  if ((VAR_19->f_mode & VAR_6) ||
      !FUNC_1(FUNC_10(VAR_19)->i_mode))
   VAR_23 = 0;

  FUNC_3(VAR_18->name, VAR_19->f_path.dentry, 0);
  goto opened;
 }

 if (VAR_19->f_mode & VAR_6) {

  VAR_22 &= ~VAR_16;
  VAR_23 = 0;
  VAR_25 = 0;
  FUNC_26(&VAR_28, VAR_18);
  goto finish_open_created;
 }






 if (VAR_24) {
  FUNC_24(VAR_18->path.mnt);
  VAR_24 = 0;
 }

 VAR_29 = FUNC_11(&VAR_28, VAR_18);
 if (FUNC_28(VAR_29 < 0))
  return VAR_29;

 if (FUNC_28(FUNC_8(VAR_28.dentry))) {
  FUNC_26(&VAR_28, VAR_18);
  return -VAR_4;
 }




 FUNC_3(VAR_18->name, VAR_28.dentry, 0);

 if (FUNC_28((VAR_22 & (VAR_14 | VAR_13)) == (VAR_14 | VAR_13))) {
  FUNC_26(&VAR_28, VAR_18);
  return -VAR_1;
 }

 VAR_26 = 0;
 VAR_27 = FUNC_5(VAR_28.dentry);
finish_lookup:
 VAR_29 = FUNC_27(VAR_18, &VAR_28, 0, VAR_27, VAR_26);
 if (FUNC_28(VAR_29))
  return VAR_29;
finish_open:

 VAR_29 = FUNC_4(VAR_18);
 if (VAR_29)
  return VAR_29;
 FUNC_3(VAR_18->name, VAR_18->path.dentry, 0);
 if (VAR_22 & VAR_13) {
  VAR_29 = -VAR_3;
  if (FUNC_7(VAR_18->path.dentry))
   goto out;
  VAR_29 = FUNC_22(VAR_21,
          FUNC_5(VAR_18->path.dentry));
  if (FUNC_28(VAR_29))
   goto out;
 }
 VAR_29 = -VAR_5;
 if ((VAR_18->flags & VAR_9) && !FUNC_6(VAR_18->path.dentry))
  goto out;
 if (!FUNC_9(VAR_18->path.dentry))
  VAR_23 = 0;

 if (VAR_23) {
  VAR_29 = FUNC_25(VAR_18->path.mnt);
  if (VAR_29)
   goto out;
  VAR_24 = 1;
 }
finish_open_created:
 VAR_29 = FUNC_23(&VAR_18->path, VAR_25, VAR_22);
 if (VAR_29)
  goto out;
 FUNC_0(VAR_19->f_mode & VAR_7);
 VAR_29 = FUNC_29(&VAR_18->path, VAR_19);
 if (VAR_29)
  goto out;
opened:
 VAR_29 = FUNC_14(VAR_19, VAR_20->acc_mode);
 if (!VAR_29 && VAR_23)
  VAR_29 = FUNC_13(VAR_19);
out:
 if (FUNC_28(VAR_29 > 0)) {
  FUNC_2(1);
  VAR_29 = -VAR_2;
 }
 if (VAR_24)
  FUNC_24(VAR_18->path.mnt);
 return VAR_29;
}
