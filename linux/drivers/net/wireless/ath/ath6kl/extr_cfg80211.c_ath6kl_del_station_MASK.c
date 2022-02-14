
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int dummy; } ;
struct station_del_parameters {int * mac; } ;
struct net_device {int dummy; } ;
struct ath6kl_vif {int fw_vif_idx; } ;
struct ath6kl {int wmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath6kl* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int ,int const*,int ) ;
 int * VAR_2 ;
 struct ath6kl_vif* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_3, struct net_device *VAR_4,
         struct station_del_parameters *VAR_5)
{
 struct ath6kl *VAR_6 = FUNC_0(VAR_4);
 struct ath6kl_vif *VAR_7 = FUNC_2(VAR_4);
 const u8 *VAR_8 = VAR_5->mac ? VAR_5->mac : VAR_2;

 return FUNC_1(VAR_6->wmi, VAR_7->fw_vif_idx, VAR_1,
          VAR_8, VAR_0);
}
