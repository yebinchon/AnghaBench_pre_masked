
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; scalar_t__ disabled; } ;
union iwreq_data {TYPE_2__ frag; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int fragment; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; int need_commit; TYPE_1__ reg; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct ks_wlan_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_5,
       struct iw_request_info *VAR_6,
       union iwreq_data *VAR_7, char *VAR_8)
{
 struct ks_wlan_private *VAR_9 = FUNC_0(VAR_5);
 int VAR_10 = VAR_7->frag.value;

 if (VAR_9->sleep_mode == VAR_3)
  return -VAR_2;


 if (VAR_7->frag.disabled)
  VAR_10 = 2346;
 if ((VAR_10 < 256) || (VAR_10 > 2346))
  return -VAR_1;

 VAR_10 &= ~0x1;
 VAR_9->reg.fragment = VAR_10;
 VAR_9->need_commit |= VAR_4;

 return -VAR_0;
}
