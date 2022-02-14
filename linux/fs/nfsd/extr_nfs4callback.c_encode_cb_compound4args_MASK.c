
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs4_cb_compound_hdr {int nops; void** nops_p; int ident; int minorversion; } ;
typedef void* __be32 ;


 void* FUNC_0 (int ) ;
 void** FUNC_1 (void**) ;
 void** FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static void FUNC_3(struct xdr_stream *VAR_0,
        struct nfs4_cb_compound_hdr *VAR_1)
{
 __be32 * VAR_2;

 VAR_2 = FUNC_2(VAR_0, 4 + 4 + 4 + 4);
 VAR_2 = FUNC_1(VAR_2);
 *VAR_2++ = FUNC_0(VAR_1->minorversion);
 *VAR_2++ = FUNC_0(VAR_1->ident);

 VAR_1->nops_p = VAR_2;
 *VAR_2 = FUNC_0(VAR_1->nops);
}
