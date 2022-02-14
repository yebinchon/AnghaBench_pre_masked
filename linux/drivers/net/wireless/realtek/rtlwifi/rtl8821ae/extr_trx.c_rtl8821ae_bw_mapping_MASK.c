
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_tcb_desc {scalar_t__ packet_bw; } ;
struct rtl_phy {scalar_t__ current_chan_bw; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,scalar_t__,scalar_t__) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static u8 FUNC_2(struct ieee80211_hw *VAR_4,
          struct rtl_tcb_desc *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_1(VAR_4);
 struct rtl_phy *VAR_7 = &VAR_6->phy;
 u8 VAR_8 = 0;

 FUNC_0(VAR_6, VAR_0, VAR_1,
   "rtl8821ae_bw_mapping, current_chan_bw %d, packet_bw %d\n",
   VAR_7->current_chan_bw, VAR_5->packet_bw);

 if (VAR_7->current_chan_bw == VAR_3) {
  if (VAR_5->packet_bw == VAR_3)
   VAR_8 = 2;
  else if (VAR_5->packet_bw == VAR_2)
   VAR_8 = 1;
  else
   VAR_8 = 0;
 } else if (VAR_7->current_chan_bw == VAR_2) {
  if ((VAR_5->packet_bw == VAR_2) ||
      (VAR_5->packet_bw == VAR_3))
   VAR_8 = 1;
  else
   VAR_8 = 0;
 } else {
  VAR_8 = 0;
 }
 return VAR_8;
}
