
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
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;

 size_t VAR_12 ;


 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct ieee80211_hw*,int*,size_t,size_t,int,int ,int ) ;
 int FUNC_4 (struct ieee80211_hw*,int*) ;
 int FUNC_5 (struct ieee80211_hw*,int*,size_t) ;
 int FUNC_6 (struct ieee80211_hw*,int) ;
 size_t FUNC_7 (struct ieee80211_hw*,int*) ;
 int FUNC_8 (struct ieee80211_hw*,int) ;
 struct rtl_efuse* FUNC_9 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_10 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_11 (struct ieee80211_hw*) ;

void FUNC_12(struct ieee80211_hw *VAR_13, u32 VAR_14, u8 *VAR_15,
 bool VAR_16, u8 VAR_17, bool VAR_18, bool VAR_19)
{
 struct rtl_priv *VAR_20 = FUNC_11(VAR_13);
 struct rtl_mac *VAR_21 = FUNC_10(FUNC_11(VAR_13));
 struct rtl_efuse *VAR_22 = FUNC_9(FUNC_11(VAR_13));
 u8 *VAR_23 = VAR_15;

 u32 VAR_24 = 0;
 bool VAR_25 = 0;

 static u8 VAR_26[4][6] = {
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x01},
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x02},
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x03}
 };
 static u8 VAR_27[] = {
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff
 };

 if (VAR_19) {
  u8 VAR_28 = 0;
  u8 VAR_29 = 0;
  u8 VAR_30 = 5;

  FUNC_0(VAR_20, VAR_6, VAR_7, "clear_all\n");

  for (VAR_28 = 0; VAR_28 < VAR_30; VAR_28++) {
   FUNC_8(VAR_13, VAR_29 + VAR_28);
   FUNC_6(VAR_13, VAR_29 + VAR_28);

   if (VAR_28 < 5) {
    FUNC_1(VAR_20->sec.key_buf[VAR_28], 0,
           VAR_8);
    VAR_20->sec.key_len[VAR_28] = 0;
   }
  }

 } else {
  switch (VAR_17) {
  case 128:
   VAR_17 = VAR_5;
   break;
  case 129:
   VAR_17 = VAR_4;
   break;
  case 130:
   VAR_17 = VAR_3;
   break;
  case 131:
   VAR_17 = VAR_0;
   break;
  default:
   FUNC_2("switch case %#x not processed\n",
          VAR_17);
   VAR_17 = VAR_3;
   break;
  }

  if (VAR_18 || VAR_20->sec.use_defaultkey) {
   VAR_23 = VAR_26[VAR_14];
   VAR_24 = VAR_14;
  } else {
   if (VAR_16) {
    VAR_23 = VAR_27;
    VAR_24 = VAR_14;
   } else {
    if (VAR_21->opmode == VAR_10) {
     VAR_24 = FUNC_7(VAR_13,
         VAR_15);
     if (VAR_24 >= VAR_12) {
      FUNC_2("Can not find free hw security cam entry\n");
      return;
     }
    } else {
     VAR_24 = VAR_2;
    }

    VAR_14 = VAR_11;
    VAR_25 = 1;
   }
  }

  if (VAR_20->sec.key_len[VAR_14] == 0) {
   FUNC_0(VAR_20, VAR_6, VAR_7,
     "delete one entry, entry_id is %d\n",
     VAR_24);
   if (VAR_21->opmode == VAR_10)
    FUNC_4(VAR_13, VAR_15);
   FUNC_5(VAR_13, VAR_15, VAR_24);
  } else {
   FUNC_0(VAR_20, VAR_6, VAR_7,
     "add one entry\n");
   if (VAR_25) {
    FUNC_0(VAR_20, VAR_6, VAR_7,
      "set Pairwise key\n");

    FUNC_3(VAR_13, VAR_23, VAR_14,
     VAR_24, VAR_17,
     VAR_1,
     VAR_20->sec.key_buf[VAR_14]);
   } else {
    FUNC_0(VAR_20, VAR_6, VAR_7,
      "set group key\n");

    if (VAR_21->opmode == VAR_9) {
     FUNC_3(VAR_13,
      VAR_22->dev_addr,
      VAR_11,
      VAR_2,
      VAR_17, VAR_1,
      VAR_20->sec.key_buf[VAR_24]);
    }

    FUNC_3(VAR_13, VAR_23, VAR_14,
           VAR_24, VAR_17,
           VAR_1,
           VAR_20->sec.key_buf[VAR_24]);
   }

  }
 }
}
