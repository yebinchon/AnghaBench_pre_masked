
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sa_data; } ;
union iwreq_data {TYPE_1__ ap_addr; } ;
typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ operation_mode; scalar_t__ bssid; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; int need_commit; TYPE_2__ reg; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*,char*,scalar_t__) ;
 struct ks_wlan_private* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_7, struct iw_request_info *VAR_8,
      union iwreq_data *VAR_9, char *VAR_10)
{
 struct ks_wlan_private *VAR_11 = FUNC_4(VAR_7);

 if (VAR_11->sleep_mode == VAR_5)
  return -VAR_2;


 if (VAR_11->reg.operation_mode != VAR_3 &&
     VAR_11->reg.operation_mode != VAR_4) {
  FUNC_0(VAR_11->reg.bssid);
  return -VAR_1;
 }

 FUNC_1(VAR_11->reg.bssid, VAR_9->ap_addr.sa_data);
 if (FUNC_2((u8 *)VAR_11->reg.bssid))
  VAR_11->need_commit |= VAR_6;

 FUNC_3(VAR_7, "bssid = %pM\n", VAR_11->reg.bssid);


 if (VAR_11->need_commit) {
  VAR_11->need_commit |= VAR_6;
  return -VAR_0;
 }
 return 0;
}
