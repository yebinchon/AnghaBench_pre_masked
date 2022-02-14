
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptp_qoriq {int phc_index; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {struct device* parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct ethtool_ts_info {int phc_index; int so_timestamping; int tx_types; int rx_filters; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct platform_device* FUNC_0 (struct device_node*) ;
 struct device_node* FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*,char*,int ) ;
 struct ptp_qoriq* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_7,
       struct ethtool_ts_info *VAR_8)
{
 struct device *VAR_9 = VAR_7->dev.parent;
 struct device_node *VAR_10 = VAR_9->of_node;
 struct device_node *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 struct platform_device *VAR_13 = ((void*)0);
 struct ptp_qoriq *VAR_14 = ((void*)0);

 VAR_8->phc_index = -1;

 VAR_11 = FUNC_1(VAR_10);
 if (VAR_11)
  VAR_12 = FUNC_2(VAR_11, "ptimer-handle", 0);

 if (VAR_12)
  VAR_13 = FUNC_0(VAR_12);

 if (VAR_13)
  VAR_14 = FUNC_3(VAR_13);

 if (VAR_14)
  VAR_8->phc_index = VAR_14->phc_index;

 VAR_8->so_timestamping = VAR_6 |
    VAR_5 |
    VAR_4;
 VAR_8->tx_types = (1 << VAR_2) |
    (1 << VAR_3);
 VAR_8->rx_filters = (1 << VAR_1) |
      (1 << VAR_0);

 return 0;
}
