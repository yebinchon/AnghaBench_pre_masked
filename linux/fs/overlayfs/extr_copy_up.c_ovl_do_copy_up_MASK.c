
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct ovl_fs {scalar_t__ tmpfile; } ;
struct TYPE_15__ {int name; } ;
struct TYPE_12__ {int nlink; int mode; } ;
struct TYPE_11__ {int dentry; } ;
struct ovl_copy_up_ctx {int indexed; int origin; TYPE_8__ destname; TYPE_3__* dentry; int pstat; TYPE_3__* destdir; TYPE_2__ stat; int parent; TYPE_1__ lowerpath; void* workdir; } ;
struct inode {int dummy; } ;
struct TYPE_14__ {struct ovl_fs* s_fs_info; } ;
struct TYPE_13__ {TYPE_7__* d_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 struct inode* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ovl_copy_up_ctx*) ;
 int FUNC_8 (struct ovl_copy_up_ctx*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int ,TYPE_8__*) ;
 void* FUNC_11 (TYPE_7__*) ;
 scalar_t__ FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int ,struct inode*) ;
 int FUNC_14 (int ,TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_17(struct ovl_copy_up_ctx *VAR_2)
{
 int VAR_3;
 struct ovl_fs *VAR_4 = VAR_2->dentry->d_sb->s_fs_info;
 bool VAR_5 = 0;







 if (FUNC_12(VAR_2->dentry)) {
  VAR_2->indexed = 1;
  if (FUNC_0(VAR_2->stat.mode))
   VAR_2->workdir = FUNC_11(VAR_2->dentry->d_sb);
  else
   VAR_5 = 1;
 }

 if (FUNC_0(VAR_2->stat.mode) || VAR_2->stat.nlink == 1 || VAR_5)
  VAR_2->origin = 1;

 if (VAR_5) {
  VAR_2->destdir = FUNC_11(VAR_2->dentry->d_sb);
  VAR_3 = FUNC_10(VAR_2->lowerpath.dentry, &VAR_2->destname);
  if (VAR_3)
   return VAR_3;
 } else if (FUNC_2(!VAR_2->parent)) {

  return -VAR_0;
 } else {




  VAR_3 = FUNC_14(VAR_2->parent, VAR_2->destdir);
  if (VAR_3)
   return VAR_3;
 }


 if (FUNC_1(VAR_2->stat.mode) && VAR_4->tmpfile)
  VAR_3 = FUNC_7(VAR_2);
 else
  VAR_3 = FUNC_8(VAR_2);
 if (VAR_3)
  goto out;

 if (VAR_2->indexed)
  FUNC_13(VAR_1, FUNC_3(VAR_2->dentry));

 if (VAR_5) {

  VAR_3 = FUNC_15(VAR_2->dentry);
 } else {
  struct inode *VAR_6 = FUNC_3(VAR_2->destdir);


  FUNC_4(VAR_6);
  FUNC_16(VAR_2->destdir, &VAR_2->pstat);
  FUNC_5(VAR_6);

  FUNC_9(VAR_2->dentry);
 }

out:
 if (VAR_5)
  FUNC_6(VAR_2->destname.name);
 return VAR_3;
}
