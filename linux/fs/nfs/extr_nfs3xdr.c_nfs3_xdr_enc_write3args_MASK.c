
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {TYPE_1__* buf; } ;
struct rpc_rqst {int dummy; } ;
struct nfs_pgio_args {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,struct nfs_pgio_args const*) ;

__attribute__((used)) static void FUNC_1(struct rpc_rqst *VAR_1,
        struct xdr_stream *VAR_2,
        const void *VAR_3)
{
 const struct nfs_pgio_args *VAR_4 = VAR_3;

 FUNC_0(VAR_2, VAR_4);
 VAR_2->buf->flags |= VAR_0;
}
