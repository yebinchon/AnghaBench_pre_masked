
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
struct net_device {int dummy; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; } ;
struct iw_request_info {int dummy; } ;
struct iw_mlme {scalar_t__ cmd; scalar_t__ reason_code; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct net_device*,int *,int*,int *) ;
 struct ks_wlan_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_6,
       struct iw_request_info *VAR_7,
       union iwreq_data *VAR_8, char *VAR_9)
{
 struct ks_wlan_private *VAR_10 = FUNC_1(VAR_6);
 struct iw_mlme *VAR_11 = (struct iw_mlme *)VAR_9;
 __u32 VAR_12 = 1;

 if (VAR_10->sleep_mode == VAR_4)
  return -VAR_1;

 if (VAR_11->cmd != VAR_2 &&
     VAR_11->cmd != VAR_3)
  return -VAR_0;

 if (VAR_11->cmd == VAR_2 &&
     VAR_11->reason_code == VAR_5)
  return 0;

 return FUNC_0(VAR_6, ((void*)0), &VAR_12, ((void*)0));
}
