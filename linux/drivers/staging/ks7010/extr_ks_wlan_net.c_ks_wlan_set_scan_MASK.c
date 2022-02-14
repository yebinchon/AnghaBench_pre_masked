
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int flags; } ;
union iwreq_data {TYPE_1__ data; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int sme_flag; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; TYPE_2__ sme_i; scalar_t__ scan_ssid_len; int scan_ssid; } ;
struct iw_scan_req {int essid; scalar_t__ essid_len; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ks_wlan_private*,int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 struct ks_wlan_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_5,
       struct iw_request_info *VAR_6,
       union iwreq_data *VAR_7, char *VAR_8)
{
 struct ks_wlan_private *VAR_9 = FUNC_2(VAR_5);
 struct iw_scan_req *VAR_10 = ((void*)0);

 if (VAR_9->sleep_mode == VAR_2)
  return -VAR_0;



 if (VAR_7->data.length == sizeof(struct iw_scan_req) &&
     VAR_7->data.flags & VAR_1) {
  VAR_10 = (struct iw_scan_req *)VAR_8;
  VAR_9->scan_ssid_len = VAR_10->essid_len;
  FUNC_1(VAR_9->scan_ssid, VAR_10->essid, VAR_9->scan_ssid_len);
 } else {
  VAR_9->scan_ssid_len = 0;
 }

 VAR_9->sme_i.sme_flag |= VAR_3;
 FUNC_0(VAR_9, VAR_4);



 return 0;
}
