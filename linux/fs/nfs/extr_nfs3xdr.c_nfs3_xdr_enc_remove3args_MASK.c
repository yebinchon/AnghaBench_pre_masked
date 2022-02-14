
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct TYPE_2__ {int len; int name; } ;
struct nfs_removeargs {TYPE_1__ name; int fh; } ;


 int FUNC_0 (struct xdr_stream*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct rpc_rqst *VAR_0,
         struct xdr_stream *VAR_1,
         const void *VAR_2)
{
 const struct nfs_removeargs *VAR_3 = VAR_2;

 FUNC_0(VAR_1, VAR_3->fh, VAR_3->name.name, VAR_3->name.len);
}
