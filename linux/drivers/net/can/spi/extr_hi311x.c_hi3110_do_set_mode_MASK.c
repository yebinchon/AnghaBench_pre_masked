
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int restart_ms; int state; } ;
struct hi3110_priv {int restart_tx; int restart_work; int wq; int after_suspend; TYPE_1__ can; } ;
typedef enum can_mode { ____Placeholder_can_mode } can_mode ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 struct hi3110_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, enum can_mode VAR_4)
{
 struct hi3110_priv *VAR_5 = FUNC_1(VAR_3);

 switch (VAR_4) {
 case 128:
  FUNC_0(VAR_3);

  VAR_5->can.state = VAR_0;
  VAR_5->restart_tx = 1;
  if (VAR_5->can.restart_ms == 0)
   VAR_5->after_suspend = VAR_2;
  FUNC_2(VAR_5->wq, &VAR_5->restart_work);
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
