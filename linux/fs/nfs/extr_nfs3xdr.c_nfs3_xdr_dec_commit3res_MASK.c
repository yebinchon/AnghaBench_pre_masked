
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs_commitres {int op_status; TYPE_1__* verf; int fattr; } ;
typedef enum nfs_stat { ____Placeholder_nfs_stat } nfs_stat ;
struct TYPE_2__ {int verifier; } ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,int*) ;
 int FUNC_1 (struct xdr_stream*,int ,int ) ;
 int FUNC_2 (struct xdr_stream*,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct rpc_rqst*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct rpc_rqst *VAR_1,
       struct xdr_stream *VAR_2,
       void *VAR_3)
{
 struct nfs_commitres *VAR_4 = VAR_3;
 enum nfs_stat VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, &VAR_5);
 if (FUNC_5(VAR_6))
  goto out;
 VAR_6 = FUNC_1(VAR_2, VAR_4->fattr, FUNC_4(VAR_1));
 if (FUNC_5(VAR_6))
  goto out;
 VAR_4->op_status = VAR_5;
 if (VAR_5 != VAR_0)
  goto out_status;
 VAR_6 = FUNC_2(VAR_2, &VAR_4->verf->verifier);
out:
 return VAR_6;
out_status:
 return FUNC_3(VAR_5);
}
