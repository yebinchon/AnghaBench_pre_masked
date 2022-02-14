
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs4_readlink {int pglen; int pgbase; int pages; int fh; int seq_args; } ;
struct compound_hdr {int replen; int minorversion; } ;


 int FUNC_0 (struct xdr_stream*,struct rpc_rqst*,struct compound_hdr*) ;
 int FUNC_1 (struct compound_hdr*) ;
 int FUNC_2 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_3 (struct xdr_stream*,struct nfs4_readlink const*,struct rpc_rqst*,struct compound_hdr*) ;
 int FUNC_4 (struct xdr_stream*,int *,struct compound_hdr*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rpc_rqst*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct rpc_rqst *VAR_0, struct xdr_stream *VAR_1,
      const void *VAR_2)
{
 const struct nfs4_readlink *VAR_3 = VAR_2;
 struct compound_hdr VAR_4 = {
  .minorversion = FUNC_5(&VAR_3->seq_args),
 };

 FUNC_0(VAR_1, VAR_0, &VAR_4);
 FUNC_4(VAR_1, &VAR_3->seq_args, &VAR_4);
 FUNC_2(VAR_1, VAR_3->fh, &VAR_4);
 FUNC_3(VAR_1, VAR_3, VAR_0, &VAR_4);

 FUNC_6(VAR_0, VAR_3->pages, VAR_3->pgbase,
    VAR_3->pglen, VAR_4.replen);
 FUNC_1(&VAR_4);
}
