
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nlm_args* rq_argp; } ;
struct nlm_args {scalar_t__ monitor; } ;
typedef int __be32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct svc_rqst*) ;

__attribute__((used)) static __be32
FUNC_2(struct svc_rqst *VAR_0)
{
 struct nlm_args *VAR_1 = VAR_0->rq_argp;

 FUNC_0("lockd: NM_LOCK       called\n");

 VAR_1->monitor = 0;
 return FUNC_1(VAR_0);
}
