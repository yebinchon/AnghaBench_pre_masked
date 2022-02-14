
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct iwl_priv {TYPE_1__ led; int led_registered; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct iwl_priv *VAR_0)
{
 if (!VAR_0->led_registered)
  return;

 FUNC_1(&VAR_0->led);
 FUNC_0(VAR_0->led.name);
}
