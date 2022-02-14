
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nlm_args* rq_argp; } ;
struct nlm_host {int dummy; } ;
struct nlm_args {int dummy; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (struct svc_rqst*,struct nlm_args*,struct nlm_host**,int *) ;
 int FUNC_1 (struct nlm_host*) ;
 int FUNC_2 (struct nlm_host*) ;
 int VAR_0 ;

__attribute__((used)) static __be32
FUNC_3(struct svc_rqst *VAR_1)
{
 struct nlm_args *VAR_2 = VAR_1->rq_argp;
 struct nlm_host *VAR_3;


 if (FUNC_0(VAR_1, VAR_2, &VAR_3, ((void*)0)))
  return VAR_0;

 FUNC_1(VAR_3);
 FUNC_2(VAR_3);
 return VAR_0;
}
