
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct compound_hdr {scalar_t__ replen; scalar_t__ taglen; int nops; void** nops_p; int minorversion; int tag; } ;
typedef void* __be32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct xdr_stream*,scalar_t__,int ) ;
 void** FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static void FUNC_4(struct xdr_stream *VAR_1,
    struct rpc_rqst *VAR_2,
    struct compound_hdr *VAR_3)
{
 __be32 *VAR_4;




 VAR_3->replen = 3 + VAR_3->taglen;

 FUNC_0(VAR_3->taglen > VAR_0);
 FUNC_2(VAR_1, VAR_3->taglen, VAR_3->tag);
 VAR_4 = FUNC_3(VAR_1, 8);
 *VAR_4++ = FUNC_1(VAR_3->minorversion);
 VAR_3->nops_p = VAR_4;
 *VAR_4 = FUNC_1(VAR_3->nops);
}
