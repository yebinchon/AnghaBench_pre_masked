
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs_pgio_res {int op_status; int replen; int fattr; } ;
typedef enum nfs_stat { ____Placeholder_nfs_stat } nfs_stat ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,int*) ;
 int FUNC_1 (struct xdr_stream*,int ,int ) ;
 int FUNC_2 (struct xdr_stream*,struct nfs_pgio_res*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct rpc_rqst*) ;
 scalar_t__ FUNC_5 (int) ;
 unsigned int FUNC_6 (struct xdr_stream*) ;

__attribute__((used)) static int FUNC_7(struct rpc_rqst *VAR_1, struct xdr_stream *VAR_2,
     void *VAR_3)
{
 struct nfs_pgio_res *VAR_4 = VAR_3;
 unsigned int VAR_5;
 enum nfs_stat VAR_6;
 int VAR_7;

 VAR_5 = FUNC_6(VAR_2);
 VAR_7 = FUNC_0(VAR_2, &VAR_6);
 if (FUNC_5(VAR_7))
  goto out;
 VAR_7 = FUNC_1(VAR_2, VAR_4->fattr, FUNC_4(VAR_1));
 if (FUNC_5(VAR_7))
  goto out;
 VAR_4->op_status = VAR_6;
 if (VAR_6 != VAR_0)
  goto out_status;
 VAR_4->replen = 4 + ((FUNC_6(VAR_2) - VAR_5) >> 2);
 VAR_7 = FUNC_2(VAR_2, VAR_4);
out:
 return VAR_7;
out_status:
 return FUNC_3(VAR_6);
}
