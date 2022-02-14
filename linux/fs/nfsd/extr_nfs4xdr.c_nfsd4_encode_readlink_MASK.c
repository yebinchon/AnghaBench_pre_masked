
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {TYPE_1__* buf; } ;
struct nfsd4_readlink {int rl_fhp; int rl_rqstp; } ;
struct nfsd4_compoundres {struct xdr_stream xdr; } ;
typedef int __be32 ;
struct TYPE_2__ {int len; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,char*,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int,int*,int) ;
 int* FUNC_4 (struct xdr_stream*,int) ;
 int FUNC_5 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32
FUNC_6(struct nfsd4_compoundres *VAR_4, __be32 VAR_5, struct nfsd4_readlink *VAR_6)
{
 int VAR_7;
 __be32 VAR_8;
 int VAR_9 = 0;
 struct xdr_stream *VAR_10 = &VAR_4->xdr;
 int VAR_11 = VAR_10->buf->len;
 __be32 *VAR_12;

 VAR_12 = FUNC_4(VAR_10, 4);
 if (!VAR_12)
  return VAR_3;
 VAR_7 = VAR_0;

 VAR_12 = FUNC_4(VAR_10, VAR_7);
 if (!VAR_12)
  return VAR_3;






 VAR_5 = FUNC_2(VAR_6->rl_rqstp, VAR_6->rl_fhp,
      (char *)VAR_12, &VAR_7);
 if (VAR_5 == VAR_2)
  VAR_5 = VAR_1;
 if (VAR_5) {
  FUNC_5(VAR_10, VAR_11);
  return VAR_5;
 }

 VAR_8 = FUNC_1(VAR_7);
 FUNC_3(VAR_10->buf, VAR_11, &VAR_8, 4);
 FUNC_5(VAR_10, VAR_11 + 4 + FUNC_0(VAR_7, 4));
 if (VAR_7 & 3)
  FUNC_3(VAR_10->buf, VAR_11 + 4 + VAR_7,
      &VAR_9, 4 - (VAR_7&3));
 return 0;
}
