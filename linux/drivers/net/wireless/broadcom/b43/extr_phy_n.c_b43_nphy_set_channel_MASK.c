
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ieee80211_channel {scalar_t__ band; int hw_value; int center_freq; } ;
struct b43_phy {int rev; int channel_type; int radio_rev; int channel; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_n_sfo_cfg {int dummy; } ;
struct b43_nphy_chantabent_rev7_2g {struct b43_phy_n_sfo_cfg phy_regs; } ;
struct b43_nphy_chantabent_rev7 {struct b43_phy_n_sfo_cfg phy_regs; } ;
struct b43_nphy_channeltab_entry_rev3 {struct b43_phy_n_sfo_cfg const phy_regs; } ;
struct b43_nphy_channeltab_entry_rev2 {struct b43_phy_n_sfo_cfg const phy_regs; } ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,struct b43_phy_n_sfo_cfg const*,struct ieee80211_channel*) ;
 struct b43_nphy_channeltab_entry_rev2* FUNC_2 (struct b43_wldev*,int ) ;
 struct b43_nphy_channeltab_entry_rev3* FUNC_3 (struct b43_wldev*,int ) ;
 int FUNC_4 (struct b43_wldev*,int,int) ;
 int FUNC_5 (struct b43_wldev*,int,int) ;
 int FUNC_6 (struct b43_wldev*,struct b43_nphy_channeltab_entry_rev2 const*) ;
 int FUNC_7 (struct b43_wldev*,struct b43_nphy_channeltab_entry_rev3 const*) ;
 int FUNC_8 (struct b43_wldev*,struct b43_nphy_chantabent_rev7 const*,struct b43_nphy_chantabent_rev7_2g const*) ;
 int FUNC_9 (struct b43_wldev*,int,int,int) ;
 int FUNC_10 (struct b43_wldev*,int ,struct b43_nphy_chantabent_rev7 const**,struct b43_nphy_chantabent_rev7_2g const**) ;

__attribute__((used)) static int FUNC_11(struct b43_wldev *VAR_9,
    struct ieee80211_channel *VAR_10,
    enum nl80211_channel_type VAR_11)
{
 struct b43_phy *VAR_12 = &VAR_9->phy;

 const struct b43_nphy_channeltab_entry_rev2 *VAR_13 = ((void*)0);
 const struct b43_nphy_channeltab_entry_rev3 *VAR_14 = ((void*)0);
 const struct b43_nphy_chantabent_rev7 *VAR_15 = ((void*)0);
 const struct b43_nphy_chantabent_rev7_2g *VAR_16 = ((void*)0);

 u8 VAR_17;

 if (VAR_12->rev >= 19) {
  return -VAR_3;

 } else if (VAR_12->rev >= 7) {
  FUNC_10(VAR_9, VAR_10->center_freq,
       &VAR_15, &VAR_16);
  if (!VAR_15 && !VAR_16)
   return -VAR_3;
 } else if (VAR_12->rev >= 3) {
  VAR_14 = FUNC_3(VAR_9,
       VAR_10->center_freq);
  if (!VAR_14)
   return -VAR_3;
 } else {
  VAR_13 = FUNC_2(VAR_9,
       VAR_10->hw_value);
  if (!VAR_13)
   return -VAR_3;
 }



 VAR_12->channel = VAR_10->hw_value;







 if (VAR_11 == VAR_6) {
  FUNC_5(VAR_9, VAR_1, VAR_2);
  if (VAR_12->rev >= 7)
   FUNC_5(VAR_9, 0x310, 0x8000);
 } else if (VAR_11 == VAR_5) {
  FUNC_4(VAR_9, VAR_1, ~VAR_2);
  if (VAR_12->rev >= 7)
   FUNC_4(VAR_9, 0x310, (u16)~0x8000);
 }

 if (VAR_12->rev >= 19) {

 } else if (VAR_12->rev >= 7) {
  const struct b43_phy_n_sfo_cfg *VAR_18 = VAR_15 ?
   &(VAR_15->phy_regs) : &(VAR_16->phy_regs);

  if (VAR_12->radio_rev <= 4 || VAR_12->radio_rev == 6) {
   VAR_17 = (VAR_10->band == VAR_4) ? 2 : 0;
   FUNC_9(VAR_9, VAR_7, ~2, VAR_17);
   FUNC_9(VAR_9, VAR_8, ~2, VAR_17);
  }

  FUNC_8(VAR_9, VAR_15, VAR_16);
  FUNC_1(VAR_9, VAR_18, VAR_10);
 } else if (VAR_12->rev >= 3) {
  VAR_17 = (VAR_10->band == VAR_4) ? 4 : 0;
  FUNC_9(VAR_9, 0x08, 0xFFFB, VAR_17);
  FUNC_7(VAR_9, VAR_14);
  FUNC_1(VAR_9, &(VAR_14->phy_regs), VAR_10);
 } else {
  VAR_17 = (VAR_10->band == VAR_4) ? 0x0020 : 0x0050;
  FUNC_9(VAR_9, VAR_0, 0xFF8F, VAR_17);
  FUNC_6(VAR_9, VAR_13);
  FUNC_1(VAR_9, &(VAR_13->phy_regs), VAR_10);
 }

 return 0;
}
