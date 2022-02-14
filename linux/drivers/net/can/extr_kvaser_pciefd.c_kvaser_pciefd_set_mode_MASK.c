
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int restart_ms; } ;
struct kvaser_pciefd_can {TYPE_1__ can; } ;
typedef enum can_mode { ____Placeholder_can_mode } can_mode ;



 int VAR_0 ;
 int FUNC_0 (struct kvaser_pciefd_can*) ;
 struct kvaser_pciefd_can* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, enum can_mode VAR_2)
{
 struct kvaser_pciefd_can *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = 0;

 switch (VAR_2) {
 case 128:
  if (!VAR_3->can.restart_ms)
   VAR_4 = FUNC_0(VAR_3);
  break;
 default:
  return -VAR_0;
 }

 return VAR_4;
}
