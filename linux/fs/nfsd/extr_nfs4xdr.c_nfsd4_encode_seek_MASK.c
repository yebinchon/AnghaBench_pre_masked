
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_seek {int seek_pos; int seek_eof; } ;
struct nfsd4_compoundres {int xdr; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,int) ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundres *VAR_0, __be32 VAR_1,
    struct nfsd4_seek *VAR_2)
{
 __be32 *VAR_3;

 VAR_3 = FUNC_2(&VAR_0->xdr, 4 + 8);
 *VAR_3++ = FUNC_0(VAR_2->seek_eof);
 VAR_3 = FUNC_1(VAR_3, VAR_2->seek_pos);

 return 0;
}
