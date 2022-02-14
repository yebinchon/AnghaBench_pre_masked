
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfsd4_setattr {int* sa_bmval; } ;
struct nfsd4_compoundres {struct xdr_stream xdr; } ;
typedef scalar_t__ __be32 ;


 void* FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__* FUNC_1 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32
FUNC_2(struct nfsd4_compoundres *VAR_1, __be32 VAR_2, struct nfsd4_setattr *VAR_3)
{
 struct xdr_stream *VAR_4 = &VAR_1->xdr;
 __be32 *VAR_5;

 VAR_5 = FUNC_1(VAR_4, 16);
 if (!VAR_5)
  return VAR_0;
 if (VAR_2) {
  *VAR_5++ = FUNC_0(3);
  *VAR_5++ = FUNC_0(0);
  *VAR_5++ = FUNC_0(0);
  *VAR_5++ = FUNC_0(0);
 }
 else {
  *VAR_5++ = FUNC_0(3);
  *VAR_5++ = FUNC_0(VAR_3->sa_bmval[0]);
  *VAR_5++ = FUNC_0(VAR_3->sa_bmval[1]);
  *VAR_5++ = FUNC_0(VAR_3->sa_bmval[2]);
 }
 return VAR_2;
}
