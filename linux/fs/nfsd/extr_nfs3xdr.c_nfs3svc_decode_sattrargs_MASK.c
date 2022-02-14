
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; } ;
struct svc_rqst {struct nfsd3_sattrargs* rq_argp; } ;
struct nfsd3_sattrargs {int guardtime; int check_guard; int attrs; int fh; } ;
typedef int __be32 ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *,int ) ;
 int * FUNC_2 (int *,struct timespec*) ;
 int FUNC_3 (struct svc_rqst*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct svc_rqst*,int *) ;

int
FUNC_6(struct svc_rqst *VAR_0, __be32 *VAR_1)
{
 struct nfsd3_sattrargs *VAR_2 = VAR_0->rq_argp;

 VAR_1 = FUNC_0(VAR_1, &VAR_2->fh);
 if (!VAR_1)
  return 0;
 VAR_1 = FUNC_1(VAR_1, &VAR_2->attrs, FUNC_3(VAR_0));

 if ((VAR_2->check_guard = FUNC_4(*VAR_1++)) != 0) {
  struct timespec VAR_3;
  VAR_1 = FUNC_2(VAR_1, &VAR_3);
  VAR_2->guardtime = VAR_3.tv_sec;
 }

 return FUNC_5(VAR_0, VAR_1);
}
