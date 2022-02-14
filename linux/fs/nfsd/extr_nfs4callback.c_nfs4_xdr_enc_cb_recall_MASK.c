
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfsd4_callback {TYPE_1__* cb_clp; } ;
struct nfs4_delegation {int dummy; } ;
struct nfs4_cb_compound_hdr {int minorversion; int ident; } ;
struct TYPE_2__ {int cl_minorversion; int cl_cb_ident; } ;


 struct nfs4_delegation* FUNC_0 (struct nfsd4_callback const*) ;
 int FUNC_1 (struct xdr_stream*,struct nfs4_cb_compound_hdr*) ;
 int FUNC_2 (struct nfs4_cb_compound_hdr*) ;
 int FUNC_3 (struct xdr_stream*,struct nfs4_delegation const*,struct nfs4_cb_compound_hdr*) ;
 int FUNC_4 (struct xdr_stream*,struct nfsd4_callback const*,struct nfs4_cb_compound_hdr*) ;

__attribute__((used)) static void FUNC_5(struct rpc_rqst *VAR_0, struct xdr_stream *VAR_1,
       const void *VAR_2)
{
 const struct nfsd4_callback *VAR_3 = VAR_2;
 const struct nfs4_delegation *VAR_4 = FUNC_0(VAR_3);
 struct nfs4_cb_compound_hdr VAR_5 = {
  .ident = VAR_3->cb_clp->cl_cb_ident,
  .minorversion = VAR_3->cb_clp->cl_minorversion,
 };

 FUNC_1(VAR_1, &VAR_5);
 FUNC_4(VAR_1, VAR_3, &VAR_5);
 FUNC_3(VAR_1, VAR_4, &VAR_5);
 FUNC_2(&VAR_5);
}
