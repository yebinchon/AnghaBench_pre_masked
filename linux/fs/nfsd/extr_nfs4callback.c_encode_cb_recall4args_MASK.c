
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sc_file; int sc_stateid; } ;
struct nfs4_delegation {TYPE_2__ dl_stid; } ;
struct nfs4_cb_compound_hdr {int nops; } ;
typedef int __be32 ;
struct TYPE_3__ {int fi_fhandle; } ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,int ) ;
 int FUNC_1 (struct xdr_stream*,int *) ;
 int FUNC_2 (struct xdr_stream*,int *) ;
 int * FUNC_3 (struct xdr_stream*,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct xdr_stream *VAR_2,
      const struct nfs4_delegation *VAR_3,
      struct nfs4_cb_compound_hdr *VAR_4)
{
 __be32 *VAR_5;

 FUNC_0(VAR_2, VAR_0);
 FUNC_2(VAR_2, &VAR_3->dl_stid.sc_stateid);

 VAR_5 = FUNC_3(VAR_2, 4);
 *VAR_5++ = VAR_1;

 FUNC_1(VAR_2, &VAR_3->dl_stid.sc_file->fi_fhandle);

 VAR_4->nops++;
}
