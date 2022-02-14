
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfsd4_op {int opnum; struct nfs4_replay* replay; } ;
struct nfs4_replay {scalar_t__ rp_buflen; int rp_buf; int rp_status; } ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,int ,scalar_t__) ;
 int * FUNC_4 (struct xdr_stream*,scalar_t__) ;

void
FUNC_5(struct xdr_stream *VAR_0, struct nfsd4_op *VAR_1)
{
 __be32 *VAR_2;
 struct nfs4_replay *VAR_3 = VAR_1->replay;

 FUNC_0(!VAR_3);

 VAR_2 = FUNC_4(VAR_0, 8 + VAR_3->rp_buflen);
 if (!VAR_2) {
  FUNC_1(1);
  return;
 }
 *VAR_2++ = FUNC_2(VAR_1->opnum);
 *VAR_2++ = VAR_3->rp_status;

 VAR_2 = FUNC_3(VAR_2, VAR_3->rp_buf, VAR_3->rp_buflen);
}
