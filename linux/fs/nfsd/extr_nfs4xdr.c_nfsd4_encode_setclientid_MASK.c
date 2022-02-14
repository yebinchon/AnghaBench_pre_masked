
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfsd4_setclientid {int se_confirm; int se_clientid; } ;
struct nfsd4_compoundres {struct xdr_stream xdr; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__* FUNC_1 (scalar_t__*,int *,int) ;
 scalar_t__* FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundres *VAR_3, __be32 VAR_4, struct nfsd4_setclientid *VAR_5)
{
 struct xdr_stream *VAR_6 = &VAR_3->xdr;
 __be32 *VAR_7;

 if (!VAR_4) {
  VAR_7 = FUNC_2(VAR_6, 8 + VAR_0);
  if (!VAR_7)
   return VAR_2;
  VAR_7 = FUNC_1(VAR_7, &VAR_5->se_clientid, 8);
  VAR_7 = FUNC_1(VAR_7, &VAR_5->se_confirm,
      VAR_0);
 }
 else if (VAR_4 == VAR_1) {
  VAR_7 = FUNC_2(VAR_6, 8);
  if (!VAR_7)
   return VAR_2;
  *VAR_7++ = FUNC_0(0);
  *VAR_7++ = FUNC_0(0);
 }
 return VAR_4;
}
