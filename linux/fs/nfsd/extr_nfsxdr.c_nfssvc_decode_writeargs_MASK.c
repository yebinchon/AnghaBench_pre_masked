
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int page_len; struct kvec* head; } ;
struct svc_rqst {TYPE_1__ rq_arg; struct nfsd_writeargs* rq_argp; } ;
struct TYPE_4__ {unsigned int iov_len; void* iov_base; } ;
struct nfsd_writeargs {unsigned int len; TYPE_2__ first; void* offset; int fh; } ;
struct kvec {void* iov_base; unsigned int iov_len; } ;
typedef int __be32 ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int * FUNC_1 (int *,int *) ;
 void* FUNC_2 (int ) ;

int
FUNC_3(struct svc_rqst *VAR_1, __be32 *VAR_2)
{
 struct nfsd_writeargs *VAR_3 = VAR_1->rq_argp;
 unsigned int VAR_4, VAR_5, VAR_6;
 struct kvec *VAR_7 = VAR_1->rq_arg.head;

 VAR_2 = FUNC_1(VAR_2, &VAR_3->fh);
 if (!VAR_2)
  return 0;

 VAR_2++;
 VAR_3->offset = FUNC_2(*VAR_2++);
 VAR_2++;
 VAR_4 = VAR_3->len = FUNC_2(*VAR_2++);



 if (VAR_4 > VAR_0)
  return 0;





 VAR_5 = (void*)VAR_2 - VAR_7->iov_base;
 if (VAR_5 > VAR_7->iov_len)
  return 0;
 VAR_6 = VAR_7->iov_len + VAR_1->rq_arg.page_len - VAR_5;
 if (VAR_6 < FUNC_0(VAR_4)*4)
  return 0;

 VAR_3->first.iov_base = (void *)VAR_2;
 VAR_3->first.iov_len = VAR_7->iov_len - VAR_5;
 return 1;
}
