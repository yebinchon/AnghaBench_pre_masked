
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task_setup {int priority; int rpc_client; } ;
struct rpc_message {int dummy; } ;
struct nfs_rpc_ops {int (* write_setup ) (struct nfs_pgio_header*,struct rpc_message*,int *) ;} ;
struct TYPE_2__ {int stable; } ;
struct nfs_pgio_header {TYPE_1__ args; int good_bytes; int io_start; int inode; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nfs_pgio_header*,struct rpc_message*,int *) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct nfs_pgio_header *VAR_0,
          struct rpc_message *VAR_1,
          const struct nfs_rpc_ops *VAR_2,
          struct rpc_task_setup *VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_0(VAR_4);

 VAR_3->priority = VAR_5;
 VAR_2->write_setup(VAR_0, VAR_1, &VAR_3->rpc_client);
 FUNC_2(VAR_0->inode, VAR_0->io_start, VAR_0->good_bytes,
     VAR_0->args.stable);
}
