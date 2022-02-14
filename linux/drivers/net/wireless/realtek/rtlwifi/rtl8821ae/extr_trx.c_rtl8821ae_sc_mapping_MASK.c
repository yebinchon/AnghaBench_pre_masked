
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_tcb_desc {scalar_t__ packet_bw; } ;
struct rtl_phy {scalar_t__ current_chan_bw; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_mac {scalar_t__ cur_80_prime_sc; scalar_t__ cur_40_prime_sc; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct rtl_mac* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static u8 FUNC_3(struct ieee80211_hw *VAR_14,
          struct rtl_tcb_desc *VAR_15)
{
 struct rtl_priv *VAR_16 = FUNC_2(VAR_14);
 struct rtl_phy *VAR_17 = &VAR_16->phy;
 struct rtl_mac *VAR_18 = FUNC_1(VAR_16);
 u8 VAR_19 = 0;

 if (VAR_17->current_chan_bw == VAR_6) {
  if (VAR_15->packet_bw == VAR_6) {
   VAR_19 = VAR_13;
  } else if (VAR_15->packet_bw == VAR_5) {
   if (VAR_18->cur_80_prime_sc ==
       VAR_2)
    VAR_19 =
     VAR_11;
   else if (VAR_18->cur_80_prime_sc ==
     VAR_3)
    VAR_19 =
     VAR_12;
   else
    FUNC_0(VAR_16, VAR_0, VAR_1,
      "rtl8821ae_sc_mapping: Not Correct Primary40MHz Setting\n");
  } else {
   if ((VAR_18->cur_40_prime_sc ==
        VAR_2) &&
       (VAR_18->cur_80_prime_sc ==
        VAR_2))
    VAR_19 =
     VAR_8;
   else if ((VAR_18->cur_40_prime_sc ==
      VAR_3) &&
     (VAR_18->cur_80_prime_sc ==
      VAR_2))
    VAR_19 =
     VAR_7;
   else if ((VAR_18->cur_40_prime_sc ==
      VAR_2) &&
     (VAR_18->cur_80_prime_sc ==
      VAR_3))
    VAR_19 =
     VAR_10;
   else if ((VAR_18->cur_40_prime_sc ==
      VAR_3) &&
     (VAR_18->cur_80_prime_sc ==
      VAR_3))
    VAR_19 =
     VAR_9;
   else
    FUNC_0(VAR_16, VAR_0, VAR_1,
      "rtl8821ae_sc_mapping: Not Correct Primary40MHz Setting\n");
  }
 } else if (VAR_17->current_chan_bw == VAR_5) {
  if (VAR_15->packet_bw == VAR_5) {
   VAR_19 = VAR_13;
  } else if (VAR_15->packet_bw == VAR_4) {
   if (VAR_18->cur_40_prime_sc ==
    VAR_3) {
    VAR_19 =
     VAR_10;
   } else if (VAR_18->cur_40_prime_sc ==
    VAR_2){
    VAR_19 =
     VAR_7;
   } else {
    VAR_19 = VAR_13;
   }
  }
 } else {
  VAR_19 = VAR_13;
 }

 return VAR_19;
}
