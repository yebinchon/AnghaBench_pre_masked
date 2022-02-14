
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int page_len; TYPE_1__* tail; } ;
struct svc_rqst {TYPE_2__ rq_res; struct nfsd_readlinkres* rq_resp; } ;
struct nfsd_readlinkres {int len; } ;
typedef scalar_t__ __be32 ;
struct TYPE_3__ {int iov_len; scalar_t__* iov_base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct svc_rqst*,scalar_t__*) ;

int
FUNC_2(struct svc_rqst *VAR_0, __be32 *VAR_1)
{
 struct nfsd_readlinkres *VAR_2 = VAR_0->rq_resp;

 *VAR_1++ = FUNC_0(VAR_2->len);
 FUNC_1(VAR_0, VAR_1);
 VAR_0->rq_res.page_len = VAR_2->len;
 if (VAR_2->len & 3) {

  VAR_0->rq_res.tail[0].iov_base = VAR_1;
  *VAR_1 = 0;
  VAR_0->rq_res.tail[0].iov_len = 4 - (VAR_2->len&3);
 }
 return 1;
}
