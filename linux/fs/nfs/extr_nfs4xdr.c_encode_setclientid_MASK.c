
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct nfs4_setclientid {TYPE_1__* sc_clnt; int sc_uaddr; int sc_uaddr_len; int sc_netid; int sc_netid_len; int sc_prog; int sc_verifier; } ;
struct compound_hdr {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {int cl_cb_ident; int cl_owner_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct xdr_stream*,int ) ;
 int FUNC_2 (struct xdr_stream*,int ,int ,struct compound_hdr*) ;
 int FUNC_3 (struct xdr_stream*,int ,int ) ;
 int * FUNC_4 (struct xdr_stream*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct xdr_stream *VAR_2, const struct nfs4_setclientid *VAR_3, struct compound_hdr *VAR_4)
{
 __be32 *VAR_5;

 FUNC_2(VAR_2, VAR_0, VAR_1, VAR_4);
 FUNC_1(VAR_2, VAR_3->sc_verifier);

 FUNC_3(VAR_2, FUNC_5(VAR_3->sc_clnt->cl_owner_id),
   VAR_3->sc_clnt->cl_owner_id);
 VAR_5 = FUNC_4(VAR_2, 4);
 *VAR_5 = FUNC_0(VAR_3->sc_prog);
 FUNC_3(VAR_2, VAR_3->sc_netid_len, VAR_3->sc_netid);
 FUNC_3(VAR_2, VAR_3->sc_uaddr_len, VAR_3->sc_uaddr);
 VAR_5 = FUNC_4(VAR_2, 4);
 *VAR_5 = FUNC_0(VAR_3->sc_clnt->cl_cb_ident);
}
