
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct path {struct dentry* dentry; } ;
struct TYPE_5__ {int size; int mode; } ;
struct TYPE_4__ {int dentry; } ;
struct ovl_copy_up_ctx {TYPE_2__ stat; scalar_t__ metacopy; int dentry; TYPE_1__ lowerpath; scalar_t__ origin; } ;
struct dentry {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct dentry*,int ,int *,int ,int ) ;
 int FUNC_5 (struct path*,struct path*,int ) ;
 int FUNC_6 (int ,struct dentry*) ;
 int FUNC_7 (int ,struct path*) ;
 int FUNC_8 (int ,struct path*) ;
 int FUNC_9 (struct dentry*,TYPE_2__*) ;
 int FUNC_10 (int ,int ,struct dentry*) ;
 int FUNC_11 (struct dentry*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_12(struct ovl_copy_up_ctx *VAR_3, struct dentry *VAR_4)
{
 int VAR_5;





 if (FUNC_0(VAR_3->stat.mode) && !VAR_3->metacopy) {
  struct path VAR_6, VAR_7;

  FUNC_8(VAR_3->dentry, &VAR_6);
  if (FUNC_1(VAR_6.dentry != ((void*)0)))
   return -VAR_0;
  VAR_6.dentry = VAR_4;

  FUNC_7(VAR_3->dentry, &VAR_7);
  VAR_5 = FUNC_5(&VAR_7, &VAR_6, VAR_3->stat.size);
  if (VAR_5)
   return VAR_5;
 }

 VAR_5 = FUNC_6(VAR_3->lowerpath.dentry, VAR_4);
 if (VAR_5)
  return VAR_5;
 if (VAR_3->origin) {
  VAR_5 = FUNC_10(VAR_3->dentry, VAR_3->lowerpath.dentry, VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 if (VAR_3->metacopy) {
  VAR_5 = FUNC_4(VAR_3->dentry, VAR_4, VAR_2,
      ((void*)0), 0, -VAR_1);
  if (VAR_5)
   return VAR_5;
 }

 FUNC_2(VAR_4->d_inode);
 if (VAR_3->metacopy)
  VAR_5 = FUNC_11(VAR_4, &VAR_3->stat);
 if (!VAR_5)
  VAR_5 = FUNC_9(VAR_4, &VAR_3->stat);
 FUNC_3(VAR_4->d_inode);

 return VAR_5;
}
