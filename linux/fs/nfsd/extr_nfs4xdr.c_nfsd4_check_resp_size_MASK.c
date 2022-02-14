
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xdr_buf {scalar_t__ len; scalar_t__ buflen; } ;
struct nfsd4_slot {int sl_flags; } ;
struct TYPE_4__ {struct nfsd4_slot* slot; } ;
struct nfsd4_compoundres {TYPE_2__ cstate; TYPE_1__* rqstp; } ;
typedef int __be32 ;
struct TYPE_3__ {struct xdr_buf rq_res; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__be32 FUNC_2(struct nfsd4_compoundres *VAR_5, u32 VAR_6)
{
 struct xdr_buf *VAR_7 = &VAR_5->rqstp->rq_res;
 struct nfsd4_slot *VAR_8 = VAR_5->cstate.slot;

 if (VAR_7->len + VAR_6 <= VAR_7->buflen)
  return VAR_1;
 if (!FUNC_1(&VAR_5->cstate))
  return VAR_4;
 if (VAR_8->sl_flags & VAR_0) {
  FUNC_0(1);
  return VAR_3;
 }
 return VAR_2;
}
