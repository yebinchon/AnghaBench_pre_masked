
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_copy {int cp_synchronous; int cp_res; } ;
struct nfsd4_compoundres {int xdr; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct nfsd4_compoundres*,int *,int ) ;
 int VAR_0 ;
 scalar_t__* FUNC_2 (int *,int) ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundres *VAR_1, __be32 VAR_2,
    struct nfsd4_copy *VAR_3)
{
 __be32 *VAR_4;

 VAR_2 = FUNC_1(VAR_1, &VAR_3->cp_res,
   VAR_3->cp_synchronous);
 if (VAR_2)
  return VAR_2;

 VAR_4 = FUNC_2(&VAR_1->xdr, 4 + 4);
 *VAR_4++ = VAR_0;
 *VAR_4++ = FUNC_0(VAR_3->cp_synchronous);
 return 0;
}
