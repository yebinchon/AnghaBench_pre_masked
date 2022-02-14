
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nlm_res* rq_argp; } ;
struct nlm_res {int status; int cookie; } ;
typedef int __be32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static __be32
FUNC_2(struct svc_rqst *VAR_2)
{
 struct nlm_res *VAR_3 = VAR_2->rq_argp;

 if (!VAR_0)
  return VAR_1;

 FUNC_0("lockd: GRANTED_RES   called\n");

 FUNC_1(&VAR_3->cookie, VAR_3->status);
 return VAR_1;
}
