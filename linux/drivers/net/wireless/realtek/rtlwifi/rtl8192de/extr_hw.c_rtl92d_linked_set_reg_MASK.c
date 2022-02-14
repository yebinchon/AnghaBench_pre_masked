
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct rtl_phy {size_t current_channel; TYPE_1__* iqk_matrix; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int iqk_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int,int ,char*,size_t) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

void FUNC_4(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_3(VAR_3);
 struct rtl_phy *VAR_5 = &(VAR_4->phy);
 u8 VAR_6;
 u8 VAR_7 = VAR_5->current_channel;

 VAR_6 = FUNC_1(VAR_7);
 if (!VAR_5->iqk_matrix[VAR_6].iqk_done) {
  FUNC_0(VAR_4, VAR_1 | VAR_0, VAR_2,
    "Do IQK for channel:%d\n", VAR_7);
  FUNC_2(VAR_3);
 }
}
