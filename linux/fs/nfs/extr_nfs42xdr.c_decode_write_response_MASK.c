
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_2__ {int verifier; void* committed; } ;
struct nfs42_write_res {TYPE_1__ verifier; int count; int stateid; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (struct xdr_stream*,int *,int ) ;
 int FUNC_2 (struct xdr_stream*,int *) ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 (int *,int *) ;
 int * FUNC_5 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_6(struct xdr_stream *VAR_3,
     struct nfs42_write_res *VAR_4)
{
 __be32 *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_5(VAR_3, 4);
 if (FUNC_3(!VAR_5))
  return -VAR_0;
 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7 > 1)
  return -VAR_1;
 else if (VAR_7 == 1) {
  VAR_6 = FUNC_1(VAR_3, &VAR_4->stateid,
    VAR_2);
  if (FUNC_3(VAR_6))
   return -VAR_0;
 }
 VAR_5 = FUNC_5(VAR_3, 8 + 4);
 if (FUNC_3(!VAR_5))
  return -VAR_0;
 VAR_5 = FUNC_4(VAR_5, &VAR_4->count);
 VAR_4->verifier.committed = FUNC_0(VAR_5);
 return FUNC_2(VAR_3, &VAR_4->verifier.verifier);
}
