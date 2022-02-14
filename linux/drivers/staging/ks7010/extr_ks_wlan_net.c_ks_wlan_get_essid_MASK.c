
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ length; int flags; } ;
union iwreq_data {TYPE_3__ essid; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ size; int body; } ;
struct TYPE_5__ {TYPE_1__ ssid; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; TYPE_2__ reg; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 struct ks_wlan_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
        struct iw_request_info *VAR_3,
        union iwreq_data *VAR_4, char *VAR_5)
{
 struct ks_wlan_private *VAR_6 = FUNC_1(VAR_2);

 if (VAR_6->sleep_mode == VAR_1)
  return -VAR_0;





 if (VAR_6->reg.ssid.size != 0) {

  FUNC_0(VAR_5, VAR_6->reg.ssid.body, VAR_6->reg.ssid.size);




  VAR_4->essid.length = VAR_6->reg.ssid.size;
  VAR_4->essid.flags = 1;
 } else {
  VAR_4->essid.length = 0;
  VAR_4->essid.flags = 0;
 }

 return 0;
}
