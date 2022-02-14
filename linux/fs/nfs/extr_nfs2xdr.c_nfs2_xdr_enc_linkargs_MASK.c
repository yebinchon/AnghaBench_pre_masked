
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs_linkargs {int tolen; int toname; int tofh; int fromfh; } ;


 int FUNC_0 (struct xdr_stream*,int ,int ,int ) ;
 int FUNC_1 (struct xdr_stream*,int ) ;

__attribute__((used)) static void FUNC_2(struct rpc_rqst *VAR_0,
      struct xdr_stream *VAR_1,
      const void *VAR_2)
{
 const struct nfs_linkargs *VAR_3 = VAR_2;

 FUNC_1(VAR_1, VAR_3->fromfh);
 FUNC_0(VAR_1, VAR_3->tofh, VAR_3->toname, VAR_3->tolen);
}
