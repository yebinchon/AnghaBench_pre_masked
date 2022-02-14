
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int count; } ;
struct TYPE_4__ {int count; } ;
struct skge_port {int duplex; int speed; int wol; int port; int link_timer; int advertising; int flow_control; int autoneg; TYPE_2__ rx_ring; TYPE_1__ tx_ring; int msg_enable; struct skge_hw* hw; struct net_device* netdev; int napi; } ;
struct skge_hw {scalar_t__ regs; struct net_device** dev; TYPE_3__* pdev; } ;
struct net_device {int features; int hw_features; int dev_addr; int max_mtu; int min_mtu; int irq; int watchdog_timeo; int * ethtool_ops; int * netdev_ops; } ;
struct TYPE_6__ {int dev; int irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct net_device*,int *) ;
 int VAR_13 ;
 int VAR_14 ;
 struct net_device* FUNC_1 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (struct skge_hw*) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 struct skge_port* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct net_device*,int *,int ,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_9 (struct skge_hw*) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (struct skge_hw*) ;
 int VAR_20 ;

__attribute__((used)) static struct net_device *FUNC_12(struct skge_hw *VAR_21, int VAR_22,
           int VAR_23)
{
 struct skge_port *VAR_24;
 struct net_device *VAR_25 = FUNC_1(sizeof(*VAR_24));

 if (!VAR_25)
  return ((void*)0);

 FUNC_0(VAR_25, &VAR_21->pdev->dev);
 VAR_25->netdev_ops = &VAR_18;
 VAR_25->ethtool_ops = &VAR_17;
 VAR_25->watchdog_timeo = VAR_13;
 VAR_25->irq = VAR_21->pdev->irq;


 VAR_25->min_mtu = VAR_6;
 VAR_25->max_mtu = VAR_5;

 if (VAR_23)
  VAR_25->features |= VAR_9;

 VAR_24 = FUNC_6(VAR_25);
 FUNC_8(VAR_25, &VAR_24->napi, VAR_19, VAR_8);
 VAR_24->netdev = VAR_25;
 VAR_24->hw = VAR_21;
 VAR_24->msg_enable = FUNC_7(VAR_15, VAR_16);

 VAR_24->tx_ring.count = VAR_3;
 VAR_24->rx_ring.count = VAR_2;


 VAR_24->autoneg = VAR_0;
 VAR_24->flow_control = VAR_7;
 VAR_24->duplex = -1;
 VAR_24->speed = -1;
 VAR_24->advertising = FUNC_9(VAR_21);

 if (FUNC_2(&VAR_21->pdev->dev)) {
  VAR_24->wol = FUNC_11(VAR_21) & VAR_14;
  FUNC_3(&VAR_21->pdev->dev, VAR_24->wol);
 }

 VAR_21->dev[VAR_22] = VAR_25;

 VAR_24->port = VAR_22;


 if (FUNC_4(VAR_21))
     FUNC_10(&VAR_24->link_timer, VAR_20, 0);
 else {
  VAR_25->hw_features = VAR_10 | VAR_12 |
                     VAR_11;
  VAR_25->features |= VAR_25->hw_features;
 }


 FUNC_5(VAR_25->dev_addr, VAR_21->regs + VAR_1 + VAR_22*8, VAR_4);

 return VAR_25;
}
