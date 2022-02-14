
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs4_setclientid_res {int dummy; } ;
struct compound_hdr {int dummy; } ;


 int FUNC_0 (struct xdr_stream*,struct compound_hdr*) ;
 int FUNC_1 (struct xdr_stream*,struct nfs4_setclientid_res*) ;

__attribute__((used)) static int FUNC_2(struct rpc_rqst *VAR_0,
        struct xdr_stream *VAR_1,
        void *VAR_2)
{
 struct nfs4_setclientid_res *VAR_3 = VAR_2;
 struct compound_hdr VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, &VAR_4);
 if (!VAR_5)
  VAR_5 = FUNC_1(VAR_1, VAR_3);
 return VAR_5;
}
