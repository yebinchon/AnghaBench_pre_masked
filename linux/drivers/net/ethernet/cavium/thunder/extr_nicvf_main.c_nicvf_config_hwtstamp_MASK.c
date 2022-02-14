
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicvf {int hw_rx_tstamp; int ptp_clock; } ;
struct net_device {int dummy; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int tx_type; int rx_filter; scalar_t__ flags; } ;
typedef int config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct hwtstamp_config*,int ,int) ;
 scalar_t__ FUNC_1 (int ,struct hwtstamp_config*,int) ;
 struct nicvf* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct nicvf*,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4, struct ifreq *VAR_5)
{
 struct hwtstamp_config VAR_6;
 struct nicvf *VAR_7 = FUNC_2(VAR_4);

 if (!VAR_7->ptp_clock)
  return -VAR_2;

 if (FUNC_0(&VAR_6, VAR_5->ifr_data, sizeof(VAR_6)))
  return -VAR_0;


 if (VAR_6.flags)
  return -VAR_1;

 switch (VAR_6.tx_type) {
 case 129:
 case 128:
  break;
 default:
  return -VAR_3;
 }

 switch (VAR_6.rx_filter) {
 case 143:
  VAR_7->hw_rx_tstamp = 0;
  break;
 case 144:
 case 130:
 case 141:
 case 140:
 case 142:
 case 133:
 case 132:
 case 134:
 case 136:
 case 135:
 case 137:
 case 138:
 case 131:
 case 139:
  VAR_7->hw_rx_tstamp = 1;
  VAR_6.rx_filter = 144;
  break;
 default:
  return -VAR_3;
 }

 if (FUNC_3(VAR_4))
  FUNC_4(VAR_7, VAR_7->hw_rx_tstamp);

 if (FUNC_1(VAR_5->ifr_data, &VAR_6, sizeof(VAR_6)))
  return -VAR_0;

 return 0;
}
