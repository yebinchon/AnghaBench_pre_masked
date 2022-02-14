
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs_symlinkargs {int sattr; int pathlen; int pages; int fromlen; int fromname; int fromfh; } ;


 int FUNC_0 (struct xdr_stream*,int ,int ,int ) ;
 int FUNC_1 (struct xdr_stream*,int ,int ) ;
 int FUNC_2 (struct xdr_stream*,int ,int ) ;
 int FUNC_3 (struct rpc_rqst*) ;

__attribute__((used)) static void FUNC_4(struct rpc_rqst *VAR_0,
         struct xdr_stream *VAR_1,
         const void *VAR_2)
{
 const struct nfs_symlinkargs *VAR_3 = VAR_2;

 FUNC_0(VAR_1, VAR_3->fromfh, VAR_3->fromname, VAR_3->fromlen);
 FUNC_1(VAR_1, VAR_3->pages, VAR_3->pathlen);
 FUNC_2(VAR_1, VAR_3->sattr, FUNC_3(VAR_0));
}
