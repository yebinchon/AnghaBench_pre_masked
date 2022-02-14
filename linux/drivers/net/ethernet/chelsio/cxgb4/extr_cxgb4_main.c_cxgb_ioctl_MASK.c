
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int const tx_type; int rx_filter; } ;
struct port_info {int mdio_addr; int rxtstamp; int ptp_enable; TYPE_2__ tstamp_config; int port_id; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct mii_ioctl_data {int phy_id; int reg_num; int val_in; int val_out; } ;
struct ifreq {int ifr_data; } ;
struct TYPE_4__ {int chip; } ;
struct adapter {unsigned int pf; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (int ,TYPE_2__*,int) ;
 int FUNC_2 (struct adapter*,struct port_info*) ;
 int FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct port_info*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 struct port_info* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct adapter*,unsigned int,int,int,int,int *) ;
 int FUNC_11 (struct adapter*,unsigned int,int,int,int,int ) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_6, struct ifreq *VAR_7, int VAR_8)
{
 unsigned int VAR_9;
 int VAR_10 = 0, VAR_11, VAR_12;
 struct port_info *VAR_13 = FUNC_9(VAR_6);
 struct adapter *VAR_14 = VAR_13->adapter;
 struct mii_ioctl_data *VAR_15 = (struct mii_ioctl_data *)&VAR_7->ifr_data;

 switch (VAR_8) {
 case 131:
  if (VAR_13->mdio_addr < 0)
   return -VAR_2;
  VAR_15->phy_id = VAR_13->mdio_addr;
  break;
 case 130:
 case 128:
  if (FUNC_7(VAR_15->phy_id)) {
   VAR_11 = FUNC_8(VAR_15->phy_id);
   VAR_12 = FUNC_6(VAR_15->phy_id);
  } else if (VAR_15->phy_id < 32) {
   VAR_11 = VAR_15->phy_id;
   VAR_12 = 0;
   VAR_15->reg_num &= 0x1f;
  } else
   return -VAR_1;

  VAR_9 = VAR_13->adapter->pf;
  if (VAR_8 == 130)
   VAR_10 = FUNC_10(VAR_13->adapter, VAR_9, VAR_11, VAR_12,
      VAR_15->reg_num, &VAR_15->val_out);
  else
   VAR_10 = FUNC_11(VAR_13->adapter, VAR_9, VAR_11, VAR_12,
      VAR_15->reg_num, VAR_15->val_in);
  break;
 case 132:
  return FUNC_1(VAR_7->ifr_data, &VAR_13->tstamp_config,
        sizeof(VAR_13->tstamp_config)) ?
   -VAR_0 : 0;
 case 129:
  if (FUNC_0(&VAR_13->tstamp_config, VAR_7->ifr_data,
       sizeof(VAR_13->tstamp_config)))
   return -VAR_0;

  if (!FUNC_5(VAR_14->params.chip)) {
   switch (VAR_13->tstamp_config.tx_type) {
   case 134:
   case 133:
    break;
   default:
    return -VAR_3;
   }

   switch (VAR_13->tstamp_config.rx_filter) {
   case 142:
    VAR_13->rxtstamp = 0;
    break;
   case 140:
   case 136:
    FUNC_4(VAR_13, VAR_13->port_id,
        VAR_5);
    break;
   case 138:
    FUNC_4(VAR_13, VAR_13->port_id,
        VAR_4);
    break;
   case 143:
   case 139:
   case 141:
   case 135:
   case 137:
    VAR_13->rxtstamp = 1;
    break;
   default:
    VAR_13->tstamp_config.rx_filter =
     142;
    return -VAR_3;
   }

   if ((VAR_13->tstamp_config.tx_type == 134) &&
       (VAR_13->tstamp_config.rx_filter ==
    142)) {
    if (FUNC_3(VAR_14, VAR_13->port_id) >= 0)
     VAR_13->ptp_enable = 0;
   }

   if (VAR_13->tstamp_config.rx_filter !=
    142) {
    if (FUNC_2(VAR_14,
         VAR_13) >= 0)
     VAR_13->ptp_enable = 1;
   }
  } else {

   switch (VAR_13->tstamp_config.rx_filter) {
   case 142:
   VAR_13->rxtstamp = 0;
   break;
   case 143:
   VAR_13->rxtstamp = 1;
   break;
   default:
   VAR_13->tstamp_config.rx_filter =
   142;
   return -VAR_3;
   }
  }
  return FUNC_1(VAR_7->ifr_data, &VAR_13->tstamp_config,
        sizeof(VAR_13->tstamp_config)) ?
   -VAR_0 : 0;
 default:
  return -VAR_2;
 }
 return VAR_10;
}
