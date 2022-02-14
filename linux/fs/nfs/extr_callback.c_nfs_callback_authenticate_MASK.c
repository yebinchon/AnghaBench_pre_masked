
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int rq_proc; TYPE_1__* rq_authop; } ;
struct TYPE_2__ {int flavour; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct svc_rqst*) ;

__attribute__((used)) static int FUNC_1(struct svc_rqst *VAR_3)
{
 switch (VAR_3->rq_authop->flavour) {
 case 128:
  if (VAR_3->rq_proc != VAR_0)
   return VAR_1;
  break;
 case 129:

   if (FUNC_0(VAR_3))
   return VAR_1;
 }
 return VAR_2;
}
