
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; } ;
struct svc_rqst {scalar_t__ rq_prog; int rq_vers; TYPE_1__ rq_arg; } ;
struct svc_procedure {scalar_t__ pc_xdrressize; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct svc_rqst *VAR_2,
    const struct svc_procedure *VAR_3)
{




 if (VAR_2->rq_prog != VAR_0)
  return 0;




 if (VAR_2->rq_vers >= 4)
  return 0;

 if (VAR_3->pc_xdrressize > 0 &&
     VAR_3->pc_xdrressize < FUNC_0(VAR_1))
  return 0;

 return VAR_2->rq_arg.len > VAR_1;
}
