
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs4_link_arg {int bitmask; int name; int dir_fh; int fh; int seq_args; } ;
struct compound_hdr {int minorversion; } ;


 int FUNC_0 (struct xdr_stream*,struct rpc_rqst*,struct compound_hdr*) ;
 int FUNC_1 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_2 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_3 (struct compound_hdr*) ;
 int FUNC_4 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_5 (struct xdr_stream*,struct compound_hdr*) ;
 int FUNC_6 (struct xdr_stream*,struct compound_hdr*) ;
 int FUNC_7 (struct xdr_stream*,int *,struct compound_hdr*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct rpc_rqst *VAR_0, struct xdr_stream *VAR_1,
         const void *VAR_2)
{
 const struct nfs4_link_arg *VAR_3 = VAR_2;
 struct compound_hdr VAR_4 = {
  .minorversion = FUNC_8(&VAR_3->seq_args),
 };

 FUNC_0(VAR_1, VAR_0, &VAR_4);
 FUNC_7(VAR_1, &VAR_3->seq_args, &VAR_4);
 FUNC_4(VAR_1, VAR_3->fh, &VAR_4);
 FUNC_6(VAR_1, &VAR_4);
 FUNC_4(VAR_1, VAR_3->dir_fh, &VAR_4);
 FUNC_2(VAR_1, VAR_3->name, &VAR_4);
 FUNC_5(VAR_1, &VAR_4);
 FUNC_1(VAR_1, VAR_3->bitmask, &VAR_4);
 FUNC_3(&VAR_4);
}
