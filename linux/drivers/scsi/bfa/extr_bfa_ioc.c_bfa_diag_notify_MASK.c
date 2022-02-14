
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; void* status; int cbarg; int (* cbfn ) (int ,void*) ;} ;
struct TYPE_3__ {int lock; void* status; int cbarg; int (* cbfn ) (int ,void*) ;} ;
struct bfa_diag_s {int block; void* status; int cbarg; int (* cbfn ) (int ,void*) ;int timer_active; int timer; TYPE_2__ tsensor; TYPE_1__ fwping; } ;
typedef enum bfa_ioc_event_e { ____Placeholder_bfa_ioc_event_e } bfa_ioc_event_e ;




 void* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bfa_diag_s*,int) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (int ,void*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1, enum bfa_ioc_event_e VAR_2)
{
 struct bfa_diag_s *VAR_3 = VAR_1;

 FUNC_1(VAR_3, VAR_2);
 FUNC_1(VAR_3, VAR_3->block);
 FUNC_1(VAR_3, VAR_3->fwping.lock);
 FUNC_1(VAR_3, VAR_3->tsensor.lock);

 switch (VAR_2) {
 case 129:
 case 128:
  if (VAR_3->fwping.lock) {
   VAR_3->fwping.status = VAR_0;
   VAR_3->fwping.cbfn(VAR_3->fwping.cbarg,
     VAR_3->fwping.status);
   VAR_3->fwping.lock = 0;
  }

  if (VAR_3->tsensor.lock) {
   VAR_3->tsensor.status = VAR_0;
   VAR_3->tsensor.cbfn(VAR_3->tsensor.cbarg,
        VAR_3->tsensor.status);
   VAR_3->tsensor.lock = 0;
  }

  if (VAR_3->block) {
   if (VAR_3->timer_active) {
    FUNC_0(&VAR_3->timer);
    VAR_3->timer_active = 0;
   }

   VAR_3->status = VAR_0;
   VAR_3->cbfn(VAR_3->cbarg, VAR_3->status);
   VAR_3->block = 0;
  }
  break;

 default:
  break;
 }
}
