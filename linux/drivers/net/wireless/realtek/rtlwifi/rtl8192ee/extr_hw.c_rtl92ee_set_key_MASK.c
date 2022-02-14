
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_2__ {scalar_t__* key_len; int * key_buf; scalar_t__ use_defaultkey; } ;
struct rtl_priv {TYPE_1__ sec; } ;
struct rtl_mac {scalar_t__ opmode; } ;
struct rtl_efuse {int* dev_addr; } ;
struct ieee80211_hw {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 size_t VAR_13 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;

 size_t VAR_14 ;


 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct ieee80211_hw*,int*,size_t,size_t,int,int ,int ) ;
 int FUNC_4 (struct ieee80211_hw*,int*) ;
 int FUNC_5 (struct ieee80211_hw*,int*,size_t) ;
 int FUNC_6 (struct ieee80211_hw*,int) ;
 size_t FUNC_7 (struct ieee80211_hw*,int*) ;
 int FUNC_8 (struct ieee80211_hw*,int) ;
 struct rtl_efuse* FUNC_9 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_10 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_11 (struct ieee80211_hw*) ;

void FUNC_12(struct ieee80211_hw *VAR_15, u32 VAR_16,
       u8 *VAR_17, bool VAR_18, u8 VAR_19,
       bool VAR_20, bool VAR_21)
{
 struct rtl_priv *VAR_22 = FUNC_11(VAR_15);
 struct rtl_mac *VAR_23 = FUNC_10(FUNC_11(VAR_15));
 struct rtl_efuse *VAR_24 = FUNC_9(FUNC_11(VAR_15));
 u8 *VAR_25 = VAR_17;
 u32 VAR_26 = 0;
 bool VAR_27 = 0;

 static u8 VAR_28[4][6] = {
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x01},
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x02},
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x03}
 };
 static u8 VAR_29[] = {
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff
 };

 if (VAR_21) {
  u8 VAR_30 = 0;
  u8 VAR_31 = 0;
  u8 VAR_32 = 5;

  FUNC_0(VAR_22, VAR_7, VAR_8, "clear_all\n");

  for (VAR_30 = 0; VAR_30 < VAR_32; VAR_30++) {
   FUNC_8(VAR_15, VAR_31 + VAR_30);
   FUNC_6(VAR_15, VAR_31 + VAR_30);

   if (VAR_30 < 5) {
    FUNC_1(VAR_22->sec.key_buf[VAR_30], 0,
           VAR_9);
    VAR_22->sec.key_len[VAR_30] = 0;
   }
  }

 } else {
  switch (VAR_19) {
  case 128:
   VAR_19 = VAR_5;
   break;
  case 129:
   VAR_19 = VAR_4;
   break;
  case 130:
   VAR_19 = VAR_3;
   break;
  case 131:
   VAR_19 = VAR_0;
   break;
  default:
   FUNC_0(VAR_22, VAR_6, VAR_8,
     "switch case %#x not processed\n", VAR_19);
   VAR_19 = VAR_3;
   break;
  }

  if (VAR_20 || VAR_22->sec.use_defaultkey) {
   VAR_25 = VAR_28[VAR_16];
   VAR_26 = VAR_16;
  } else {
   if (VAR_18) {
    VAR_25 = VAR_29;
    VAR_26 = VAR_16;
   } else {
    if (VAR_23->opmode == VAR_11 ||
        VAR_23->opmode == VAR_12) {
     VAR_26 = FUNC_7(VAR_15,
             VAR_17);
     if (VAR_26 >= VAR_14) {
      FUNC_2("Can not find free hw security cam entry\n");
      return;
     }
    } else {
     VAR_26 = VAR_2;
    }

    VAR_16 = VAR_13;
    VAR_27 = 1;
   }
  }

  if (VAR_22->sec.key_len[VAR_16] == 0) {
   FUNC_0(VAR_22, VAR_7, VAR_8,
     "delete one entry, entry_id is %d\n",
     VAR_26);
   if (VAR_23->opmode == VAR_11 ||
       VAR_23->opmode == VAR_12)
    FUNC_4(VAR_15, VAR_17);
   FUNC_5(VAR_15, VAR_17, VAR_26);
  } else {
   FUNC_0(VAR_22, VAR_7, VAR_8,
     "add one entry\n");
   if (VAR_27) {
    FUNC_0(VAR_22, VAR_7, VAR_8,
      "set Pairwise key\n");

    FUNC_3(VAR_15, VAR_25, VAR_16,
            VAR_26, VAR_19,
            VAR_1,
            VAR_22->sec.key_buf[VAR_16]);
   } else {
    FUNC_0(VAR_22, VAR_7, VAR_8,
      "set group key\n");

    if (VAR_23->opmode == VAR_10) {
     FUNC_3(VAR_15,
      VAR_24->dev_addr,
      VAR_13,
      VAR_2,
      VAR_19, VAR_1,
      VAR_22->sec.key_buf[VAR_26]);
    }

    FUNC_3(VAR_15, VAR_25, VAR_16,
      VAR_26, VAR_19,
      VAR_1,
      VAR_22->sec.key_buf[VAR_26]);
   }
  }
 }
}
