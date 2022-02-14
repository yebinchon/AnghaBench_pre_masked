
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct gfar_private {int rx_queue_access; int num_rx_queues; int state; } ;
struct TYPE_2__ {int location; int ring_cookie; } ;
struct ethtool_rxnfc {int cmd; TYPE_1__ fs; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gfar_private*,TYPE_1__*) ;
 int FUNC_1 (struct gfar_private*,int ) ;
 int FUNC_2 (struct gfar_private*,struct ethtool_rxnfc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct gfar_private* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_5, struct ethtool_rxnfc *VAR_6)
{
 struct gfar_private *VAR_7 = FUNC_5(VAR_5);
 int VAR_8 = 0;

 if (FUNC_6(VAR_2, &VAR_7->state))
  return -VAR_0;

 FUNC_3(&VAR_7->rx_queue_access);

 switch (VAR_6->cmd) {
 case 128:
  VAR_8 = FUNC_2(VAR_7, VAR_6);
  break;
 case 129:
  if ((VAR_6->fs.ring_cookie != VAR_4 &&
       VAR_6->fs.ring_cookie >= VAR_7->num_rx_queues) ||
      VAR_6->fs.location >= VAR_3) {
   VAR_8 = -VAR_1;
   break;
  }
  VAR_8 = FUNC_0(VAR_7, &VAR_6->fs);
  break;
 case 130:
  VAR_8 = FUNC_1(VAR_7, VAR_6->fs.location);
  break;
 default:
  VAR_8 = -VAR_1;
 }

 FUNC_4(&VAR_7->rx_queue_access);

 return VAR_8;
}
