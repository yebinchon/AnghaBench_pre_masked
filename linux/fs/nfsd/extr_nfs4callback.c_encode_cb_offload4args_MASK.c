
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_2__ {int cb_stateid; } ;
struct nfsd4_copy {TYPE_1__ cp_res; } ;
struct nfs4_cb_compound_hdr {int nops; } ;
struct knfsd_fh {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xdr_stream*,struct knfsd_fh const*) ;
 int FUNC_2 (struct xdr_stream*,int ,struct nfsd4_copy const*) ;
 int FUNC_3 (struct xdr_stream*,int *) ;
 int * FUNC_4 (struct xdr_stream*,int) ;

__attribute__((used)) static void FUNC_5(struct xdr_stream *VAR_1,
       __be32 VAR_2,
       const struct knfsd_fh *VAR_3,
       const struct nfsd4_copy *VAR_4,
       struct nfs4_cb_compound_hdr *VAR_5)
{
 __be32 *VAR_6;

 VAR_6 = FUNC_4(VAR_1, 4);
 *VAR_6++ = FUNC_0(VAR_0);
 FUNC_1(VAR_1, VAR_3);
 FUNC_3(VAR_1, &VAR_4->cp_res.cb_stateid);
 FUNC_2(VAR_1, VAR_2, VAR_4);

 VAR_5->nops++;
}
