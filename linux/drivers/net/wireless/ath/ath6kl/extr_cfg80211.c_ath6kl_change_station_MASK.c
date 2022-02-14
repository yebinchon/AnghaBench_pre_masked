
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int dummy; } ;
struct station_parameters {int sta_flags_set; } ;
struct net_device {int dummy; } ;
struct ath6kl_vif {scalar_t__ nw_type; int fw_vif_idx; } ;
struct ath6kl {int wmi; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ath6kl* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,int ,int const*,int ) ;
 int FUNC_3 (struct wiphy*,struct station_parameters*,int ) ;
 struct ath6kl_vif* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct wiphy *VAR_6, struct net_device *VAR_7,
     const u8 *VAR_8,
     struct station_parameters *VAR_9)
{
 struct ath6kl *VAR_10 = FUNC_1(VAR_7);
 struct ath6kl_vif *VAR_11 = FUNC_4(VAR_7);
 int VAR_12;

 if (VAR_11->nw_type != VAR_0)
  return -VAR_2;

 VAR_12 = FUNC_3(VAR_6, VAR_9,
         VAR_1);
 if (VAR_12)
  return VAR_12;

 if (VAR_9->sta_flags_set & FUNC_0(VAR_3))
  return FUNC_2(VAR_10->wmi, VAR_11->fw_vif_idx,
           VAR_4, VAR_8, 0);
 return FUNC_2(VAR_10->wmi, VAR_11->fw_vif_idx,
          VAR_5, VAR_8, 0);
}
