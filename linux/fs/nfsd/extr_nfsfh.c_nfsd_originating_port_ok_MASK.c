
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cr_flavor; } ;
struct svc_rqst {int rq_flags; TYPE_1__ rq_cred; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static bool FUNC_1(struct svc_rqst *VAR_3, int VAR_4)
{
 if (VAR_4 & VAR_0)
  return 1;

 if (VAR_3->rq_cred.cr_flavor >= VAR_1)
  return 1;
 return FUNC_0(VAR_2, &VAR_3->rq_flags);
}
