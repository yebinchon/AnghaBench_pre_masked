
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs3_sattrargs {int guardtime; scalar_t__ guard; } ;
typedef int __be32 ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int * FUNC_1 (struct xdr_stream*,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct xdr_stream *VAR_2,
          const struct nfs3_sattrargs *VAR_3)
{
 __be32 *VAR_4;

 if (VAR_3->guard) {
  VAR_4 = FUNC_1(VAR_2, 4 + 8);
  *VAR_4++ = VAR_0;
  FUNC_0(VAR_4, &VAR_3->guardtime);
 } else {
  VAR_4 = FUNC_1(VAR_2, 4);
  *VAR_4 = VAR_1;
 }
}
