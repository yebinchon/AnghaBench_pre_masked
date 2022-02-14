
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct xdr_stream {int dummy; } ;
struct compound_hdr {int replen; int nops; } ;
typedef enum nfs_opnum4 { ____Placeholder_nfs_opnum4 } nfs_opnum4 ;


 int FUNC_0 (struct xdr_stream*,int) ;

__attribute__((used)) static void FUNC_1(struct xdr_stream *VAR_0, enum nfs_opnum4 VAR_1,
  uint32_t VAR_2,
  struct compound_hdr *VAR_3)
{
 FUNC_0(VAR_0, VAR_1);
 VAR_3->nops++;
 VAR_3->replen += VAR_2;
}
