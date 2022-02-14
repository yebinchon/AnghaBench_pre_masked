
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_hal {scalar_t__ current_bandtype; } ;
struct rtl_priv {struct rtl_hal rtlhal; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int ) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_9,
 bool VAR_10, long VAR_11[][8], u8 VAR_12, bool VAR_13)
{
 struct rtl_priv *VAR_14 = FUNC_3(VAR_9);
 struct rtl_hal *VAR_15 = &(VAR_14->rtlhal);
 u32 VAR_16, VAR_17, VAR_18, VAR_19;
 long VAR_20, VAR_21;

 FUNC_1(VAR_14, VAR_1, VAR_2, "Path B IQ Calibration %s !\n",
  VAR_10 ? "Success" : "Failed");
 if (VAR_12 == 0xFF) {
  return;
 } else if (VAR_10) {
  VAR_16 = (FUNC_2(VAR_9, VAR_7,
       VAR_3) >> 22) & 0x3FF;
  VAR_17 = VAR_11[VAR_12][4];
  if ((VAR_17 & 0x00000200) != 0)
   VAR_17 = VAR_17 | 0xFFFFFC00;
  VAR_18 = (VAR_17 * VAR_16) >> 8;
  FUNC_1(VAR_14, VAR_1, VAR_2, "X = 0x%x, tx1_a = 0x%x\n",
   VAR_17, VAR_18);
  FUNC_4(VAR_9, VAR_7, 0x3FF, VAR_18);
  FUNC_4(VAR_9, VAR_5, FUNC_0(28),
         ((VAR_17 * VAR_16 >> 7) & 0x1));
  VAR_20 = VAR_11[VAR_12][5];
  if ((VAR_20 & 0x00000200) != 0)
   VAR_20 = VAR_20 | 0xFFFFFC00;
  if (VAR_15->current_bandtype == VAR_0)
   VAR_20 += 3;
  VAR_21 = (VAR_20 * VAR_16) >> 8;
  FUNC_1(VAR_14, VAR_1, VAR_2, "Y = 0x%lx, tx1_c = 0x%lx\n",
   VAR_20, VAR_21);
  FUNC_4(VAR_9, VAR_8, 0xF0000000,
         ((VAR_21 & 0x3C0) >> 6));
  FUNC_4(VAR_9, VAR_7, 0x003F0000,
         (VAR_21 & 0x3F));
  FUNC_4(VAR_9, VAR_5, FUNC_0(30),
         ((VAR_20 * VAR_16 >> 7) & 0x1));
  if (VAR_13)
   return;
  VAR_19 = VAR_11[VAR_12][6];
  FUNC_4(VAR_9, VAR_6, 0x3FF, VAR_19);
  VAR_19 = VAR_11[VAR_12][7] & 0x3F;
  FUNC_4(VAR_9, VAR_6, 0xFC00, VAR_19);
  VAR_19 = (VAR_11[VAR_12][7] >> 6) & 0xF;
  FUNC_4(VAR_9, VAR_4, 0x0000F000, VAR_19);
 }
}
