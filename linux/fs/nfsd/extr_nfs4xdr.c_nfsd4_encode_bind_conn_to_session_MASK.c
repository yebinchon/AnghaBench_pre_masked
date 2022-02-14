
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct nfsd4_compoundres {struct xdr_stream xdr; } ;
struct TYPE_2__ {int data; } ;
struct nfsd4_bind_conn_to_session {int dir; TYPE_1__ sessionid; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (int *,int ,scalar_t__) ;
 int * FUNC_2 (struct xdr_stream*,scalar_t__) ;

__attribute__((used)) static __be32 FUNC_3(struct nfsd4_compoundres *VAR_2, __be32 VAR_3, struct nfsd4_bind_conn_to_session *VAR_4)
{
 struct xdr_stream *VAR_5 = &VAR_2->xdr;
 __be32 *VAR_6;

 VAR_6 = FUNC_2(VAR_5, VAR_0 + 8);
 if (!VAR_6)
  return VAR_1;
 VAR_6 = FUNC_1(VAR_6, VAR_4->sessionid.data,
     VAR_0);
 *VAR_6++ = FUNC_0(VAR_4->dir);

 *VAR_6++ = FUNC_0(0);
 return 0;
}
