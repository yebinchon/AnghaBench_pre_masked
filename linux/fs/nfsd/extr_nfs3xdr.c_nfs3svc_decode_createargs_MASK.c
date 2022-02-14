
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nfsd3_createargs* rq_argp; } ;
struct nfsd3_createargs {int * verf; int attrs; int createmode; int len; int name; int fh; } ;
typedef int __be32 ;





 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *,int *) ;
 int * FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (struct svc_rqst*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct svc_rqst*,int *) ;

int
FUNC_6(struct svc_rqst *VAR_0, __be32 *VAR_1)
{
 struct nfsd3_createargs *VAR_2 = VAR_0->rq_argp;

 if (!(VAR_1 = FUNC_0(VAR_1, &VAR_2->fh))
  || !(VAR_1 = FUNC_1(VAR_1, &VAR_2->name, &VAR_2->len)))
  return 0;

 switch (VAR_2->createmode = FUNC_4(*VAR_1++)) {
 case 128:
 case 129:
  VAR_1 = FUNC_2(VAR_1, &VAR_2->attrs, FUNC_3(VAR_0));
  break;
 case 130:
  VAR_2->verf = VAR_1;
  VAR_1 += 2;
  break;
 default:
  return 0;
 }

 return FUNC_5(VAR_0, VAR_1);
}
