
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct net_device {int dummy; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; int nick; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ks_wlan_private* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
       struct iw_request_info *VAR_3,
       union iwreq_data *VAR_4, char *VAR_5)
{
 struct ks_wlan_private *VAR_6 = FUNC_0(VAR_2);

 if (VAR_6->sleep_mode == VAR_1)
  return -VAR_0;


 FUNC_2(VAR_5, VAR_6->nick, 16);
 VAR_5[16] = '\0';
 VAR_4->data.length = FUNC_1(VAR_5) + 1;

 return 0;
}
