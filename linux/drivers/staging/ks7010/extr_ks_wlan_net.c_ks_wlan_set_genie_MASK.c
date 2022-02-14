
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
struct net_device {int dummy; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ks_wlan_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2,
        struct iw_request_info *VAR_3,
        union iwreq_data *VAR_4, char *VAR_5)
{
 struct ks_wlan_private *VAR_6 = FUNC_0(VAR_2);

 if (VAR_6->sleep_mode == VAR_1)
  return -VAR_0;

 return 0;

}
