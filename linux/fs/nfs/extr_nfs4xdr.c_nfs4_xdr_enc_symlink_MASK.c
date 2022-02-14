
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs4_create_arg {int dummy; } ;


 int FUNC_0 (struct rpc_rqst*,struct xdr_stream*,struct nfs4_create_arg const*) ;

__attribute__((used)) static void FUNC_1(struct rpc_rqst *VAR_0, struct xdr_stream *VAR_1,
     const void *VAR_2)
{
 const struct nfs4_create_arg *VAR_3 = VAR_2;

 FUNC_0(VAR_0, VAR_1, VAR_3);
}
