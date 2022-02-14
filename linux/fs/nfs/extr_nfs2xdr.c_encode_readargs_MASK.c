
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct nfs_pgio_args {int fh; int count; int offset; } ;
typedef void* __be32 ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct xdr_stream*,int ) ;
 void** FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static void FUNC_3(struct xdr_stream *VAR_0,
       const struct nfs_pgio_args *VAR_1)
{
 u32 VAR_2 = VAR_1->offset;
 u32 VAR_3 = VAR_1->count;
 __be32 *VAR_4;

 FUNC_1(VAR_0, VAR_1->fh);

 VAR_4 = FUNC_2(VAR_0, 4 + 4 + 4);
 *VAR_4++ = FUNC_0(VAR_2);
 *VAR_4++ = FUNC_0(VAR_3);
 *VAR_4 = FUNC_0(VAR_3);
}
