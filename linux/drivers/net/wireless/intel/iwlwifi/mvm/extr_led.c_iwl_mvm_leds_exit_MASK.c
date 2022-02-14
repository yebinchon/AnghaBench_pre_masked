
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct iwl_mvm {int init_status; TYPE_1__ led; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct iwl_mvm *VAR_1)
{
 if (!(VAR_1->init_status & VAR_0))
  return;

 FUNC_1(&VAR_1->led);
 FUNC_0(VAR_1->led.name);
 VAR_1->init_status &= ~VAR_0;
}
