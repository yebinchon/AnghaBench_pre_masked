
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_phy {scalar_t__ current_chan_bw; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,char,int) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_3,
      u8 *VAR_4,
      u8 *VAR_5,
      u8 *VAR_6,
      u8 VAR_7, u32 *VAR_8,
      u32 *VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_1(VAR_3);
 struct rtl_phy *VAR_11 = &(VAR_10->phy);
 u32 VAR_12, VAR_13;
 u8 VAR_14, VAR_15[2];

 for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
  VAR_12 = VAR_4[VAR_14];

  VAR_12 = (VAR_12 << 24) | (VAR_12 << 16) |
      (VAR_12 << 8) | VAR_12;
  *(VAR_8 + VAR_14) = VAR_12;
  FUNC_0(VAR_10, VAR_0, VAR_2,
   " [OFDM power base index rf(%c) = 0x%x]\n",
    ((VAR_14 == 0) ? 'A' : 'B'), *(VAR_8 + VAR_14));
 }

 for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
  if (VAR_11->current_chan_bw == VAR_1)
   VAR_15[VAR_14] = VAR_5[VAR_14];
  else
   VAR_15[VAR_14] = VAR_6[VAR_14];

  VAR_13 = VAR_15[VAR_14];
  VAR_13 = (VAR_13 << 24) | (VAR_13 << 16) |
        (VAR_13 << 8) | VAR_13;

  *(VAR_9 + VAR_14) = VAR_13;

  FUNC_0(VAR_10, VAR_0, VAR_2,
   " [MCS power base index rf(%c) = 0x%x]\n",
    ((VAR_14 == 0) ? 'A' : 'B'), *(VAR_9 + VAR_14));
 }
}
