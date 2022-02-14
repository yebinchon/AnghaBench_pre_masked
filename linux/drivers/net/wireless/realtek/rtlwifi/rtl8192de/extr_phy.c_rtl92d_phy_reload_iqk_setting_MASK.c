
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct rtl_hal {int version; int load_imrandiqk_setting_for2g; } ;
struct rtl_phy {int need_iqk; TYPE_1__* iqk_matrix; } ;
struct rtl_priv {struct rtl_hal rtlhal; struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__** value; int iqk_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct rtl_priv*,int,int ,char*,...) ;
 int FUNC_2 (struct ieee80211_hw*,int,scalar_t__**,int ,int) ;
 int FUNC_3 (struct ieee80211_hw*,int,scalar_t__**,int ,int) ;
 size_t FUNC_4 (size_t) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;

void FUNC_7(struct ieee80211_hw *VAR_4, u8 VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_6(VAR_4);
 struct rtl_phy *VAR_7 = &(VAR_6->phy);
 struct rtl_hal *VAR_8 = &(VAR_6->rtlhal);
 u8 VAR_9;

 FUNC_1(VAR_6, VAR_0, VAR_3, "channel %d\n", VAR_5);

 VAR_9 = FUNC_4(VAR_5);
 FUNC_1(VAR_6, VAR_0, VAR_3, "indexforchannel %d done %d\n",
   VAR_9,
   VAR_7->iqk_matrix[VAR_9].iqk_done);
 if (0 && !VAR_7->iqk_matrix[VAR_9].iqk_done &&
  VAR_7->need_iqk) {

  FUNC_1(VAR_6, VAR_2 | VAR_1, VAR_3,
    "Do IQK Matrix reg for channel:%d....\n", VAR_5);
  FUNC_5(VAR_4);
 } else {


  if (((!VAR_8->load_imrandiqk_setting_for2g) &&
      VAR_9 == 0) || VAR_9 > 0) {
   FUNC_1(VAR_6, VAR_2, VAR_3,
     "Just Read IQK Matrix reg for channel:%d....\n",
     VAR_5);
   if ((VAR_7->iqk_matrix[VAR_9].
        value[0] != ((void*)0))
                        )
    FUNC_2(VAR_4, 1,
     VAR_7->iqk_matrix[
     VAR_9].value, 0,
     (VAR_7->iqk_matrix[
     VAR_9].value[0][2] == 0));
   if (FUNC_0(VAR_8->version)) {
    if ((VAR_7->iqk_matrix[
     VAR_9].value[0][4] != 0)
                         )
     FUNC_3(VAR_4,
      1,
      VAR_7->iqk_matrix[
      VAR_9].value, 0,
      (VAR_7->iqk_matrix[
      VAR_9].value[0][6]
      == 0));
   }
  }
 }
 VAR_7->need_iqk = 0;
 FUNC_1(VAR_6, VAR_0, VAR_3, "<====\n");
}
