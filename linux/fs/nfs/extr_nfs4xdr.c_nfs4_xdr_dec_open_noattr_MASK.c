
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs_openres {scalar_t__ lg_res; int server; int f_attr; int access_result; int access_supported; scalar_t__ access_request; int seq_res; } ;
struct compound_hdr {int dummy; } ;


 int FUNC_0 (struct xdr_stream*,int *,int *) ;
 int FUNC_1 (struct xdr_stream*,struct compound_hdr*) ;
 int FUNC_2 (struct xdr_stream*,int ,int ) ;
 int FUNC_3 (struct xdr_stream*,struct rpc_rqst*,scalar_t__) ;
 int FUNC_4 (struct xdr_stream*,struct nfs_openres*) ;
 int FUNC_5 (struct xdr_stream*) ;
 int FUNC_6 (struct xdr_stream*,int *,struct rpc_rqst*) ;

__attribute__((used)) static int FUNC_7(struct rpc_rqst *VAR_0,
        struct xdr_stream *VAR_1,
        void *VAR_2)
{
 struct nfs_openres *VAR_3 = VAR_2;
 struct compound_hdr VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, &VAR_4);
 if (VAR_5)
  goto out;
 VAR_5 = FUNC_6(VAR_1, &VAR_3->seq_res, VAR_0);
 if (VAR_5)
  goto out;
 VAR_5 = FUNC_5(VAR_1);
 if (VAR_5)
  goto out;
 VAR_5 = FUNC_4(VAR_1, VAR_3);
 if (VAR_5)
  goto out;
 if (VAR_3->access_request)
  FUNC_0(VAR_1, &VAR_3->access_supported, &VAR_3->access_result);
 FUNC_2(VAR_1, VAR_3->f_attr, VAR_3->server);
 if (VAR_3->lg_res)
  FUNC_3(VAR_1, VAR_0, VAR_3->lg_res);
out:
 return VAR_5;
}
