
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union iwreq_data {scalar_t__ mode; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int operation_mode; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; int need_commit; TYPE_1__ reg; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct ks_wlan_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_9,
       struct iw_request_info *VAR_10,
       union iwreq_data *VAR_11, char *VAR_12)
{
 struct ks_wlan_private *VAR_13 = FUNC_0(VAR_9);

 if (VAR_13->sleep_mode == VAR_7)
  return -VAR_2;

 if (VAR_11->mode != VAR_3 &&
     VAR_11->mode != VAR_4)
  return -VAR_1;

 VAR_13->reg.operation_mode = (VAR_11->mode == VAR_3) ?
        VAR_5 : VAR_6;
 VAR_13->need_commit |= VAR_8;

 return -VAR_0;
}
