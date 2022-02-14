
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct fs_context {TYPE_2__* root; } ;
struct TYPE_4__ {TYPE_1__* d_sb; } ;
struct TYPE_3__ {int s_umount; } ;


 struct vfsmount* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct vfsmount* FUNC_2 (struct fs_context*) ;
 int FUNC_3 (struct fs_context*) ;

struct vfsmount *FUNC_4(struct fs_context *VAR_0)
{
 int VAR_1 = FUNC_3(VAR_0);
 if (!VAR_1) {
  FUNC_1(&VAR_0->root->d_sb->s_umount);
  return FUNC_2(VAR_0);
 }
 return FUNC_0(VAR_1);
}
