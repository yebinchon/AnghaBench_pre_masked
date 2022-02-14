
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int rq_proc; TYPE_1__* rq_authop; int * rq_client; } ;
struct TYPE_2__ {int flavour; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct svc_rqst*) ;

__attribute__((used)) static int FUNC_2(struct svc_rqst *VAR_2)
{
 VAR_2->rq_client = ((void*)0);
 switch (VAR_2->rq_authop->flavour) {
  case 129:
  case 128:
   if (VAR_2->rq_proc == 0)
    return VAR_1;
   if (FUNC_0(VAR_2->rq_proc)) {



    return VAR_1;
   }
   return FUNC_1(VAR_2);
 }
 return VAR_0;
}
