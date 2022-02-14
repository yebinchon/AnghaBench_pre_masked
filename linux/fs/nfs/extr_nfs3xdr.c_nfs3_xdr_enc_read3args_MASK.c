
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct rpc_rqst {TYPE_1__ rq_rcv_buf; } ;
struct nfs_pgio_args {int replen; int count; int pgbase; int pages; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xdr_stream*,struct nfs_pgio_args const*) ;
 int FUNC_1 (struct rpc_rqst*,int ,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct rpc_rqst *VAR_2,
       struct xdr_stream *VAR_3,
       const void *VAR_4)
{
 const struct nfs_pgio_args *VAR_5 = VAR_4;
 unsigned int VAR_6 = VAR_5->replen ? VAR_5->replen : VAR_0;

 FUNC_0(VAR_3, VAR_5);
 FUNC_1(VAR_2, VAR_5->pages, VAR_5->pgbase,
    VAR_5->count, VAR_6);
 VAR_2->rq_rcv_buf.flags |= VAR_1;
}
