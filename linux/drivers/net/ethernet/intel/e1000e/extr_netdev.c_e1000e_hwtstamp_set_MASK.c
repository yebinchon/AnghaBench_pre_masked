
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int rx_filter; } ;
struct e1000_adapter {int dummy; } ;
typedef int config ;


 int VAR_0 ;






 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hwtstamp_config*,int ,int) ;
 scalar_t__ FUNC_1 (int ,struct hwtstamp_config*,int) ;
 int FUNC_2 (struct e1000_adapter*,struct hwtstamp_config*) ;
 struct e1000_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, struct ifreq *VAR_3)
{
 struct e1000_adapter *VAR_4 = FUNC_3(VAR_2);
 struct hwtstamp_config VAR_5;
 int VAR_6;

 if (FUNC_0(&VAR_5, VAR_3->ifr_data, sizeof(VAR_5)))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;

 switch (VAR_5.rx_filter) {
 case 129:
 case 131:
 case 128:
 case 130:
 case 132:
 case 133:





  VAR_5.rx_filter = VAR_1;
  break;
 default:
  break;
 }

 return FUNC_1(VAR_3->ifr_data, &VAR_5,
       sizeof(VAR_5)) ? -VAR_0 : 0;
}
