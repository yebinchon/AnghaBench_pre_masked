
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path {struct dentry* dentry; int mnt; } ;
struct kstat {int ino; } ;
struct inode {int i_fop; int i_mode; } ;
struct TYPE_4__ {int actor; } ;
struct getdents_callback {char* name; int sequence; scalar_t__ found; TYPE_2__ ctx; int ino; } ;
struct file {TYPE_1__* f_op; } ;
struct dentry {struct inode* d_inode; } ;
struct cred {int dummy; } ;
struct TYPE_3__ {int iterate_shared; int iterate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_4 ;
 int FUNC_1 (struct file*) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 struct cred* FUNC_3 () ;
 struct file* FUNC_4 (struct path const*,int ,struct cred const*) ;
 int VAR_6 ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (struct file*,TYPE_2__*) ;
 int FUNC_7 (struct path*,struct kstat*,int ,int ) ;

__attribute__((used)) static int FUNC_8(const struct path *VAR_7, char *VAR_8, struct dentry *VAR_9)
{
 const struct cred *VAR_10 = FUNC_3();
 struct inode *VAR_11 = VAR_7->dentry->d_inode;
 int VAR_12;
 struct file *VAR_13;
 struct kstat VAR_14;
 struct path VAR_15 = {
  .mnt = VAR_7->mnt,
  .dentry = VAR_9,
 };
 struct getdents_callback VAR_16 = {
  .ctx.actor = VAR_6,
  .name = VAR_8,
 };

 VAR_12 = -VAR_3;
 if (!VAR_11 || !FUNC_2(VAR_11->i_mode))
  goto out;
 VAR_12 = -VAR_1;
 if (!VAR_11->i_fop)
  goto out;






 VAR_12 = FUNC_7(&VAR_15, &VAR_14,
      VAR_5, VAR_0);
 if (VAR_12)
  return VAR_12;
 VAR_16.ino = VAR_14.ino;



 VAR_13 = FUNC_4(VAR_7, VAR_4, VAR_10);
 VAR_12 = FUNC_1(VAR_13);
 if (FUNC_0(VAR_13))
  goto out;

 VAR_12 = -VAR_1;
 if (!VAR_13->f_op->iterate && !VAR_13->f_op->iterate_shared)
  goto out_close;

 VAR_16.sequence = 0;
 while (1) {
  int VAR_17 = VAR_16.sequence;

  VAR_12 = FUNC_6(VAR_13, &VAR_16.ctx);
  if (VAR_16.found) {
   VAR_12 = 0;
   break;
  }

  if (VAR_12 < 0)
   break;

  VAR_12 = -VAR_2;
  if (VAR_17 == VAR_16.sequence)
   break;
 }

out_close:
 FUNC_5(VAR_13);
out:
 return VAR_12;
}
