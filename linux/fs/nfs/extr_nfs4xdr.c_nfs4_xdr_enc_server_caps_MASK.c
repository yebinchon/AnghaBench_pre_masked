
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs4_server_caps_arg {int fhandle; int seq_args; int * bitmask; } ;
struct compound_hdr {int minorversion; } ;


 int FUNC_0 (struct xdr_stream*,struct rpc_rqst*,struct compound_hdr*) ;
 int FUNC_1 (struct xdr_stream*,int const*,int *,int,struct compound_hdr*) ;
 int FUNC_2 (struct compound_hdr*) ;
 int FUNC_3 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_4 (struct xdr_stream*,int *,struct compound_hdr*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct rpc_rqst *VAR_0,
         struct xdr_stream *VAR_1,
         const void *VAR_2)
{
 const struct nfs4_server_caps_arg *VAR_3 = VAR_2;
 const u32 *VAR_4 = VAR_3->bitmask;
 struct compound_hdr VAR_5 = {
  .minorversion = FUNC_5(&VAR_3->seq_args),
 };

 FUNC_0(VAR_1, VAR_0, &VAR_5);
 FUNC_4(VAR_1, &VAR_3->seq_args, &VAR_5);
 FUNC_3(VAR_1, VAR_3->fhandle, &VAR_5);
 FUNC_1(VAR_1, VAR_4, ((void*)0), 3, &VAR_5);
 FUNC_2(&VAR_5);
}
