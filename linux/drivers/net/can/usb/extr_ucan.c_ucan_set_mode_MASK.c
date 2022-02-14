
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct ucan_priv {int context_lock; int netdev; int available_tx_urbs; TYPE_1__ can; } ;
struct net_device {int dummy; } ;
typedef enum can_mode { ____Placeholder_can_mode } can_mode ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct ucan_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct ucan_priv*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3, enum can_mode VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;
 struct ucan_priv *VAR_7 = FUNC_1(VAR_3);

 switch (VAR_4) {
 case 128:
  FUNC_0(VAR_7->netdev, "restarting device\n");

  VAR_5 = FUNC_5(VAR_7, VAR_2, 0, 0);
  VAR_7->can.state = VAR_0;





  FUNC_3(&VAR_7->context_lock, VAR_6);

  if (VAR_7->available_tx_urbs > 0)
   FUNC_2(VAR_7->netdev);

  FUNC_4(&VAR_7->context_lock, VAR_6);

  return VAR_5;
 default:
  return -VAR_1;
 }
}
