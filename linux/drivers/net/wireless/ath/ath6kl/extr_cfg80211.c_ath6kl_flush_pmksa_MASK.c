
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct ath6kl_vif {int bssid; int fw_vif_idx; int flags; } ;
struct ath6kl {int wmi; } ;


 int VAR_0 ;
 struct ath6kl* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int ,int *,int) ;
 struct ath6kl_vif* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct wiphy *VAR_1, struct net_device *VAR_2)
{
 struct ath6kl *VAR_3 = FUNC_0(VAR_2);
 struct ath6kl_vif *VAR_4 = FUNC_2(VAR_2);

 if (FUNC_3(VAR_0, &VAR_4->flags))
  return FUNC_1(VAR_3->wmi, VAR_4->fw_vif_idx,
            VAR_4->bssid, ((void*)0), 0);
 return 0;
}
