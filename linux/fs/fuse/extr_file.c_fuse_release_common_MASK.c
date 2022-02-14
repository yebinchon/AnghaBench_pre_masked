
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock_owner; int release_flags; } ;
struct fuse_release_args {int inode; TYPE_1__ inarg; } ;
struct fuse_inode {int dummy; } ;
struct fuse_file {TYPE_2__* fc; scalar_t__ flock; struct fuse_release_args* release_args; } ;
struct file {int f_flags; struct fuse_file* private_data; } ;
typedef int fl_owner_t ;
struct TYPE_4__ {int destroy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct fuse_file*,int ,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (struct fuse_inode*,struct fuse_file*,int ,int) ;
 struct fuse_inode* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct file *VAR_3, bool VAR_4)
{
 struct fuse_inode *VAR_5 = FUNC_4(FUNC_0(VAR_3));
 struct fuse_file *VAR_6 = VAR_3->private_data;
 struct fuse_release_args *VAR_7 = VAR_6->release_args;
 int VAR_8 = VAR_4 ? VAR_1 : VAR_0;

 FUNC_3(VAR_5, VAR_6, VAR_3->f_flags, VAR_8);

 if (VAR_6->flock) {
  VAR_7->inarg.release_flags |= VAR_2;
  VAR_7->inarg.lock_owner = FUNC_2(VAR_6->fc,
         (fl_owner_t) VAR_3);
 }

 VAR_7->inode = FUNC_5(FUNC_0(VAR_3));
 FUNC_1(VAR_6, VAR_6->fc->destroy, VAR_4);
}
