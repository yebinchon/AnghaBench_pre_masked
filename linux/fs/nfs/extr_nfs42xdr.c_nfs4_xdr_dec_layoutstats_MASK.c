
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs42_layoutstat_res {int num_dev; int rpc_status; int seq_res; } ;
struct compound_hdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct xdr_stream*,struct compound_hdr*) ;
 int FUNC_2 (struct xdr_stream*) ;
 int FUNC_3 (struct xdr_stream*) ;
 int FUNC_4 (struct xdr_stream*,int *,struct rpc_rqst*) ;

__attribute__((used)) static int FUNC_5(struct rpc_rqst *VAR_1,
        struct xdr_stream *VAR_2,
        void *VAR_3)
{
 struct nfs42_layoutstat_res *VAR_4 = VAR_3;
 struct compound_hdr VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_2, &VAR_5);
 if (VAR_6)
  goto out;
 VAR_6 = FUNC_4(VAR_2, &VAR_4->seq_res, VAR_1);
 if (VAR_6)
  goto out;
 VAR_6 = FUNC_3(VAR_2);
 if (VAR_6)
  goto out;
 FUNC_0(VAR_4->num_dev > VAR_0);
 for (VAR_7 = 0; VAR_7 < VAR_4->num_dev; VAR_7++) {
  VAR_6 = FUNC_2(VAR_2);
  if (VAR_6)
   goto out;
 }
out:
 VAR_4->rpc_status = VAR_6;
 return VAR_6;
}
