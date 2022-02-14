
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfsd4_locku {int lu_stateid; } ;
struct nfsd4_compoundres {struct xdr_stream xdr; } ;
typedef int __be32 ;


 int FUNC_0 (struct xdr_stream*,int *) ;

__attribute__((used)) static __be32
FUNC_1(struct nfsd4_compoundres *VAR_0, __be32 VAR_1, struct nfsd4_locku *VAR_2)
{
 struct xdr_stream *VAR_3 = &VAR_0->xdr;

 return FUNC_0(VAR_3, &VAR_2->lu_stateid);
}
