
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_phy {void* rf_type; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_hal {int macphymode; void* current_bandtype; void* bandset; int interfaceindex; int version; } ;
struct ieee80211_hw {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;


 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 struct rtl_hal* FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

void FUNC_2(struct ieee80211_hw *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_1(VAR_7);
 struct rtl_hal *VAR_9 = FUNC_0(FUNC_1(VAR_7));
 struct rtl_phy *VAR_10 = &(VAR_8->phy);

 switch (VAR_9->macphymode) {
 case 129:
  VAR_10->rf_type = VAR_4;
  VAR_9->version |= VAR_6;
  VAR_9->bandset = VAR_2;
  VAR_9->current_bandtype = VAR_0;
  break;

 case 128:
  VAR_10->rf_type = VAR_4;
  VAR_9->version |= VAR_6;
  VAR_9->bandset = VAR_2;
  VAR_9->current_bandtype = VAR_0;
  break;

 case 130:
  VAR_10->rf_type = VAR_3;
  VAR_9->version &= VAR_5;

  if (VAR_9->interfaceindex == 0) {
   VAR_9->bandset = VAR_1;
   VAR_9->current_bandtype = VAR_1;
  } else {
   VAR_9->bandset = VAR_0;
   VAR_9->current_bandtype = VAR_0;
  }
  break;
 default:
  break;
 }
}
