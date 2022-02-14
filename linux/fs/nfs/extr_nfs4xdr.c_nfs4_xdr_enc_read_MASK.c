
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct rpc_rqst {TYPE_1__ rq_rcv_buf; } ;
struct nfs_pgio_args {int count; int pgbase; int pages; int fh; int seq_args; } ;
struct compound_hdr {int replen; int minorversion; } ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,struct rpc_rqst*,struct compound_hdr*) ;
 int FUNC_1 (struct compound_hdr*) ;
 int FUNC_2 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_3 (struct xdr_stream*,struct nfs_pgio_args const*,struct compound_hdr*) ;
 int FUNC_4 (struct xdr_stream*,int *,struct compound_hdr*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rpc_rqst*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct rpc_rqst *VAR_1, struct xdr_stream *VAR_2,
         const void *VAR_3)
{
 const struct nfs_pgio_args *VAR_4 = VAR_3;
 struct compound_hdr VAR_5 = {
  .minorversion = FUNC_5(&VAR_4->seq_args),
 };

 FUNC_0(VAR_2, VAR_1, &VAR_5);
 FUNC_4(VAR_2, &VAR_4->seq_args, &VAR_5);
 FUNC_2(VAR_2, VAR_4->fh, &VAR_5);
 FUNC_3(VAR_2, VAR_4, &VAR_5);

 FUNC_6(VAR_1, VAR_4->pages, VAR_4->pgbase,
    VAR_4->count, VAR_5.replen);
 VAR_1->rq_rcv_buf.flags |= VAR_0;
 FUNC_1(&VAR_5);
}
