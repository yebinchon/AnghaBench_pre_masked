
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs_pgio_args {int count; int pgbase; int pages; int stable; int offset; int fh; } ;
typedef void* __be32 ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct xdr_stream*,int ) ;
 void** FUNC_2 (void**,int ) ;
 void** FUNC_3 (struct xdr_stream*,int) ;
 int FUNC_4 (struct xdr_stream*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct xdr_stream *VAR_0,
         const struct nfs_pgio_args *VAR_1)
{
 __be32 *VAR_2;

 FUNC_1(VAR_0, VAR_1->fh);

 VAR_2 = FUNC_3(VAR_0, 8 + 4 + 4 + 4);
 VAR_2 = FUNC_2(VAR_2, VAR_1->offset);
 *VAR_2++ = FUNC_0(VAR_1->count);
 *VAR_2++ = FUNC_0(VAR_1->stable);
 *VAR_2 = FUNC_0(VAR_1->count);
 FUNC_4(VAR_0, VAR_1->pages, VAR_1->pgbase, VAR_1->count);
}
