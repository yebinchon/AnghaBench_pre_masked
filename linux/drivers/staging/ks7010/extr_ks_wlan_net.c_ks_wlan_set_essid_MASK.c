
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t length; int flags; } ;
union iwreq_data {TYPE_1__ essid; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {size_t size; int body; } ;
struct TYPE_6__ {TYPE_2__ ssid; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; int need_commit; TYPE_3__ reg; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ks_wlan_private*,int ) ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (int ,int ,int) ;
 struct ks_wlan_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_5,
        struct iw_request_info *VAR_6,
        union iwreq_data *VAR_7, char *VAR_8)
{
 struct ks_wlan_private *VAR_9 = FUNC_3(VAR_5);
 size_t VAR_10;

 if (VAR_9->sleep_mode == VAR_3)
  return -VAR_1;



 if (!VAR_7->essid.flags) {

  FUNC_2(VAR_9->reg.ssid.body, 0, sizeof(VAR_9->reg.ssid.body));
  VAR_9->reg.ssid.size = 0;
 } else {
  VAR_10 = VAR_7->essid.length;

  if (VAR_10 > 0 && VAR_8[VAR_10 - 1] == '\0')
   VAR_10--;


  if (VAR_10 > VAR_2)
   return -VAR_0;


  FUNC_2(VAR_9->reg.ssid.body, 0, sizeof(VAR_9->reg.ssid.body));
  FUNC_1(VAR_9->reg.ssid.body, VAR_8, VAR_10);
  VAR_9->reg.ssid.size = VAR_10;
 }

 VAR_9->need_commit |= VAR_4;

 FUNC_0(VAR_9, VAR_9->need_commit);
 VAR_9->need_commit = 0;
 return 0;
}
