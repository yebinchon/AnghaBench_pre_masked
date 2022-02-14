
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int page_len; TYPE_3__* tail; TYPE_1__* head; } ;
struct svc_rqst {TYPE_4__ rq_res; struct nfsd3_readdirres* rq_resp; } ;
struct TYPE_6__ {scalar_t__ err; } ;
struct nfsd3_readdirres {scalar_t__ status; int count; TYPE_2__ common; int verf; int fh; } ;
typedef int __be32 ;
struct TYPE_7__ {int iov_len; int * iov_base; } ;
struct TYPE_5__ {scalar_t__ iov_len; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (struct svc_rqst*,int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct svc_rqst*,int *) ;

int
FUNC_4(struct svc_rqst *VAR_2, __be32 *VAR_3)
{
 struct nfsd3_readdirres *VAR_4 = VAR_2->rq_resp;

 VAR_3 = FUNC_0(VAR_2, VAR_3, &VAR_4->fh);

 if (VAR_4->status == 0) {

  FUNC_2(VAR_3, VAR_4->verf, 8); VAR_3 += 2;
  FUNC_3(VAR_2, VAR_3);
  if (VAR_2->rq_res.head[0].iov_len + (2<<2) > VAR_0)
   return 1;
  VAR_2->rq_res.page_len = (VAR_4->count) << 2;


  VAR_2->rq_res.tail[0].iov_base = VAR_3;
  *VAR_3++ = 0;
  *VAR_3++ = FUNC_1(VAR_4->common.err == VAR_1);
  VAR_2->rq_res.tail[0].iov_len = 2<<2;
  return 1;
 } else
  return FUNC_3(VAR_2, VAR_3);
}
