
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct nfsd4_session {int se_cb_seq_nr; } ;
struct nfsd4_callback {TYPE_1__* cb_clp; } ;
struct nfs4_cb_compound_hdr {scalar_t__ minorversion; int nops; } ;
typedef int __be32 ;
struct TYPE_2__ {struct nfsd4_session* cl_cb_session; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xdr_stream*,int ) ;
 int FUNC_2 (struct xdr_stream*,struct nfsd4_session*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (struct xdr_stream*,int) ;
 void* VAR_1 ;

__attribute__((used)) static void FUNC_5(struct xdr_stream *VAR_2,
        const struct nfsd4_callback *VAR_3,
        struct nfs4_cb_compound_hdr *VAR_4)
{
 struct nfsd4_session *VAR_5 = VAR_3->cb_clp->cl_cb_session;
 __be32 *VAR_6;

 if (VAR_4->minorversion == 0)
  return;

 FUNC_1(VAR_2, VAR_0);
 FUNC_2(VAR_2, VAR_5);

 VAR_6 = FUNC_4(VAR_2, 4 + 4 + 4 + 4 + 4);
 *VAR_6++ = FUNC_0(VAR_5->se_cb_seq_nr);
 *VAR_6++ = VAR_1;
 *VAR_6++ = VAR_1;
 *VAR_6++ = VAR_1;
 FUNC_3(VAR_6);

 VAR_4->nops++;
}
