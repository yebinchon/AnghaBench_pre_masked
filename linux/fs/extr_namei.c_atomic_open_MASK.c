
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int umode_t ;
struct path {int mnt; struct dentry* dentry; } ;
struct open_flags {int acc_mode; } ;
struct TYPE_7__ {int mnt; TYPE_1__* dentry; } ;
struct nameidata {int flags; TYPE_3__ path; } ;
struct inode {TYPE_2__* i_op; } ;
struct TYPE_8__ {struct dentry* dentry; int mnt; } ;
struct file {int f_mode; TYPE_4__ f_path; } ;
struct dentry {int dummy; } ;
struct TYPE_6__ {int (* atomic_open ) (struct inode*,struct dentry*,struct file*,int ,int ) ;} ;
struct TYPE_5__ {struct inode* d_inode; } ;


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
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*,struct dentry*) ;
 int FUNC_5 (TYPE_4__*,int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct inode*,struct dentry*,struct file*,int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct nameidata *VAR_10, struct dentry *VAR_11,
   struct path *VAR_12, struct file *VAR_13,
   const struct open_flags *VAR_14,
   int VAR_15, umode_t VAR_16)
{
 struct dentry *const VAR_17 = (void *) -1UL;
 struct inode *VAR_18 = VAR_10->path.dentry->d_inode;
 int VAR_19;

 if (!(~VAR_15 & (VAR_8 | VAR_6)))
  VAR_15 &= ~VAR_9;

 if (VAR_10->flags & VAR_5)
  VAR_15 |= VAR_7;

 VAR_13->f_path.dentry = VAR_17;
 VAR_13->f_path.mnt = VAR_10->path.mnt;
 VAR_19 = VAR_18->i_op->atomic_open(VAR_18, VAR_11, VAR_13,
           FUNC_6(VAR_15), VAR_16);
 FUNC_2(VAR_11);
 if (!VAR_19) {
  if (VAR_13->f_mode & VAR_4) {




   int VAR_20 = VAR_14->acc_mode;
   if (VAR_13->f_mode & VAR_3) {
    FUNC_0(!(VAR_15 & VAR_6));
    FUNC_4(VAR_18, VAR_11);
    VAR_20 = 0;
   }
   VAR_19 = FUNC_5(&VAR_13->f_path, VAR_20, VAR_15);
   if (FUNC_0(VAR_19 > 0))
    VAR_19 = -VAR_0;
  } else if (FUNC_0(VAR_13->f_path.dentry == VAR_17)) {
   VAR_19 = -VAR_1;
  } else {
   if (VAR_13->f_path.dentry) {
    FUNC_3(VAR_11);
    VAR_11 = VAR_13->f_path.dentry;
   }
   if (VAR_13->f_mode & VAR_3)
    FUNC_4(VAR_18, VAR_11);
   if (FUNC_8(FUNC_1(VAR_11))) {
    VAR_19 = -VAR_2;
   } else {
    VAR_12->dentry = VAR_11;
    VAR_12->mnt = VAR_10->path.mnt;
    return 0;
   }
  }
 }
 FUNC_3(VAR_11);
 return VAR_19;
}
