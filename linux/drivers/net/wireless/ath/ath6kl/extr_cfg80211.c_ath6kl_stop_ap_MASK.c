
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct ath6kl_vif {scalar_t__ nw_type; int ndev; int flags; int fw_vif_idx; } ;
struct ath6kl {int wmi; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ath6kl* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ath6kl_vif*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;
 struct ath6kl_vif* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct wiphy *VAR_4, struct net_device *VAR_5)
{
 struct ath6kl *VAR_6 = FUNC_0(VAR_5);
 struct ath6kl_vif *VAR_7 = FUNC_4(VAR_5);

 if (VAR_7->nw_type != VAR_0)
  return -VAR_3;
 if (!FUNC_6(VAR_1, &VAR_7->flags))
  return -VAR_2;

 FUNC_2(VAR_6->wmi, VAR_7->fw_vif_idx);
 FUNC_3(VAR_1, &VAR_7->flags);
 FUNC_5(VAR_7->ndev);


 return FUNC_1(VAR_7);
}
