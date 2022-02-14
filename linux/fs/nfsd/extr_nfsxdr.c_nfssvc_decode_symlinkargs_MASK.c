
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ page_len; TYPE_2__* tail; TYPE_1__* head; } ;
struct svc_rqst {TYPE_3__ rq_arg; struct nfsd_symlinkargs* rq_argp; } ;
struct TYPE_8__ {int iov_len; int * iov_base; } ;
struct nfsd_symlinkargs {scalar_t__ tlen; int attrs; TYPE_4__ first; int flen; int fname; int ffh; } ;
typedef int __be32 ;
struct TYPE_6__ {int * iov_base; } ;
struct TYPE_5__ {int iov_len; } ;


 size_t FUNC_0 (scalar_t__) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (struct svc_rqst*) ;
 scalar_t__ FUNC_5 (int ) ;

int
FUNC_6(struct svc_rqst *VAR_0, __be32 *VAR_1)
{
 struct nfsd_symlinkargs *VAR_2 = VAR_0->rq_argp;
 char *VAR_3 = (char *)VAR_1;
 size_t VAR_4;

 if ( !(VAR_1 = FUNC_1(VAR_1, &VAR_2->ffh))
     || !(VAR_1 = FUNC_2(VAR_1, &VAR_2->fname, &VAR_2->flen)))
  return 0;

 VAR_2->tlen = FUNC_5(*VAR_1++);
 if (VAR_2->tlen == 0)
  return 0;

 VAR_2->first.iov_base = VAR_1;
 VAR_2->first.iov_len = VAR_0->rq_arg.head[0].iov_len;
 VAR_2->first.iov_len -= (char *)VAR_1 - VAR_3;






 if (VAR_0->rq_arg.page_len) {
  if (VAR_2->tlen != VAR_0->rq_arg.page_len)
   return 0;
  VAR_1 = VAR_0->rq_arg.tail[0].iov_base;
 } else {
  VAR_4 = FUNC_0(VAR_2->tlen);
  if (VAR_4 > VAR_2->first.iov_len - (8 * sizeof(__be32)))
   return 0;
  VAR_1 += VAR_4;
 }
 FUNC_3(VAR_1, &VAR_2->attrs, FUNC_4(VAR_0));

 return 1;
}
