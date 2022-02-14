
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_namespace {int dummy; } ;
struct svc_rqst {TYPE_1__* rq_xprt; } ;
struct cred {struct user_namespace* user_ns; } ;
struct TYPE_2__ {struct cred* xpt_cred; } ;


 struct user_namespace VAR_0 ;

__attribute__((used)) static inline struct user_namespace *
FUNC_0(const struct svc_rqst *VAR_1)
{
 const struct cred *VAR_2 = VAR_1->rq_xprt->xpt_cred;
 return VAR_2 ? VAR_2->user_ns : &VAR_0;
}
