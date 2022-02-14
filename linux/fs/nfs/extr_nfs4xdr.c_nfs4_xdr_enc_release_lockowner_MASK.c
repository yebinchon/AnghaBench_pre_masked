
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs_release_lockowner_args {int lock_owner; } ;
struct compound_hdr {int minorversion; } ;


 int FUNC_0 (struct xdr_stream*,struct rpc_rqst*,struct compound_hdr*) ;
 int FUNC_1 (struct compound_hdr*) ;
 int FUNC_2 (struct xdr_stream*,int *,struct compound_hdr*) ;

__attribute__((used)) static void FUNC_3(struct rpc_rqst *VAR_0,
        struct xdr_stream *VAR_1,
        const void *VAR_2)
{
 const struct nfs_release_lockowner_args *VAR_3 = VAR_2;
 struct compound_hdr VAR_4 = {
  .minorversion = 0,
 };

 FUNC_0(VAR_1, VAR_0, &VAR_4);
 FUNC_2(VAR_1, &VAR_3->lock_owner, &VAR_4);
 FUNC_1(&VAR_4);
}
