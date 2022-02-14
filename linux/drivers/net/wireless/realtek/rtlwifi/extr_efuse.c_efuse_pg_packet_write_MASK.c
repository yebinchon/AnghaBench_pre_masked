
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct rtl_priv {TYPE_1__* cfg; } ;
struct pgpkt_struct {scalar_t__ word_en; scalar_t__ offset; int data; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__* maps; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_4 (struct ieee80211_hw*,scalar_t__,scalar_t__*) ;
 int FUNC_5 (scalar_t__,scalar_t__*,int ) ;
 int FUNC_6 (struct ieee80211_hw*,scalar_t__*,scalar_t__,scalar_t__,int*,scalar_t__*,struct pgpkt_struct*,int*,int*,scalar_t__) ;
 int FUNC_7 (struct ieee80211_hw*,scalar_t__*,int*,scalar_t__*,struct pgpkt_struct,int*,int*) ;
 scalar_t__ FUNC_8 (struct ieee80211_hw*,scalar_t__,scalar_t__,int ) ;
 int FUNC_9 (int ,int,int) ;
 struct rtl_priv* FUNC_10 (struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_11(struct ieee80211_hw *VAR_9,
     u8 VAR_10, u8 VAR_11, u8 *VAR_12)
{
 struct rtl_priv *VAR_13 = FUNC_10(VAR_9);
 struct pgpkt_struct VAR_14;
 u8 VAR_15 = VAR_8;
 int VAR_16 = 1, VAR_17 = 1, VAR_18 = 1;
 u16 VAR_19 = 0;
 u8 VAR_20;
 u8 VAR_21 = 0;
 u8 VAR_22 = 0x0F;
 static int VAR_23;

 if (FUNC_3(VAR_9) >= (VAR_2 -
  VAR_13->cfg->maps[VAR_3])) {
  FUNC_0(VAR_13, VAR_6, VAR_4,
   "efuse_pg_packet_write error\n");
  return 0;
 }

 VAR_14.offset = VAR_10;
 VAR_14.word_en = VAR_11;

 FUNC_9(VAR_14.data, 0xFF, 8 * sizeof(u8));

 FUNC_5(VAR_11, VAR_12, VAR_14.data);
 VAR_21 = FUNC_2(VAR_14.word_en);

 FUNC_0(VAR_13, VAR_6, VAR_4, "efuse Power ON\n");

 while (VAR_16 && (VAR_19 < (VAR_2 -
  VAR_13->cfg->maps[VAR_3]))) {
  if (VAR_15 == VAR_8) {
   VAR_17 = 1;
   VAR_22 = 0x0F;
   FUNC_0(VAR_13, VAR_6, VAR_4,
    "efuse PG_STATE_HEADER\n");

   if (FUNC_4(VAR_9, VAR_19, &VAR_20) &&
       (VAR_20 != 0xFF))
    FUNC_6(VAR_9, &VAR_19,
             VAR_20, VAR_10,
             &VAR_16,
             &VAR_15,
             &VAR_14,
             &VAR_23, &VAR_18,
             VAR_11);
   else
    FUNC_7(VAR_9, &VAR_19,
             &VAR_16,
             &VAR_15,
             VAR_14,
             &VAR_23,
             &VAR_18);

  } else if (VAR_15 == VAR_7) {
   FUNC_0(VAR_13, VAR_6, VAR_4,
    "efuse PG_STATE_DATA\n");
   VAR_22 =
       FUNC_8(VAR_9, VAR_19 + 1,
          VAR_14.word_en,
          VAR_14.data);

   if ((VAR_22 & 0x0F) == 0x0F) {
    VAR_16 = 0;
   } else {
    VAR_19 =
        VAR_19 + (2 * VAR_21) + 1;

    VAR_14.offset = VAR_10;
    VAR_14.word_en = VAR_22;
    VAR_21 =
        FUNC_2(VAR_14.
             word_en);
    VAR_15 = VAR_8;
    VAR_23++;
    if (VAR_23 > VAR_5) {
     VAR_16 = 0;
     VAR_18 = 0;
    }
    FUNC_0(VAR_13, VAR_6, VAR_4,
     "efuse PG_STATE_HEADER-3\n");
   }
  }
 }

 if (VAR_19 >= (VAR_2 -
  VAR_13->cfg->maps[VAR_3])) {
  FUNC_1(VAR_13, VAR_0, VAR_1,
    "efuse_addr(%#x) Out of size!!\n", VAR_19);
 }

 return 1;
}
