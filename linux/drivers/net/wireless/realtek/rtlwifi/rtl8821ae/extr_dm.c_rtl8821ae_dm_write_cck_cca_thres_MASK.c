
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dig_t {scalar_t__ cur_cck_cca_thres; scalar_t__ pre_cck_cca_thres; } ;
struct rtl_priv {struct dig_t dm_digtable; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct rtl_priv*,int ,scalar_t__) ;

void FUNC_2(struct ieee80211_hw *VAR_1, u8 VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_0(VAR_1);
 struct dig_t *VAR_4 = &VAR_3->dm_digtable;

 if (VAR_4->cur_cck_cca_thres != VAR_2)
  FUNC_1(VAR_3, VAR_0, VAR_2);

 VAR_4->pre_cck_cca_thres = VAR_4->cur_cck_cca_thres;
 VAR_4->cur_cck_cca_thres = VAR_2;
}
