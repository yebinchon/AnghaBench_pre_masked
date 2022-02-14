
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int pos; int actor; } ;
struct ecryptfs_getdents_callback {int entries_written; scalar_t__ filldir_called; TYPE_1__ ctx; int sb; struct dir_context* caller; } ;
struct dir_context {int pos; } ;


 struct file* FUNC_0 (struct file*) ;
 int VAR_0 ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (struct inode*,struct inode*) ;
 int FUNC_3 (struct file*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, struct dir_context *VAR_2)
{
 int VAR_3;
 struct file *VAR_4;
 struct inode *VAR_5 = FUNC_1(VAR_1);
 struct ecryptfs_getdents_callback VAR_6 = {
  .ctx.actor = VAR_0,
  .caller = VAR_2,
  .sb = VAR_5->i_sb,
 };
 VAR_4 = FUNC_0(VAR_1);
 VAR_3 = FUNC_3(VAR_4, &VAR_6.ctx);
 VAR_2->pos = VAR_6.ctx.pos;
 if (VAR_3 < 0)
  goto out;
 if (VAR_6.filldir_called && !VAR_6.entries_written)
  goto out;
 if (VAR_3 >= 0)
  FUNC_2(VAR_5,
     FUNC_1(VAR_4));
out:
 return VAR_3;
}
