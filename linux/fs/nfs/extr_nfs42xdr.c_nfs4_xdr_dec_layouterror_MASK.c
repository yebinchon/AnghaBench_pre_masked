
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs42_layouterror_res {int num_errors; int rpc_status; int seq_res; } ;
struct compound_hdr {int dummy; } ;


 int FUNC_0 (struct xdr_stream*,struct compound_hdr*) ;
 int FUNC_1 (struct xdr_stream*) ;
 int FUNC_2 (struct xdr_stream*) ;
 int FUNC_3 (struct xdr_stream*,int *,struct rpc_rqst*) ;

__attribute__((used)) static int FUNC_4(struct rpc_rqst *VAR_0,
        struct xdr_stream *VAR_1,
        void *VAR_2)
{
 struct nfs42_layouterror_res *VAR_3 = VAR_2;
 struct compound_hdr VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_1, &VAR_4);
 if (VAR_5)
  goto out;
 VAR_5 = FUNC_3(VAR_1, &VAR_3->seq_res, VAR_0);
 if (VAR_5)
  goto out;
 VAR_5 = FUNC_2(VAR_1);

 for (VAR_6 = 0; VAR_6 < VAR_3->num_errors && VAR_5 == 0; VAR_6++)
  VAR_5 = FUNC_1(VAR_1);
out:
 VAR_3->rpc_status = VAR_5;
 return VAR_5;
}
