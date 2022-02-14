
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_3__ {unsigned int page_len; struct kvec* tail; struct kvec* head; } ;
struct svc_rqst {TYPE_1__ rq_arg; struct nfsd3_writeargs* rq_argp; } ;
struct TYPE_4__ {unsigned int iov_len; void* iov_base; } ;
struct nfsd3_writeargs {void* count; unsigned int len; TYPE_2__ first; void* stable; int offset; int fh; } ;
struct kvec {void* iov_base; int iov_len; } ;
typedef int __be32 ;


 int FUNC_0 (unsigned int) ;
 int * FUNC_1 (int *,int *) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (struct svc_rqst*) ;
 int * FUNC_4 (int *,int *) ;

int
FUNC_5(struct svc_rqst *VAR_0, __be32 *VAR_1)
{
 struct nfsd3_writeargs *VAR_2 = VAR_0->rq_argp;
 unsigned int VAR_3, VAR_4, VAR_5;
 u32 VAR_6 = FUNC_3(VAR_0);
 struct kvec *VAR_7 = VAR_0->rq_arg.head;
 struct kvec *VAR_8 = VAR_0->rq_arg.tail;

 VAR_1 = FUNC_1(VAR_1, &VAR_2->fh);
 if (!VAR_1)
  return 0;
 VAR_1 = FUNC_4(VAR_1, &VAR_2->offset);

 VAR_2->count = FUNC_2(*VAR_1++);
 VAR_2->stable = FUNC_2(*VAR_1++);
 VAR_3 = VAR_2->len = FUNC_2(*VAR_1++);
 if ((void *)VAR_1 > VAR_7->iov_base + VAR_7->iov_len)
  return 0;



 if (VAR_2->count != VAR_2->len)
  return 0;





 VAR_4 = (void*)VAR_1 - VAR_7->iov_base;
 VAR_5 = VAR_7->iov_len + VAR_0->rq_arg.page_len + VAR_8->iov_len - VAR_4;
 if (VAR_5 < FUNC_0(VAR_3)*4)
  return 0;

 if (VAR_2->count > VAR_6) {
  VAR_2->count = VAR_6;
  VAR_3 = VAR_2->len = VAR_6;
 }

 VAR_2->first.iov_base = (void *)VAR_1;
 VAR_2->first.iov_len = VAR_7->iov_len - VAR_4;
 return 1;
}
