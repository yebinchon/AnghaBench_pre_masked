
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* dentry; TYPE_2__* mnt; } ;
struct nameidata {TYPE_3__ path; int inode; int root; } ;
struct TYPE_8__ {TYPE_1__* mnt_root; } ;
struct TYPE_7__ {int d_inode; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(struct nameidata *VAR_0)
{
 while(1) {
  if (FUNC_2(&VAR_0->path, &VAR_0->root))
   break;
  if (VAR_0->path.dentry != VAR_0->path.mnt->mnt_root) {
   int VAR_1 = FUNC_3(&VAR_0->path);
   if (VAR_1)
    return VAR_1;
   break;
  }
  if (!FUNC_1(&VAR_0->path))
   break;
 }
 FUNC_0(&VAR_0->path);
 VAR_0->inode = VAR_0->path.dentry->d_inode;
 return 0;
}
