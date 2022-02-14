
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs4_get_lease_time_args {int la_seq_args; } ;
struct compound_hdr {int minorversion; } ;


 int const VAR_0 ;
 int FUNC_0 (struct xdr_stream*,struct rpc_rqst*,struct compound_hdr*) ;
 int FUNC_1 (struct xdr_stream*,int const*,struct compound_hdr*) ;
 int FUNC_2 (struct compound_hdr*) ;
 int FUNC_3 (struct xdr_stream*,struct compound_hdr*) ;
 int FUNC_4 (struct xdr_stream*,int *,struct compound_hdr*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct rpc_rqst *VAR_1,
     struct xdr_stream *VAR_2,
     const void *VAR_3)
{
 const struct nfs4_get_lease_time_args *VAR_4 = VAR_3;
 struct compound_hdr VAR_5 = {
  .minorversion = FUNC_5(&VAR_4->la_seq_args),
 };
 const u32 VAR_6[3] = { VAR_0 };

 FUNC_0(VAR_2, VAR_1, &VAR_5);
 FUNC_4(VAR_2, &VAR_4->la_seq_args, &VAR_5);
 FUNC_3(VAR_2, &VAR_5);
 FUNC_1(VAR_2, VAR_6, &VAR_5);
 FUNC_2(&VAR_5);
}
