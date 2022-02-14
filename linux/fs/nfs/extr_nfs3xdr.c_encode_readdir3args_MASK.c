
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs3_readdirargs {int count; int verf; int cookie; int fh; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xdr_stream*,int ) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int ) ;
 int * FUNC_4 (struct xdr_stream*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct xdr_stream *VAR_1,
    const struct nfs3_readdirargs *VAR_2)
{
 __be32 *VAR_3;

 FUNC_1(VAR_1, VAR_2->fh);

 VAR_3 = FUNC_4(VAR_1, 8 + VAR_0 + 4);
 VAR_3 = FUNC_2(VAR_3, VAR_2->cookie);
 VAR_3 = FUNC_3(VAR_3, VAR_2->verf);
 *VAR_3 = FUNC_0(VAR_2->count);
}
