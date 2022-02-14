
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mqueue_fs_context {TYPE_2__* ipc_ns; } ;
struct fs_context {int * ops; struct mqueue_fs_context* fs_private; int user_ns; } ;
struct TYPE_6__ {TYPE_1__* nsproxy; } ;
struct TYPE_5__ {int user_ns; } ;
struct TYPE_4__ {int ipc_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct mqueue_fs_context* FUNC_2 (int,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct fs_context *VAR_4)
{
 struct mqueue_fs_context *VAR_5;

 VAR_5 = FUNC_2(sizeof(struct mqueue_fs_context), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->ipc_ns = FUNC_0(VAR_2->nsproxy->ipc_ns);
 FUNC_3(VAR_4->user_ns);
 VAR_4->user_ns = FUNC_1(VAR_5->ipc_ns->user_ns);
 VAR_4->fs_private = VAR_5;
 VAR_4->ops = &VAR_3;
 return 0;
}
