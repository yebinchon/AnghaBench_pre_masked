
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs_sattrargs {int sattr; int fh; } ;


 int FUNC_0 (struct xdr_stream*,int ) ;
 int FUNC_1 (struct xdr_stream*,int ,int ) ;
 int FUNC_2 (struct rpc_rqst*) ;

__attribute__((used)) static void FUNC_3(struct rpc_rqst *VAR_0,
       struct xdr_stream *VAR_1,
       const void *VAR_2)
{
 const struct nfs_sattrargs *VAR_3 = VAR_2;

 FUNC_0(VAR_1, VAR_3->fh);
 FUNC_1(VAR_1, VAR_3->sattr, FUNC_2(VAR_0));
}
