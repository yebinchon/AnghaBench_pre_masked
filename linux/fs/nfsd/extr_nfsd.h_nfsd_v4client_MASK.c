
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {scalar_t__ rq_prog; int rq_vers; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct svc_rqst *VAR_1)
{
 return VAR_1->rq_prog == VAR_0 && VAR_1->rq_vers == 4;
}
