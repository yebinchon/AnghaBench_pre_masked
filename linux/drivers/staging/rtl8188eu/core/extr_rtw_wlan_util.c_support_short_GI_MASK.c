
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_ext_info {scalar_t__ assoc_AP_vendor; int HT_enable; } ;
struct mlme_ext_priv {int cur_bwmode; struct mlme_ext_info mlmext_info; } ;
struct ieee80211_ht_cap {int cap_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct adapter *VAR_4, struct ieee80211_ht_cap *VAR_5)
{
 unsigned char VAR_6;
 struct mlme_ext_priv *VAR_7 = &VAR_4->mlmeextpriv;
 struct mlme_ext_info *VAR_8 = &VAR_7->mlmext_info;

 if (!(VAR_8->HT_enable))
  return VAR_2;

 if (VAR_8->assoc_AP_vendor == VAR_1)
  return VAR_2;

 VAR_6 = (VAR_7->cur_bwmode & VAR_0) ? 6 : 5;

 if (FUNC_0(VAR_5->cap_info) & (0x1 << VAR_6))
  return VAR_3;
 else
  return VAR_2;
}
