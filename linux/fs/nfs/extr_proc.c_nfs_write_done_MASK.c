
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {scalar_t__ tk_status; } ;
struct TYPE_4__ {int count; } ;
struct TYPE_3__ {int count; } ;
struct nfs_pgio_header {TYPE_2__ args; TYPE_1__ res; } ;


 int FUNC_0 (struct nfs_pgio_header*) ;

__attribute__((used)) static int FUNC_1(struct rpc_task *VAR_0, struct nfs_pgio_header *VAR_1)
{
 if (VAR_0->tk_status >= 0) {
  VAR_1->res.count = VAR_1->args.count;
  FUNC_0(VAR_1);
 }
 return 0;
}
