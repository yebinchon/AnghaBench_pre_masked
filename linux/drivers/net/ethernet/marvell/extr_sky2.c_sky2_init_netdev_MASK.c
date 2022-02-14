
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr {int sa_data; int member_0; } ;
struct TYPE_6__ {int syncp; } ;
struct TYPE_5__ {int syncp; } ;
struct sky2_port {int flags; int duplex; int speed; int wol; unsigned int port; int rx_pending; int tx_ring_size; int tx_pending; int phy_lock; int advertising; int flow_mode; TYPE_2__ rx_stats; TYPE_1__ tx_stats; int msg_enable; struct sky2_hw* hw; struct net_device* netdev; } ;
struct sky2_hw {scalar_t__ chip_id; int flags; scalar_t__ regs; TYPE_3__* pdev; struct net_device** dev; } ;
struct net_device {int hw_features; int features; int dev_addr; int max_mtu; int min_mtu; int vlan_features; int * netdev_ops; int watchdog_timeo; int * ethtool_ops; int irq; } ;
struct TYPE_8__ {int of_node; } ;
struct TYPE_7__ {TYPE_4__ dev; int irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (void const*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct net_device*,TYPE_4__*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 struct net_device* FUNC_2 (int) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,void const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,scalar_t__,int ) ;
 struct sky2_port* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,char*) ;
 int FUNC_10 (int ,int ) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_28 ;
 int * VAR_29 ;
 scalar_t__ FUNC_13 (struct net_device*,struct sockaddr*) ;
 int FUNC_14 (struct sky2_hw*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static struct net_device *FUNC_17(struct sky2_hw *VAR_30, unsigned VAR_31,
        int VAR_32, int VAR_33)
{
 struct sky2_port *VAR_34;
 struct net_device *VAR_35 = FUNC_2(sizeof(*VAR_34));
 const void *VAR_36;

 if (!VAR_35)
  return ((void*)0);

 FUNC_1(VAR_35, &VAR_30->pdev->dev);
 VAR_35->irq = VAR_30->pdev->irq;
 VAR_35->ethtool_ops = &VAR_28;
 VAR_35->watchdog_timeo = VAR_25;
 VAR_35->netdev_ops = &VAR_29[VAR_31];

 VAR_34 = FUNC_8(VAR_35);
 VAR_34->netdev = VAR_35;
 VAR_34->hw = VAR_30;
 VAR_34->msg_enable = FUNC_10(VAR_26, VAR_27);

 FUNC_16(&VAR_34->tx_stats.syncp);
 FUNC_16(&VAR_34->rx_stats.syncp);


 VAR_34->flags = VAR_20 | VAR_19;
 if (VAR_30->chip_id != VAR_4)
  VAR_35->hw_features |= VAR_14;

 VAR_34->flow_mode = VAR_9;

 VAR_34->duplex = -1;
 VAR_34->speed = -1;
 VAR_34->advertising = FUNC_14(VAR_30);
 VAR_34->wol = VAR_33;

 FUNC_15(&VAR_34->phy_lock);

 VAR_34->tx_pending = VAR_24;
 VAR_34->tx_ring_size = FUNC_12(VAR_24);
 VAR_34->rx_pending = VAR_18;

 VAR_30->dev[VAR_31] = VAR_35;

 VAR_34->port = VAR_31;

 VAR_35->hw_features |= VAR_13 | VAR_16 | VAR_17;

 if (VAR_32)
  VAR_35->features |= VAR_10;


 if (!(VAR_30->flags & VAR_21))
  VAR_35->hw_features |= VAR_15;

 if (!(VAR_30->flags & VAR_22)) {
  VAR_35->hw_features |= VAR_12 |
        VAR_11;
  VAR_35->vlan_features |= VAR_23;
 }

 VAR_35->features |= VAR_35->hw_features;


 VAR_35->min_mtu = VAR_8;
 if (VAR_30->chip_id == VAR_2 ||
     VAR_30->chip_id == VAR_3)
  VAR_35->max_mtu = VAR_6;
 else
  VAR_35->max_mtu = VAR_7;





 VAR_36 = FUNC_11(VAR_30->pdev->dev.of_node);
 if (!FUNC_0(VAR_36))
  FUNC_4(VAR_35->dev_addr, VAR_36);
 else
  FUNC_7(VAR_35->dev_addr, VAR_30->regs + VAR_1 + VAR_31 * 8,
         VAR_5);


 if (!FUNC_5(VAR_35->dev_addr)) {
  struct sockaddr VAR_37 = { VAR_0 };

  FUNC_9(VAR_35,
       "Invalid MAC address, defaulting to random\n");
  FUNC_3(VAR_35);
  FUNC_6(VAR_37.sa_data, VAR_35->dev_addr, VAR_5);
  if (FUNC_13(VAR_35, &VAR_37))
   FUNC_9(VAR_35, "Failed to set MAC address.\n");
 }

 return VAR_35;
}
