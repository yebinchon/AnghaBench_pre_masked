
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_buf {scalar_t__ len; } ;
struct svc_rqst {struct xdr_buf rq_arg; } ;
struct TYPE_2__ {scalar_t__ maxreq_sz; } ;
struct nfsd4_session {TYPE_1__ se_fchannel; } ;



__attribute__((used)) static bool FUNC_0(struct svc_rqst *VAR_0,
      struct nfsd4_session *VAR_1)
{
 struct xdr_buf *VAR_2 = &VAR_0->rq_arg;

 return VAR_2->len > VAR_1->se_fchannel.maxreq_sz;
}
