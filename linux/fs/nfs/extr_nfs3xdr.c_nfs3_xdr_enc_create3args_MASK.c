
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs3_createargs {int len; int name; int fh; } ;


 int FUNC_0 (struct xdr_stream*,struct nfs3_createargs const*,int ) ;
 int FUNC_1 (struct xdr_stream*,int ,int ,int ) ;
 int FUNC_2 (struct rpc_rqst*) ;

__attribute__((used)) static void FUNC_3(struct rpc_rqst *VAR_0,
         struct xdr_stream *VAR_1,
         const void *VAR_2)
{
 const struct nfs3_createargs *VAR_3 = VAR_2;

 FUNC_1(VAR_1, VAR_3->fh, VAR_3->name, VAR_3->len);
 FUNC_0(VAR_1, VAR_3, FUNC_2(VAR_0));
}
