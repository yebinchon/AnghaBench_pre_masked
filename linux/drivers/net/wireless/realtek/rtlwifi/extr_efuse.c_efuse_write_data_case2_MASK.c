
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct rtl_priv {int dummy; } ;
struct pgpkt_struct {int offset; int word_en; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,scalar_t__,int*) ;
 int FUNC_4 (struct ieee80211_hw*,scalar_t__,int) ;
 scalar_t__ FUNC_5 (struct ieee80211_hw*,int,int*) ;
 int FUNC_6 (struct ieee80211_hw*,int,int,int*) ;
 int FUNC_7 (struct ieee80211_hw*,scalar_t__,int,int*) ;
 int FUNC_8 (int*,int,int) ;
 struct rtl_priv* FUNC_9 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_hw *VAR_5, u16 *VAR_6,
       int *VAR_7, u8 *VAR_8,
       struct pgpkt_struct VAR_9,
       int *VAR_10, int *VAR_11)
{
 struct rtl_priv *VAR_12 = FUNC_9(VAR_5);
 struct pgpkt_struct VAR_13;
 u8 VAR_14;
 u8 VAR_15;
 u8 VAR_16[8 * sizeof(u8)];
 u8 VAR_17;
 u8 VAR_18 = 0x0F;

 VAR_14 = ((VAR_9.offset << 4) & 0xf0) | VAR_9.word_en;
 FUNC_4(VAR_5, *VAR_6, VAR_14);
 FUNC_3(VAR_5, *VAR_6, &VAR_15);

 if (VAR_15 == VAR_14) {
  *VAR_8 = VAR_3;
 } else if (VAR_15 == 0xFF) {
  *VAR_8 = VAR_4;
  *VAR_10 += 1;
  if (*VAR_10 > VAR_1) {
   *VAR_7 = 0;
   *VAR_11 = 0;
  }
 } else {
  VAR_13.offset = (VAR_15 >> 4) & 0x0F;
  VAR_13.word_en = VAR_15 & 0x0F;

  VAR_17 = FUNC_1(VAR_13.word_en);

  FUNC_8(VAR_16, 0xff, 8 * sizeof(u8));

  if (FUNC_5(VAR_5, VAR_13.offset, VAR_16)) {
   VAR_18 = FUNC_7(VAR_5,
           *VAR_6 + 1,
           VAR_13.word_en,
           VAR_16);

   if (0x0F != (VAR_18 & 0x0F)) {
    u8 VAR_19 = VAR_13.offset;
    u8 VAR_20 = VAR_18;

    FUNC_6(VAR_5, VAR_19,
            VAR_20,
            VAR_16);
    *VAR_6 = FUNC_2(VAR_5);
   } else {
    *VAR_6 = *VAR_6 +
           (VAR_17 * 2) + 1;
   }
  } else {
   *VAR_6 = *VAR_6 + (VAR_17 * 2) + 1;
  }

  *VAR_8 = VAR_4;
  *VAR_10 += 1;
  if (*VAR_10 > VAR_1) {
   *VAR_7 = 0;
   *VAR_11 = 0;
  }

  FUNC_0(VAR_12, VAR_2, VAR_0,
   "efuse PG_STATE_HEADER-2\n");
 }
}
