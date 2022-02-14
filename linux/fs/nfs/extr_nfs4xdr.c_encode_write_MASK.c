
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs_pgio_args {int count; int pgbase; int pages; int stable; int offset; int stateid; } ;
struct compound_hdr {int dummy; } ;
typedef void* __be32 ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct xdr_stream*,int *) ;
 int FUNC_2 (struct xdr_stream*,int ,int ,struct compound_hdr*) ;
 void** FUNC_3 (struct xdr_stream*,int) ;
 void** FUNC_4 (void**,int ) ;
 int FUNC_5 (struct xdr_stream*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct xdr_stream *VAR_2, const struct nfs_pgio_args *VAR_3,
    struct compound_hdr *VAR_4)
{
 __be32 *VAR_5;

 FUNC_2(VAR_2, VAR_0, VAR_1, VAR_4);
 FUNC_1(VAR_2, &VAR_3->stateid);

 VAR_5 = FUNC_3(VAR_2, 16);
 VAR_5 = FUNC_4(VAR_5, VAR_3->offset);
 *VAR_5++ = FUNC_0(VAR_3->stable);
 *VAR_5 = FUNC_0(VAR_3->count);

 FUNC_5(VAR_2, VAR_3->pages, VAR_3->pgbase, VAR_3->count);
}
