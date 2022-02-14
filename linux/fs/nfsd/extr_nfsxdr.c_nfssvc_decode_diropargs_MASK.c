
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nfsd_diropargs* rq_argp; } ;
struct nfsd_diropargs {int len; int name; int fh; } ;
typedef int __be32 ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (struct svc_rqst*,int *) ;

int
FUNC_3(struct svc_rqst *VAR_0, __be32 *VAR_1)
{
 struct nfsd_diropargs *VAR_2 = VAR_0->rq_argp;

 if (!(VAR_1 = FUNC_0(VAR_1, &VAR_2->fh))
  || !(VAR_1 = FUNC_1(VAR_1, &VAR_2->name, &VAR_2->len)))
  return 0;

 return FUNC_2(VAR_0, VAR_1);
}
