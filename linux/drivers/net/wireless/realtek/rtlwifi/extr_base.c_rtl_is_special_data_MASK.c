
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct udphdr {int dummy; } ;
struct sk_buff {int dummy; } ;
struct rtl_ps_ctl {void* last_delaylps_stamp_jiffies; } ;
struct TYPE_6__ {int is_special_data; } ;
struct TYPE_4__ {int in_4way; void* in_4way_ts; } ;
struct TYPE_5__ {TYPE_1__ btc_info; } ;
struct rtl_priv {TYPE_3__ ra; TYPE_2__ btcoexist; } ;
struct iphdr {scalar_t__ protocol; int ihl; } ;
struct ieee80211_hw {int dummy; } ;
typedef int __le16 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct rtl_priv*,int,int ,char*,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 void* VAR_12 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_6 (struct rtl_priv*) ;
 int* FUNC_7 (struct ieee80211_hw*,struct sk_buff*,int) ;
 int FUNC_8 (struct rtl_priv*,struct rtl_ps_ctl*,int ) ;

u8 FUNC_9(struct ieee80211_hw *VAR_13, struct sk_buff *VAR_14, u8 VAR_15,
         bool VAR_16)
{
 struct rtl_priv *VAR_17 = FUNC_5(VAR_13);
 struct rtl_ps_ctl *VAR_18 = FUNC_6(FUNC_5(VAR_13));
 __le16 VAR_19 = FUNC_3(VAR_14);
 u16 VAR_20;
 const u8 *VAR_21;
 const struct iphdr *VAR_22;

 if (!FUNC_2(VAR_19))
  goto end;

 VAR_21 = FUNC_7(VAR_13, VAR_14, VAR_16);
 VAR_20 = FUNC_1((__be16 *)VAR_21);

 if (VAR_4 == VAR_20) {
  VAR_22 = (struct iphdr *)((u8 *)VAR_21 +
       VAR_11);
  if (VAR_7 == VAR_22->protocol) {
   struct udphdr *VAR_23 = (struct udphdr *)((u8 *)VAR_22 +
              (VAR_22->ihl << 2));
   if (((((u8 *)VAR_23)[1] == 68) &&
        (((u8 *)VAR_23)[3] == 67)) ||
       ((((u8 *)VAR_23)[1] == 67) &&
        (((u8 *)VAR_23)[3] == 68))) {



    FUNC_0(VAR_17, (VAR_1 | VAR_0),
      VAR_2, "dhcp %s !!\n",
      (VAR_15) ? "Tx" : "Rx");

    if (VAR_15)
     FUNC_8(VAR_17, VAR_18,
        VAR_9);

    return 1;
   }
  }
 } else if (VAR_3 == VAR_20) {
  if (VAR_15)
   FUNC_8(VAR_17, VAR_18, VAR_8);

  return 1;
 } else if (VAR_6 == VAR_20) {

  VAR_17->btcoexist.btc_info.in_4way = 1;
  VAR_17->btcoexist.btc_info.in_4way_ts = VAR_12;

  FUNC_0(VAR_17, (VAR_1 | VAR_0), VAR_2,
    "802.1X %s EAPOL pkt!!\n", (VAR_15) ? "Tx" : "Rx");

  if (VAR_15) {
   VAR_17->ra.is_special_data = 1;
   FUNC_4(VAR_13);
   VAR_18->last_delaylps_stamp_jiffies = VAR_12;

   FUNC_8(VAR_17, VAR_18, VAR_10);
  }

  return 1;
 } else if (VAR_5 == VAR_20) {



  goto end;
 }

end:
 VAR_17->ra.is_special_data = 0;
 return 0;
}
