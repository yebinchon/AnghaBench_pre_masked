
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long page_len; } ;
struct svc_rqst {TYPE_2__ rq_res; struct nfsd_readdirres* rq_resp; } ;
struct TYPE_3__ {scalar_t__ err; } ;
struct nfsd_readdirres {TYPE_1__ common; int * buffer; } ;
typedef int __be32 ;


 unsigned long VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct svc_rqst*,int *) ;

int
FUNC_2(struct svc_rqst *VAR_2, __be32 *VAR_3)
{
 struct nfsd_readdirres *VAR_4 = VAR_2->rq_resp;

 FUNC_1(VAR_2, VAR_3);
 VAR_3 = VAR_4->buffer;
 *VAR_3++ = 0;
 *VAR_3++ = FUNC_0((VAR_4->common.err == VAR_1));
 VAR_2->rq_res.page_len = (((unsigned long)VAR_3-1) & ~VAR_0)+1;

 return 1;
}
