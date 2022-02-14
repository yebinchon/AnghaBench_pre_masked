
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct mqueue_fs_context {TYPE_1__* ipc_ns; } ;
struct ipc_namespace {int dummy; } ;
struct fs_context {int user_ns; struct mqueue_fs_context* fs_private; } ;
struct TYPE_3__ {int user_ns; } ;


 struct vfsmount* FUNC_0 (struct fs_context*) ;
 scalar_t__ FUNC_1 (struct fs_context*) ;
 int VAR_0 ;
 struct vfsmount* FUNC_2 (struct fs_context*) ;
 struct fs_context* FUNC_3 (int *,int ) ;
 TYPE_1__* FUNC_4 (struct ipc_namespace*) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (struct fs_context*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static struct vfsmount *FUNC_9(struct ipc_namespace *VAR_2)
{
 struct mqueue_fs_context *VAR_3;
 struct fs_context *VAR_4;
 struct vfsmount *VAR_5;

 VAR_4 = FUNC_3(&VAR_1, VAR_0);
 if (FUNC_1(VAR_4))
  return FUNC_0(VAR_4);

 VAR_3 = VAR_4->fs_private;
 FUNC_7(VAR_3->ipc_ns);
 VAR_3->ipc_ns = FUNC_4(VAR_2);
 FUNC_8(VAR_4->user_ns);
 VAR_4->user_ns = FUNC_5(VAR_3->ipc_ns->user_ns);

 VAR_5 = FUNC_2(VAR_4);
 FUNC_6(VAR_4);
 return VAR_5;
}
