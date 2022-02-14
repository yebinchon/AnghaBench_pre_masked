
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs4_statfs_arg {int bitmask; int fh; int seq_args; } ;
struct compound_hdr {int minorversion; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct xdr_stream*,struct rpc_rqst*,struct compound_hdr*) ;
 int FUNC_2 (struct xdr_stream*,int ,int ,int ,struct compound_hdr*) ;
 int FUNC_3 (struct compound_hdr*) ;
 int FUNC_4 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_5 (struct xdr_stream*,int *,struct compound_hdr*) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct rpc_rqst *VAR_1, struct xdr_stream *VAR_2,
    const void *VAR_3)
{
 const struct nfs4_statfs_arg *VAR_4 = VAR_3;
 struct compound_hdr VAR_5 = {
  .minorversion = FUNC_6(&VAR_4->seq_args),
 };

 FUNC_1(VAR_2, VAR_1, &VAR_5);
 FUNC_5(VAR_2, &VAR_4->seq_args, &VAR_5);
 FUNC_4(VAR_2, VAR_4->fh, &VAR_5);
 FUNC_2(VAR_2, VAR_0, VAR_4->bitmask,
   FUNC_0(VAR_0), &VAR_5);
 FUNC_3(&VAR_5);
}
