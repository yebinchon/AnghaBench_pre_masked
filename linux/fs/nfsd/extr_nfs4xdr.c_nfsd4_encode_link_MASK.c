
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfsd4_link {int li_cinfo; } ;
struct nfsd4_compoundres {struct xdr_stream xdr; } ;
typedef int __be32 ;


 int * FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int * FUNC_1 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32
FUNC_2(struct nfsd4_compoundres *VAR_1, __be32 VAR_2, struct nfsd4_link *VAR_3)
{
 struct xdr_stream *VAR_4 = &VAR_1->xdr;
 __be32 *VAR_5;

 VAR_5 = FUNC_1(VAR_4, 20);
 if (!VAR_5)
  return VAR_0;
 VAR_5 = FUNC_0(VAR_5, &VAR_3->li_cinfo);
 return 0;
}
