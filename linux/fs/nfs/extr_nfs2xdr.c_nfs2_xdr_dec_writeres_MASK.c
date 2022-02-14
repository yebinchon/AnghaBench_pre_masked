
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs_pgio_res {int op_status; int fattr; TYPE_1__* verf; } ;
struct TYPE_2__ {int committed; } ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,int ,int *,int ) ;
 int FUNC_1 (struct rpc_rqst*) ;

__attribute__((used)) static int FUNC_2(struct rpc_rqst *VAR_1, struct xdr_stream *VAR_2,
     void *VAR_3)
{
 struct nfs_pgio_res *VAR_4 = VAR_3;


 VAR_4->verf->committed = VAR_0;
 return FUNC_0(VAR_2, VAR_4->fattr, &VAR_4->op_status,
   FUNC_1(VAR_1));
}
