
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int tx_type; scalar_t__ rx_filter; } ;
struct dpaa_priv {int tx_tstamp; int rx_tstamp; TYPE_1__* mac_dev; } ;
typedef int config ;
struct TYPE_2__ {int fman_mac; int (* set_tstamp ) (int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;


 scalar_t__ FUNC_0 (struct hwtstamp_config*,int ,int) ;
 scalar_t__ FUNC_1 (int ,struct hwtstamp_config*,int) ;
 struct dpaa_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4, struct ifreq *VAR_5, int VAR_6)
{
 struct dpaa_priv *VAR_7 = FUNC_2(VAR_4);
 struct hwtstamp_config VAR_8;

 if (FUNC_0(&VAR_8, VAR_5->ifr_data, sizeof(VAR_8)))
  return -VAR_0;

 switch (VAR_8.tx_type) {
 case 129:



  VAR_7->tx_tstamp = 0;
  break;
 case 128:
  VAR_7->mac_dev->set_tstamp(VAR_7->mac_dev->fman_mac, 1);
  VAR_7->tx_tstamp = 1;
  break;
 default:
  return -VAR_1;
 }

 if (VAR_8.rx_filter == VAR_3) {



  VAR_7->rx_tstamp = 0;
 } else {
  VAR_7->mac_dev->set_tstamp(VAR_7->mac_dev->fman_mac, 1);
  VAR_7->rx_tstamp = 1;

  VAR_8.rx_filter = VAR_2;
 }

 return FUNC_1(VAR_5->ifr_data, &VAR_8, sizeof(VAR_8)) ?
   -VAR_0 : 0;
}
