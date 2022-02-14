
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct hwtstamp_config {int tx_type; int rx_filter; scalar_t__ flags; } ;
struct macb {int hw_dma_cap; struct hwtstamp_config tstamp_config; } ;
struct ifreq {int ifr_data; } ;
typedef enum macb_bd_control { ____Placeholder_macb_bd_control } macb_bd_control ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct hwtstamp_config*,int ,int) ;
 scalar_t__ FUNC_2 (int ,struct hwtstamp_config*,int) ;
 int FUNC_3 (struct macb*,int) ;
 scalar_t__ FUNC_4 (struct macb*,int,int) ;
 int FUNC_5 (struct macb*,int ) ;
 int FUNC_6 (struct macb*,int ,int) ;
 struct macb* FUNC_7 (struct net_device*) ;

int FUNC_8(struct net_device *VAR_10, struct ifreq *VAR_11, int VAR_12)
{
 enum macb_bd_control VAR_13 = VAR_9;
 enum macb_bd_control VAR_14 = VAR_9;
 struct hwtstamp_config *VAR_15;
 struct macb *VAR_16 = FUNC_7(VAR_10);
 u32 VAR_17;

 VAR_15 = &VAR_16->tstamp_config;
 if ((VAR_16->hw_dma_cap & VAR_4) == 0)
  return -VAR_2;

 if (FUNC_1(VAR_15, VAR_11->ifr_data,
      sizeof(*VAR_15)))
  return -VAR_0;


 if (VAR_15->flags)
  return -VAR_1;

 switch (VAR_15->tx_type) {
 case 130:
  break;
 case 128:
  if (FUNC_3(VAR_16, 1) != 0)
   return -VAR_3;

 case 129:
  VAR_13 = VAR_7;
  break;
 default:
  return -VAR_3;
 }

 switch (VAR_15->rx_filter) {
 case 143:
  break;
 case 140:
  break;
 case 142:
  break;
 case 138:
 case 136:
 case 133:
 case 131:
 case 135:
 case 132:
 case 139:
 case 137:
 case 134:
  VAR_14 = VAR_8;
  VAR_15->rx_filter = 138;
  VAR_17 = FUNC_5(VAR_16, VAR_5);
  FUNC_6(VAR_16, VAR_5, (VAR_17 | FUNC_0(VAR_6)));
  break;
 case 141:
 case 144:
  VAR_14 = VAR_7;
  VAR_15->rx_filter = 144;
  break;
 default:
  VAR_15->rx_filter = 143;
  return -VAR_3;
 }

 if (FUNC_4(VAR_16, VAR_13, VAR_14) != 0)
  return -VAR_3;

 if (FUNC_2(VAR_11->ifr_data, VAR_15, sizeof(*VAR_15)))
  return -VAR_0;
 else
  return 0;
}
