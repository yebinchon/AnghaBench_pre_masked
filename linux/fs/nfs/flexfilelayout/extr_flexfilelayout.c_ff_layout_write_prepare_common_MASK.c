
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct TYPE_4__ {TYPE_1__* context; } ;
struct nfs_pgio_header {TYPE_2__ args; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rpc_task*,struct nfs_pgio_header*) ;
 int FUNC_1 (struct rpc_task*,int) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct rpc_task *VAR_2,
       struct nfs_pgio_header *VAR_3)
{
 if (FUNC_3(FUNC_2(VAR_1, &VAR_3->args.context->flags))) {
  FUNC_1(VAR_2, -VAR_0);
  return -VAR_0;
 }

 FUNC_0(VAR_2, VAR_3);
 return 0;
}
