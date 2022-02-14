
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs_pgio_res {int count; int server; scalar_t__ fattr; int seq_res; int op_status; } ;
struct compound_hdr {int status; } ;


 int FUNC_0 (struct xdr_stream*,struct compound_hdr*) ;
 int FUNC_1 (struct xdr_stream*,scalar_t__,int ) ;
 int FUNC_2 (struct xdr_stream*) ;
 int FUNC_3 (struct xdr_stream*,int *,struct rpc_rqst*) ;
 int FUNC_4 (struct xdr_stream*,struct nfs_pgio_res*) ;

__attribute__((used)) static int FUNC_5(struct rpc_rqst *VAR_0, struct xdr_stream *VAR_1,
         void *VAR_2)
{
 struct nfs_pgio_res *VAR_3 = VAR_2;
 struct compound_hdr VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, &VAR_4);
 VAR_3->op_status = VAR_4.status;
 if (VAR_5)
  goto out;
 VAR_5 = FUNC_3(VAR_1, &VAR_3->seq_res, VAR_0);
 if (VAR_5)
  goto out;
 VAR_5 = FUNC_2(VAR_1);
 if (VAR_5)
  goto out;
 VAR_5 = FUNC_4(VAR_1, VAR_3);
 if (VAR_5)
  goto out;
 if (VAR_3->fattr)
  FUNC_1(VAR_1, VAR_3->fattr, VAR_3->server);
 if (!VAR_5)
  VAR_5 = VAR_3->count;
out:
 return VAR_5;
}
