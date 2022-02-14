
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path {struct dentry* dentry; } ;
struct TYPE_4__ {int pos; int actor; } ;
struct ovl_readdir_translate {TYPE_2__ ctx; int cache; int parent_ino; int fsid; scalar_t__ xinobits; struct dir_context* orig_ctx; } ;
struct ovl_layer {int fsid; } ;
struct ovl_dir_file {int realfile; } ;
struct kstat {scalar_t__ dev; int ino; } ;
struct file {struct path f_path; struct ovl_dir_file* private_data; } ;
struct dir_context {int pos; } ;
struct dentry {TYPE_1__* d_sb; struct dentry* d_parent; } ;
struct TYPE_3__ {scalar_t__ s_dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (struct path*) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (struct file*) ;
 struct ovl_layer* FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct dentry*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct path*,struct kstat*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_2, struct dir_context *VAR_3)
{
 int VAR_4;
 struct ovl_dir_file *VAR_5 = VAR_2->private_data;
 struct dentry *VAR_6 = VAR_2->f_path.dentry;
 struct ovl_layer *VAR_7 = FUNC_7(VAR_6);
 struct ovl_readdir_translate VAR_8 = {
  .ctx.actor = VAR_1,
  .orig_ctx = VAR_3,
  .xinobits = FUNC_9(VAR_6->d_sb),
 };

 if (VAR_8.xinobits && VAR_7)
  VAR_8.fsid = VAR_7->fsid;

 if (FUNC_1(FUNC_8(VAR_6->d_parent))) {
  struct kstat VAR_9;
  struct path VAR_10 = VAR_2->f_path;

  VAR_10.dentry = VAR_6->d_parent;
  VAR_4 = FUNC_10(&VAR_10, &VAR_9, VAR_0, 0);
  if (VAR_4)
   return VAR_4;

  FUNC_3(VAR_6->d_sb->s_dev != VAR_9.dev);
  VAR_8.parent_ino = VAR_9.ino;
 }

 if (FUNC_6(VAR_2)) {
  VAR_8.cache = FUNC_5(&VAR_2->f_path);
  if (FUNC_0(VAR_8.cache))
   return FUNC_2(VAR_8.cache);
 }

 VAR_4 = FUNC_4(VAR_5->realfile, &VAR_8.ctx);
 VAR_3->pos = VAR_8.ctx.pos;

 return VAR_4;
}
