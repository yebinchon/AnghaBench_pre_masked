
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct net_device {int dummy; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; int nick; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;
 struct ks_wlan_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4,
       struct iw_request_info *VAR_5,
       union iwreq_data *VAR_6, char *VAR_7)
{
 struct ks_wlan_private *VAR_8 = FUNC_2(VAR_4);

 if (VAR_8->sleep_mode == VAR_3)
  return -VAR_2;



 if (VAR_6->data.length > 16 + 1)
  return -VAR_0;

 FUNC_1(VAR_8->nick, 0, sizeof(VAR_8->nick));
 FUNC_0(VAR_8->nick, VAR_7, VAR_6->data.length);

 return -VAR_1;
}
