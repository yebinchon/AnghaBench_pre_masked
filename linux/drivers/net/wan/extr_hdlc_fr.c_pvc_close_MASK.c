
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ active; } ;
struct pvc_device {scalar_t__ open_count; TYPE_2__ state; int frad; } ;
struct net_device {struct pvc_device* ml_priv; } ;
typedef int hdlc_device ;
struct TYPE_4__ {scalar_t__ lmi; scalar_t__ dce; } ;
struct TYPE_6__ {int dce_changed; TYPE_1__ settings; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1)
{
 struct pvc_device *VAR_2 = VAR_1->ml_priv;

 if (--VAR_2->open_count == 0) {
  hdlc_device *VAR_3 = FUNC_0(VAR_2->frad);
  if (FUNC_1(VAR_3)->settings.lmi == VAR_0)
   VAR_2->state.active = 0;

  if (FUNC_1(VAR_3)->settings.dce) {
   FUNC_1(VAR_3)->dce_changed = 1;
   VAR_2->state.active = 0;
  }
 }
 return 0;
}
