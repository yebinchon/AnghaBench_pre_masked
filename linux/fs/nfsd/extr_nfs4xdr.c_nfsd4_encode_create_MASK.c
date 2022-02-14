
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfsd4_create {int * cr_bmval; int cr_cinfo; } ;
struct nfsd4_compoundres {struct xdr_stream xdr; } ;
typedef int __be32 ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct xdr_stream*,int ,int ,int ) ;
 int VAR_0 ;
 int * FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundres *VAR_1, __be32 VAR_2, struct nfsd4_create *VAR_3)
{
 struct xdr_stream *VAR_4 = &VAR_1->xdr;
 __be32 *VAR_5;

 VAR_5 = FUNC_2(VAR_4, 20);
 if (!VAR_5)
  return VAR_0;
 FUNC_0(VAR_5, &VAR_3->cr_cinfo);
 return FUNC_1(VAR_4, VAR_3->cr_bmval[0],
   VAR_3->cr_bmval[1], VAR_3->cr_bmval[2]);
}
