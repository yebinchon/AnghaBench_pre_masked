
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_message {int * rpc_proc; } ;
struct TYPE_3__ {int replen; } ;
struct nfs_pgio_header {int inode; TYPE_1__ args; } ;
struct TYPE_4__ {int read_hdrsize; } ;


 size_t VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_1(struct nfs_pgio_header *VAR_2,
     struct rpc_message *VAR_3)
{
 VAR_3->rpc_proc = &VAR_1[VAR_0];
 VAR_2->args.replen = FUNC_0(VAR_2->inode)->read_hdrsize;
}
