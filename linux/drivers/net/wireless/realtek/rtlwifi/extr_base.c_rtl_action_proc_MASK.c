
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; int len; } ;
struct TYPE_10__ {int rx_agg_state; } ;
struct rtl_tid_data {TYPE_5__ agg; } ;
struct rtl_sta_info {struct rtl_tid_data* tids; } ;
struct rtl_priv {int dummy; } ;
struct rtl_mac {int act_scanning; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct TYPE_6__ {int capab; } ;
struct TYPE_7__ {TYPE_1__ addba_req; } ;
struct TYPE_8__ {TYPE_2__ u; } ;
struct TYPE_9__ {TYPE_3__ action; } ;
struct ieee80211_mgmt {TYPE_4__ u; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int addr2; int addr3; } ;
typedef int __le16 ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,scalar_t__,int ) ;
 int FUNC_1 (struct rtl_priv*,int,int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_hw*,struct ieee80211_hdr*,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 struct ieee80211_sta* FUNC_7 (struct ieee80211_hw*,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 struct ieee80211_hdr* FUNC_9 (struct sk_buff*) ;
 struct rtl_mac* FUNC_10 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_11 (struct ieee80211_hw*) ;

bool FUNC_12(struct ieee80211_hw *VAR_8, struct sk_buff *VAR_9, u8 VAR_10)
{
 struct rtl_mac *VAR_11 = FUNC_10(FUNC_11(VAR_8));
 struct ieee80211_hdr *VAR_12 = FUNC_9(VAR_9);
 struct rtl_priv *VAR_13 = FUNC_11(VAR_8);
 __le16 VAR_14 = FUNC_8(VAR_9);
 u8 *VAR_15 = (u8 *)(((u8 *)VAR_9->data + VAR_5));
 u8 VAR_16;

 if (!FUNC_2(VAR_14))
  return 1;

 VAR_16 = *VAR_15;
 VAR_15++;
 switch (VAR_16) {
 case 129:
  switch (*VAR_15) {
  case 131:
   if (VAR_11->act_scanning)
    return 0;

   FUNC_1(VAR_13, (VAR_2 | VAR_1), VAR_3,
    "%s ACT_ADDBAREQ From :%pM\n",
    VAR_10 ? "Tx" : "Rx", VAR_12->addr2);
   FUNC_0(VAR_13, VAR_0, VAR_3, "req\n",
    VAR_9->data, VAR_9->len);
   if (!VAR_10) {
    struct ieee80211_sta *VAR_17 = ((void*)0);
    struct rtl_sta_info *VAR_18 = ((void*)0);
    struct rtl_tid_data *VAR_19;
    struct ieee80211_mgmt *VAR_20 = (void *)VAR_9->data;
    u16 VAR_21 = 0, VAR_22 = 0;

    FUNC_5();
    VAR_17 = FUNC_7(VAR_8, VAR_12->addr3);
    if (VAR_17 == ((void*)0)) {
     FUNC_1(VAR_13, VAR_2 | VAR_1,
       VAR_3, "sta is NULL\n");
     FUNC_6();
     return 1;
    }

    VAR_18 =
     (struct rtl_sta_info *)VAR_17->drv_priv;
    if (!VAR_18) {
     FUNC_6();
     return 1;
    }
    VAR_21 =
      FUNC_3(VAR_20->u.action.u.addba_req.capab);
    VAR_22 = (VAR_21 &
           VAR_4) >> 2;
    if (VAR_22 >= VAR_6) {
     FUNC_6();
     return 1;
    }
    VAR_19 = &VAR_18->tids[VAR_22];
    if (VAR_19->agg.rx_agg_state ==
        VAR_7)
     FUNC_4(VAR_8, VAR_12, VAR_22);
    FUNC_6();
   }
   break;
  case 130:
   FUNC_1(VAR_13, (VAR_2 | VAR_1), VAR_3,
     "%s ACT_ADDBARSP From :%pM\n",
      VAR_10 ? "Tx" : "Rx", VAR_12->addr2);
   break;
  case 128:
   FUNC_1(VAR_13, (VAR_2 | VAR_1), VAR_3,
     "ACT_ADDBADEL From :%pM\n", VAR_12->addr2);
   break;
  }
  break;
 default:
  break;
 }

 return 1;
}
