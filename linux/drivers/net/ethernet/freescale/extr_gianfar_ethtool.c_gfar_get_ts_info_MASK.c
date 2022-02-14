
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptp_qoriq {int phc_index; } ;
struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;
struct gfar_private {int device_flags; } ;
struct ethtool_ts_info {int phc_index; int so_timestamping; int tx_types; int rx_filters; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct gfar_private* FUNC_0 (struct net_device*) ;
 struct device_node* FUNC_1 (int *,int *,char*) ;
 struct platform_device* FUNC_2 (struct device_node*) ;
 struct ptp_qoriq* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_10,
       struct ethtool_ts_info *VAR_11)
{
 struct gfar_private *VAR_12 = FUNC_0(VAR_10);
 struct platform_device *VAR_13;
 struct device_node *VAR_14;
 struct ptp_qoriq *VAR_15 = ((void*)0);

 VAR_11->phc_index = -1;

 if (!(VAR_12->device_flags & VAR_0)) {
  VAR_11->so_timestamping = VAR_7 |
     VAR_8;
  return 0;
 }

 VAR_14 = FUNC_1(((void*)0), ((void*)0), "fsl,etsec-ptp");
 if (VAR_14) {
  VAR_13 = FUNC_2(VAR_14);
  if (VAR_13)
   VAR_15 = FUNC_3(VAR_13);
 }

 if (VAR_15)
  VAR_11->phc_index = VAR_15->phc_index;

 VAR_11->so_timestamping = VAR_9 |
    VAR_6 |
    VAR_5;
 VAR_11->tx_types = (1 << VAR_3) |
    (1 << VAR_4);
 VAR_11->rx_filters = (1 << VAR_2) |
      (1 << VAR_1);
 return 0;
}
