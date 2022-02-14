
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct nfs_lock_context {TYPE_1__* open_context; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct rpc_task*,struct nfs_lock_context*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static bool FUNC_2(struct rpc_task *VAR_1, void *VAR_2)
{
 struct nfs_lock_context *VAR_3 = VAR_2;
 if (VAR_3 && FUNC_1(VAR_0, &VAR_3->open_context->flags))
  return FUNC_0(VAR_1, VAR_3);
 return 0;

}
