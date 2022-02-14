
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union iwreq_data {int name; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ phy_type; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; scalar_t__ dev_state; TYPE_1__ reg; } ;
struct iw_request_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct ks_wlan_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_5,
       struct iw_request_info *VAR_6,
       union iwreq_data *VAR_7,
       char *VAR_8)
{
 struct ks_wlan_private *VAR_9 = FUNC_0(VAR_5);

 if (VAR_9->sleep_mode == VAR_4)
  return -VAR_3;


 if (VAR_9->dev_state < VAR_0)
  FUNC_1(VAR_7->name, "NOT READY!");
 else if (VAR_9->reg.phy_type == VAR_1)
  FUNC_1(VAR_7->name, "IEEE 802.11b");
 else if (VAR_9->reg.phy_type == VAR_2)
  FUNC_1(VAR_7->name, "IEEE 802.11g");
 else
  FUNC_1(VAR_7->name, "IEEE 802.11b/g");

 return 0;
}
