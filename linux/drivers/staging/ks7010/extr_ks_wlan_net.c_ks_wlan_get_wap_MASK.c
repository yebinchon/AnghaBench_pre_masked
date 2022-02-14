
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sa_family; int sa_data; } ;
union iwreq_data {TYPE_2__ ap_addr; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int bssid; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; TYPE_1__ current_ap; int connect_status; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct ks_wlan_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, struct iw_request_info *VAR_4,
      union iwreq_data *VAR_5, char *VAR_6)
{
 struct ks_wlan_private *VAR_7 = FUNC_3(VAR_3);

 if (VAR_7->sleep_mode == VAR_2)
  return -VAR_1;


 if (FUNC_2(VAR_7->connect_status))
  FUNC_1(VAR_5->ap_addr.sa_data, VAR_7->current_ap.bssid);
 else
  FUNC_0(VAR_5->ap_addr.sa_data);

 VAR_5->ap_addr.sa_family = VAR_0;

 return 0;
}
