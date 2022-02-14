
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int active; } ;
struct pvc_device {TYPE_2__ state; TYPE_4__* frad; int open_count; } ;
struct net_device {struct pvc_device* ml_priv; } ;
typedef int hdlc_device ;
struct TYPE_9__ {int flags; } ;
struct TYPE_6__ {scalar_t__ lmi; } ;
struct TYPE_8__ {int dce_changed; TYPE_1__ settings; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,struct pvc_device*) ;
 TYPE_3__* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3)
{
 struct pvc_device *VAR_4 = VAR_3->ml_priv;

 if ((VAR_4->frad->flags & VAR_1) == 0)
  return -VAR_0;

 if (VAR_4->open_count++ == 0) {
  hdlc_device *VAR_5 = FUNC_0(VAR_4->frad);
  if (FUNC_3(VAR_5)->settings.lmi == VAR_2)
   VAR_4->state.active = FUNC_1(VAR_4->frad);

  FUNC_2(VAR_4->state.active, VAR_4);
  FUNC_3(VAR_5)->dce_changed = 1;
 }
 return 0;
}
