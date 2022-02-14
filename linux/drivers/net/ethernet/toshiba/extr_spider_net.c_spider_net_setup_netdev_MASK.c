
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct spider_net_card {struct net_device* netdev; TYPE_1__* pdev; scalar_t__ ignore_rx_ramfull; scalar_t__ num_rx_ints; int napi; int aneg_timer; scalar_t__ aneg_count; int tx_timer; } ;
struct sockaddr {int sa_data; } ;
struct net_device {int hw_features; int features; int name; int dev; int irq; int max_mtu; int min_mtu; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,int const*,int ) ;
 scalar_t__ FUNC_3 (struct spider_net_card*) ;
 int FUNC_4 (struct net_device*,int *,int ,int ) ;
 int * FUNC_5 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,struct net_device*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (struct net_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (struct net_device*,struct sockaddr*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_13(struct spider_net_card *VAR_12)
{
 int VAR_13;
 struct net_device *VAR_14 = VAR_12->netdev;
 struct device_node *VAR_15;
 struct sockaddr VAR_16;
 const u8 *VAR_17;

 FUNC_0(VAR_14, &VAR_12->pdev->dev);

 FUNC_7(VAR_12->pdev, VAR_14);

 FUNC_12(&VAR_12->tx_timer, VAR_9, 0);
 VAR_14->irq = VAR_12->pdev->irq;

 VAR_12->aneg_count = 0;
 FUNC_12(&VAR_12->aneg_timer, VAR_10, 0);

 FUNC_4(VAR_14, &VAR_12->napi,
         VAR_11, VAR_7);

 FUNC_11(VAR_14);

 VAR_14->hw_features = VAR_4 | VAR_2;
 if (VAR_8)
  VAR_14->features |= VAR_4;
 VAR_14->features |= VAR_2 | VAR_3;




 VAR_14->min_mtu = VAR_6;
 VAR_14->max_mtu = VAR_5;

 VAR_14->irq = VAR_12->pdev->irq;
 VAR_12->num_rx_ints = 0;
 VAR_12->ignore_rx_ramfull = 0;

 VAR_15 = FUNC_6(VAR_12->pdev);
 if (!VAR_15)
  return -VAR_0;

 VAR_17 = FUNC_5(VAR_15, "local-mac-address", ((void*)0));
 if (!VAR_17)
  return -VAR_0;
 FUNC_2(VAR_16.sa_data, VAR_17, VAR_1);

 VAR_13 = FUNC_10(VAR_14, &VAR_16);
 if ((VAR_13) && (FUNC_3(VAR_12)))
  FUNC_1(&VAR_12->netdev->dev,
          "Failed to set MAC address: %i\n", VAR_13);

 VAR_13 = FUNC_9(VAR_14);
 if (VAR_13) {
  if (FUNC_3(VAR_12))
   FUNC_1(&VAR_12->netdev->dev,
           "Couldn't register net_device: %i\n", VAR_13);
  return VAR_13;
 }

 if (FUNC_3(VAR_12))
  FUNC_8("Initialized device %s.\n", VAR_14->name);

 return 0;
}
