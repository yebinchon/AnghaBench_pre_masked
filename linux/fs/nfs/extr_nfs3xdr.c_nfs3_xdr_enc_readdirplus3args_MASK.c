
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs3_readdirargs {int count; int pages; } ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,struct nfs3_readdirargs const*) ;
 int FUNC_1 (struct rpc_rqst*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct rpc_rqst *VAR_1,
       struct xdr_stream *VAR_2,
       const void *VAR_3)
{
 const struct nfs3_readdirargs *VAR_4 = VAR_3;

 FUNC_0(VAR_2, VAR_4);
 FUNC_1(VAR_1, VAR_4->pages, 0,
    VAR_4->count, VAR_0);
}
