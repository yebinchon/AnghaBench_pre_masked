
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct rtl_efuse {int * dev_addr; } ;
struct TYPE_5__ {int smps_control; int action; } ;
struct TYPE_6__ {TYPE_1__ ht_smps; } ;
struct TYPE_7__ {TYPE_2__ u; int category; } ;
struct TYPE_8__ {TYPE_3__ action; } ;
struct ieee80211_mgmt {TYPE_4__ u; int frame_control; int bssid; int sa; int da; } ;
struct ieee80211_hw {int extra_tx_headroom; } ;
typedef enum ieee80211_smps_mode { ____Placeholder_ieee80211_smps_mode } ieee80211_smps_mode ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 struct sk_buff* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ) ;
 struct rtl_efuse* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 struct ieee80211_mgmt* FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_8(struct ieee80211_hw *VAR_8,
         enum ieee80211_smps_mode VAR_9,
         u8 *VAR_10, u8 *VAR_11)
{
 struct rtl_efuse *VAR_12 = FUNC_4(FUNC_5(VAR_8));
 struct sk_buff *VAR_13;
 struct ieee80211_mgmt *VAR_14;


 VAR_13 = FUNC_2(27 + VAR_8->extra_tx_headroom);
 if (!VAR_13)
  return ((void*)0);

 FUNC_7(VAR_13, VAR_8->extra_tx_headroom);
 VAR_14 = FUNC_6(VAR_13, 27);
 FUNC_3(VAR_14->da, VAR_10, VAR_0);
 FUNC_3(VAR_14->sa, VAR_12->dev_addr, VAR_0);
 FUNC_3(VAR_14->bssid, VAR_11, VAR_0);
 VAR_14->frame_control = FUNC_1(VAR_1 |
        VAR_2);
 VAR_14->u.action.category = VAR_3;
 VAR_14->u.action.u.ht_smps.action = VAR_4;
 switch (VAR_9) {
 case 132:
 case 130:
  FUNC_0(1);

 case 129:
  VAR_14->u.action.u.ht_smps.smps_control =
    VAR_5;
  break;
 case 128:
  VAR_14->u.action.u.ht_smps.smps_control =
    VAR_7;
  break;
 case 131:
  VAR_14->u.action.u.ht_smps.smps_control =
    VAR_6;
  break;
 }

 return VAR_13;
}
