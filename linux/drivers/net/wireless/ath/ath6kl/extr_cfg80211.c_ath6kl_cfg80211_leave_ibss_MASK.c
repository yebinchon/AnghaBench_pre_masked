
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct ath6kl_vif {scalar_t__ ssid_len; int ssid; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath6kl_vif*) ;
 int FUNC_1 (struct ath6kl_vif*) ;
 int FUNC_2 (int ,int ,int) ;
 struct ath6kl_vif* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct wiphy *VAR_1,
          struct net_device *VAR_2)
{
 struct ath6kl_vif *VAR_3 = FUNC_3(VAR_2);

 if (!FUNC_0(VAR_3))
  return -VAR_0;

 FUNC_1(VAR_3);
 FUNC_2(VAR_3->ssid, 0, sizeof(VAR_3->ssid));
 VAR_3->ssid_len = 0;

 return 0;
}
