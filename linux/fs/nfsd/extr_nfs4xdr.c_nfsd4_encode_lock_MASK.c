
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfsd4_lock {int lk_denied; int lk_resp_stateid; } ;
struct nfsd4_compoundres {struct xdr_stream xdr; } ;
typedef int __be32 ;


 int FUNC_0 (struct xdr_stream*,int *) ;
 int FUNC_1 (struct xdr_stream*,int *) ;
 int VAR_0 ;

__attribute__((used)) static __be32
FUNC_2(struct nfsd4_compoundres *VAR_1, __be32 VAR_2, struct nfsd4_lock *VAR_3)
{
 struct xdr_stream *VAR_4 = &VAR_1->xdr;

 if (!VAR_2)
  VAR_2 = FUNC_1(VAR_4, &VAR_3->lk_resp_stateid);
 else if (VAR_2 == VAR_0)
  VAR_2 = FUNC_0(VAR_4, &VAR_3->lk_denied);

 return VAR_2;
}
