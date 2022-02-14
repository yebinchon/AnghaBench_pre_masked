
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int num_queues; } ;
struct TYPE_3__ {int num_queues; } ;
struct gve_priv {TYPE_2__ tx_cfg; TYPE_1__ rx_cfg; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gve_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_4, int VAR_5)
{
 struct gve_priv *VAR_6 = FUNC_0(VAR_4);

 switch (VAR_5) {
 case 128:
  return VAR_1 +
         (VAR_6->rx_cfg.num_queues * VAR_2) +
         (VAR_6->tx_cfg.num_queues * VAR_3);
 default:
  return -VAR_0;
 }
}
