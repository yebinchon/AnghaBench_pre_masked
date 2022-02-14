
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_hal {scalar_t__ macphymode; int interfaceindex; scalar_t__ current_bandtype; int version; } ;
struct rtl_priv {struct rtl_hal rtlhal; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_3 (struct ieee80211_hw*,int,int ) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int,int,int) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_9,
           bool VAR_10, long VAR_11[][8],
           u8 VAR_12, bool VAR_13)
{
 struct rtl_priv *VAR_14 = FUNC_4(VAR_9);
 struct rtl_hal *VAR_15 = &(VAR_14->rtlhal);
 u32 VAR_16, VAR_17, VAR_18, VAR_19;
 long VAR_20, VAR_21;
 bool VAR_22 = FUNC_1(VAR_15->version) ||
     VAR_15->macphymode == VAR_1;

 FUNC_2(VAR_14, VAR_2, VAR_3,
  "Path A IQ Calibration %s !\n", VAR_10 ? "Success" : "Failed");
 if (VAR_12 == 0xFF) {
  return;
 } else if (VAR_10) {
  VAR_16 = (FUNC_3(VAR_9, VAR_7,
   VAR_4) >> 22) & 0x3FF;
  VAR_17 = VAR_11[VAR_12][0];
  if ((VAR_17 & 0x00000200) != 0)
   VAR_17 = VAR_17 | 0xFFFFFC00;
  VAR_18 = (VAR_17 * VAR_16) >> 8;
  FUNC_2(VAR_14, VAR_2, VAR_3,
   "X = 0x%x, tx0_a = 0x%x, oldval_0 0x%x\n",
   VAR_17, VAR_18, VAR_16);
  FUNC_5(VAR_9, VAR_7, 0x3FF, VAR_18);
  FUNC_5(VAR_9, VAR_5, FUNC_0(24),
         ((VAR_17 * VAR_16 >> 7) & 0x1));
  VAR_20 = VAR_11[VAR_12][1];
  if ((VAR_20 & 0x00000200) != 0)
   VAR_20 = VAR_20 | 0xFFFFFC00;

  if (VAR_15->interfaceindex == 1 &&
   VAR_15->current_bandtype == VAR_0)
   VAR_20 += 3;
  VAR_21 = (VAR_20 * VAR_16) >> 8;
  FUNC_2(VAR_14, VAR_2, VAR_3,
   "Y = 0x%lx, tx0_c = 0x%lx\n",
   VAR_20, VAR_21);
  FUNC_5(VAR_9, VAR_8, 0xF0000000,
         ((VAR_21 & 0x3C0) >> 6));
  FUNC_5(VAR_9, VAR_7, 0x003F0000,
         (VAR_21 & 0x3F));
  if (VAR_22)
   FUNC_5(VAR_9, VAR_5, FUNC_0(26),
          ((VAR_20 * VAR_16 >> 7) & 0x1));
  FUNC_2(VAR_14, VAR_2, VAR_3, "0xC80 = 0x%x\n",
   FUNC_3(VAR_9, VAR_7,
          VAR_4));
  if (VAR_13) {
   FUNC_2(VAR_14, VAR_2, VAR_3, "only Tx OK\n");
   return;
  }
  VAR_19 = VAR_11[VAR_12][2];
  FUNC_5(VAR_9, VAR_6, 0x3FF, VAR_19);
  VAR_19 = VAR_11[VAR_12][3] & 0x3F;
  FUNC_5(VAR_9, VAR_6, 0xFC00, VAR_19);
  VAR_19 = (VAR_11[VAR_12][3] >> 6) & 0xF;
  FUNC_5(VAR_9, 0xca0, 0xF0000000, VAR_19);
 }
}
