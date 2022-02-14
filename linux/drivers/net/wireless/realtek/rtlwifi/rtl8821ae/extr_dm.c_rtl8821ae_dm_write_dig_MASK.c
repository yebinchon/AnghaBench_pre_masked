
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ rf_type; } ;
struct dig_t {scalar_t__ cur_igvalue; scalar_t__ stop_dig; } ;
struct rtl_priv {TYPE_1__ phy; struct dig_t dm_digtable; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int ,scalar_t__) ;

void FUNC_2(struct ieee80211_hw *VAR_4, u8 VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_0(VAR_4);
 struct dig_t *VAR_7 = &VAR_6->dm_digtable;

 if (VAR_7->stop_dig)
  return;

 if (VAR_7->cur_igvalue != VAR_5) {
  FUNC_1(VAR_4, VAR_1,
         VAR_0, VAR_5);
  if (VAR_6->phy.rf_type != VAR_3)
   FUNC_1(VAR_4, VAR_2,
          VAR_0, VAR_5);
 }
 VAR_7->cur_igvalue = VAR_5;
}
