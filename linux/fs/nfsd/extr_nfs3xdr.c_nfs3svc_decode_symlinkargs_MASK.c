
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {size_t page_len; TYPE_3__* tail; TYPE_1__* head; } ;
struct svc_rqst {TYPE_4__ rq_arg; struct nfsd3_symlinkargs* rq_argp; } ;
struct TYPE_6__ {int iov_len; int * iov_base; } ;
struct nfsd3_symlinkargs {int tlen; TYPE_2__ first; int attrs; int flen; int fname; int ffh; } ;
typedef int __be32 ;
struct TYPE_7__ {size_t iov_len; } ;
struct TYPE_5__ {int iov_len; } ;


 size_t FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (struct svc_rqst*) ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct svc_rqst *VAR_0, __be32 *VAR_1)
{
 struct nfsd3_symlinkargs *VAR_2 = VAR_0->rq_argp;
 char *VAR_3 = (char *)VAR_1;
 size_t VAR_4;

 if (!(VAR_1 = FUNC_1(VAR_1, &VAR_2->ffh)) ||
     !(VAR_1 = FUNC_2(VAR_1, &VAR_2->fname, &VAR_2->flen)))
  return 0;
 VAR_1 = FUNC_3(VAR_1, &VAR_2->attrs, FUNC_4(VAR_0));

 VAR_2->tlen = FUNC_5(*VAR_1++);

 VAR_2->first.iov_base = VAR_1;
 VAR_2->first.iov_len = VAR_0->rq_arg.head[0].iov_len;
 VAR_2->first.iov_len -= (char *)VAR_1 - VAR_3;

 VAR_4 = VAR_2->first.iov_len + VAR_0->rq_arg.page_len +
        VAR_0->rq_arg.tail[0].iov_len;
 if (VAR_4 < FUNC_0(VAR_2->tlen) << 2)
  return 0;
 return 1;
}
