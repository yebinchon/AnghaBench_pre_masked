
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_message {int * rpc_proc; } ;
struct TYPE_4__ {int seq_res; } ;
struct TYPE_3__ {int seq_args; } ;
struct nfs_pgio_header {TYPE_2__ res; TYPE_1__ args; scalar_t__ pgio_done_cb; int timestamp; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int ) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_1(struct nfs_pgio_header *VAR_4,
     struct rpc_message *VAR_5)
{
 VAR_4->timestamp = VAR_1;
 if (!VAR_4->pgio_done_cb)
  VAR_4->pgio_done_cb = VAR_3;
 VAR_5->rpc_proc = &VAR_2[VAR_0];
 FUNC_0(&VAR_4->args.seq_args, &VAR_4->res.seq_res, 0, 0);
}
