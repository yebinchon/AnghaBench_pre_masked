
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct lio {int dummy; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int tx_type; int rx_filter; scalar_t__ flags; } ;
typedef int conf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lio* FUNC_0 (struct net_device*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct hwtstamp_config*,int ,int) ;
 scalar_t__ FUNC_2 (int ,struct hwtstamp_config*,int) ;
 int FUNC_3 (struct lio*,int ) ;
 int FUNC_4 (struct lio*,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4, struct ifreq *VAR_5)
{
 struct lio *VAR_6 = FUNC_0(VAR_4);
 struct hwtstamp_config VAR_7;

 if (FUNC_1(&VAR_7, VAR_5->ifr_data, sizeof(VAR_7)))
  return -VAR_0;

 if (VAR_7.flags)
  return -VAR_1;

 switch (VAR_7.tx_type) {
 case 128:
 case 129:
  break;
 default:
  return -VAR_2;
 }

 switch (VAR_7.rx_filter) {
 case 144:
  break;
 case 145:
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
 case 143:
  VAR_7.rx_filter = 145;
  break;
 default:
  return -VAR_2;
 }

 if (VAR_7.rx_filter == 145)
  FUNC_4(VAR_6, VAR_3);

 else
  FUNC_3(VAR_6, VAR_3);

 return FUNC_2(VAR_5->ifr_data, &VAR_7, sizeof(VAR_7)) ? -VAR_0 : 0;
}
