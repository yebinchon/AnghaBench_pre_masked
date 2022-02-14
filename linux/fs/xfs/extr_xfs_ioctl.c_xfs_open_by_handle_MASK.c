
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int oflags; } ;
typedef TYPE_2__ xfs_fsop_handlereq_t ;
struct path {struct file* dentry; int mnt; } ;
struct inode {int i_mode; } ;
struct TYPE_5__ {int mnt; } ;
struct file {int f_mode; int f_flags; TYPE_1__ f_path; } ;
struct dentry {int f_mode; int f_flags; TYPE_1__ f_path; } ;
struct cred {int dummy; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct file*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct file*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct cred* FUNC_8 () ;
 struct inode* FUNC_9 (struct file*) ;
 struct file* FUNC_10 (struct path*,int,struct cred const*) ;
 int FUNC_11 (struct file*) ;
 int FUNC_12 (int,struct file*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int) ;
 struct file* FUNC_15 (struct file*,TYPE_2__*) ;

int
FUNC_16(
 struct file *VAR_9,
 xfs_fsop_handlereq_t *VAR_10)
{
 const struct cred *VAR_11 = FUNC_8();
 int VAR_12;
 int VAR_13;
 int VAR_14;
 struct file *VAR_15;
 struct inode *VAR_16;
 struct dentry *VAR_17;
 fmode_t VAR_18;
 struct path VAR_19;

 if (!FUNC_7(VAR_0))
  return -VAR_2;

 VAR_17 = FUNC_15(VAR_9, VAR_10);
 if (FUNC_1(VAR_17))
  return FUNC_4(VAR_17);
 VAR_16 = FUNC_9(VAR_17);


 if (!(FUNC_6(VAR_16->i_mode) || FUNC_5(VAR_16->i_mode))) {
  VAR_12 = -VAR_2;
  goto out_dput;
 }


 VAR_10->oflags |= VAR_6;


 VAR_14 = VAR_10->oflags;
 VAR_18 = FUNC_3(VAR_14);
 if ((!(VAR_14 & VAR_5) || (VAR_14 & VAR_8)) &&
     (VAR_18 & VAR_4) && FUNC_0(VAR_16)) {
  VAR_12 = -VAR_2;
  goto out_dput;
 }

 if ((VAR_18 & VAR_4) && FUNC_2(VAR_16)) {
  VAR_12 = -VAR_2;
  goto out_dput;
 }


 if (FUNC_5(VAR_16->i_mode) && (VAR_18 & VAR_4)) {
  VAR_12 = -VAR_1;
  goto out_dput;
 }

 VAR_13 = FUNC_13(0);
 if (VAR_13 < 0) {
  VAR_12 = VAR_13;
  goto out_dput;
 }

 VAR_19.mnt = VAR_9->f_path.mnt;
 VAR_19.dentry = VAR_17;
 VAR_15 = FUNC_10(&VAR_19, VAR_10->oflags, VAR_11);
 FUNC_11(VAR_17);
 if (FUNC_1(VAR_15)) {
  FUNC_14(VAR_13);
  return FUNC_4(VAR_15);
 }

 if (FUNC_6(VAR_16->i_mode)) {
  VAR_15->f_flags |= VAR_7;
  VAR_15->f_mode |= VAR_3;
 }

 FUNC_12(VAR_13, VAR_15);
 return VAR_13;

 out_dput:
 FUNC_11(VAR_17);
 return VAR_12;
}
