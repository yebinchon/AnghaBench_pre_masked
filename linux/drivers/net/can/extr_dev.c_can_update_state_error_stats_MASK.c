
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int bus_off; int error_passive; int error_warning; } ;
struct can_priv {int state; TYPE_1__ can_stats; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;





 struct can_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
      enum can_state VAR_1)
{
 struct can_priv *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1 <= VAR_2->state)
  return;

 switch (VAR_1) {
 case 128:
  VAR_2->can_stats.error_warning++;
  break;
 case 129:
  VAR_2->can_stats.error_passive++;
  break;
 case 130:
  VAR_2->can_stats.bus_off++;
  break;
 default:
  break;
 }
}
