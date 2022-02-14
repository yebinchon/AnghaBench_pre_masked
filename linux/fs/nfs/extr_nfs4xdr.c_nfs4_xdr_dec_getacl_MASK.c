
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs_getaclres {int seq_res; int * acl_scratch; } ;
struct compound_hdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,struct compound_hdr*) ;
 int FUNC_1 (struct xdr_stream*,struct rpc_rqst*,struct nfs_getaclres*) ;
 int FUNC_2 (struct xdr_stream*) ;
 int FUNC_3 (struct xdr_stream*,int *,struct rpc_rqst*) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (struct xdr_stream*,void*,int ) ;

__attribute__((used)) static int
FUNC_6(struct rpc_rqst *VAR_1, struct xdr_stream *VAR_2,
      void *VAR_3)
{
 struct nfs_getaclres *VAR_4 = VAR_3;
 struct compound_hdr VAR_5;
 int VAR_6;

 if (VAR_4->acl_scratch != ((void*)0)) {
  void *VAR_7 = FUNC_4(VAR_4->acl_scratch);
  FUNC_5(VAR_2, VAR_7, VAR_0);
 }
 VAR_6 = FUNC_0(VAR_2, &VAR_5);
 if (VAR_6)
  goto out;
 VAR_6 = FUNC_3(VAR_2, &VAR_4->seq_res, VAR_1);
 if (VAR_6)
  goto out;
 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6)
  goto out;
 VAR_6 = FUNC_1(VAR_2, VAR_1, VAR_4);

out:
 return VAR_6;
}
