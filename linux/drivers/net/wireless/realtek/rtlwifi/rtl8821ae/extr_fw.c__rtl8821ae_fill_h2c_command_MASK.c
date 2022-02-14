
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int h2c_lock; } ;
struct rtl_priv {TYPE_1__ locks; } ;
struct rtl_hal {int h2c_setinprogress; int last_hmeboxnum; } ;
struct ieee80211_hw {int dummy; } ;
typedef int boxextcontent ;
typedef scalar_t__ boxcontent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int ,int) ;
 struct rtl_hal* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct rtl_priv*,int) ;
 int FUNC_7 (struct rtl_priv*,int,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct ieee80211_hw *VAR_15,
     u8 VAR_16, u32 VAR_17,
     u8 *VAR_18)
{
 struct rtl_priv *VAR_19 = FUNC_5(VAR_15);
 struct rtl_hal *VAR_20 = FUNC_4(FUNC_5(VAR_15));
 u8 VAR_21 = 0;
 u16 VAR_22 = 0, VAR_23 = 0;
 u8 VAR_24 = 0;
 bool VAR_25 = 0;
 u8 VAR_26 = 0;
 bool VAR_27 = 0;
 u8 VAR_28 = 100;

 u8 VAR_29[4], VAR_30[4];
 u32 VAR_31 = 0;
 unsigned long VAR_32 = 0;
 u8 VAR_33 = 0;

 FUNC_0(VAR_19, VAR_0, VAR_2, "come in\n");

 while (1) {
  FUNC_8(&VAR_19->locks.h2c_lock, VAR_32);
  if (VAR_20->h2c_setinprogress) {
   FUNC_0(VAR_19, VAR_0, VAR_2,
     "H2C set in progress! Wait to set..element_id(%d).\n",
     VAR_16);

   while (VAR_20->h2c_setinprogress) {
    FUNC_9(&VAR_19->locks.h2c_lock,
             VAR_32);
    VAR_31++;
    FUNC_0(VAR_19, VAR_0, VAR_2,
      "Wait 100 us (%d times)...\n",
       VAR_31);
    FUNC_10(100);

    if (VAR_31 > 1000)
     return;
    FUNC_8(&VAR_19->locks.h2c_lock,
        VAR_32);
   }
   FUNC_9(&VAR_19->locks.h2c_lock, VAR_32);
  } else {
   VAR_20->h2c_setinprogress = 1;
   FUNC_9(&VAR_19->locks.h2c_lock, VAR_32);
   break;
  }
 }

 while (!VAR_27) {
  VAR_21 = VAR_20->last_hmeboxnum;
  switch (VAR_21) {
  case 0:
   VAR_22 = VAR_4;
   VAR_23 = VAR_8;
   break;
  case 1:
   VAR_22 = VAR_5;
   VAR_23 = VAR_9;
   break;
  case 2:
   VAR_22 = VAR_6;
   VAR_23 = VAR_10;
   break;
  case 3:
   VAR_22 = VAR_7;
   VAR_23 = VAR_11;
   break;
  default:
   FUNC_0(VAR_19, VAR_1, VAR_2,
     "switch case %#x not processed\n", VAR_21);
   break;
  }

  VAR_25 = 0;
  VAR_24 = FUNC_6(VAR_19, VAR_3);

  if (VAR_24 != 0xEA) {
   VAR_25 = 1;
  } else {
   if (FUNC_6(VAR_19, VAR_13) == 0xEA ||
       FUNC_6(VAR_19, VAR_14) == 0xEA)
    FUNC_7(VAR_19, VAR_12 + 3, 0xFF);
  }

  if (VAR_25) {
   VAR_28 = 100;
   VAR_25 =
     FUNC_1(VAR_15, VAR_21);
   while (!VAR_25) {

    VAR_28--;
    if (VAR_28 == 0) {
     FUNC_0(VAR_19, VAR_0, VAR_2,
       "Waiting too long for FW read clear HMEBox(%d)!\n",
       VAR_21);
     break;
    }

    FUNC_10(10);

    VAR_25 =
      FUNC_1(VAR_15, VAR_21);
    VAR_24 = FUNC_6(VAR_19, 0x130);
    FUNC_0(VAR_19, VAR_0, VAR_2,
      "Waiting for FW read clear HMEBox(%d)!!! 0x130 = %2x\n",
      VAR_21, VAR_24);
   }
  }

  if (!VAR_25) {
   FUNC_0(VAR_19, VAR_0, VAR_2,
     "Write H2C register BOX[%d] fail!!!!! Fw do not read.\n",
     VAR_21);
   break;
  }

  FUNC_3(VAR_29, 0, sizeof(VAR_29));
  FUNC_3(VAR_30, 0, sizeof(VAR_30));
  VAR_29[0] = VAR_16;
  FUNC_0(VAR_19, VAR_0, VAR_2,
    "Write element_id box_reg(%4x) = %2x\n",
    VAR_22, VAR_16);

  switch (VAR_17) {
  case 1:
  case 2:
  case 3:

   FUNC_2((u8 *)(VAR_29) + 1,
          VAR_18 + VAR_26, VAR_17);

   for (VAR_33 = 0; VAR_33 < 4; VAR_33++) {
    FUNC_7(VAR_19, VAR_22 + VAR_33,
            VAR_29[VAR_33]);
   }
   break;
  case 4:
  case 5:
  case 6:
  case 7:

   FUNC_2((u8 *)(VAR_30),
          VAR_18 + VAR_26+3, VAR_17-3);
   FUNC_2((u8 *)(VAR_29) + 1,
          VAR_18 + VAR_26, 3);

   for (VAR_33 = 0; VAR_33 < 4; VAR_33++) {
    FUNC_7(VAR_19, VAR_23 + VAR_33,
            VAR_30[VAR_33]);
   }

   for (VAR_33 = 0; VAR_33 < 4; VAR_33++) {
    FUNC_7(VAR_19, VAR_22 + VAR_33,
            VAR_29[VAR_33]);
   }
   break;
  default:
   FUNC_0(VAR_19, VAR_1, VAR_2,
     "switch case %#x not processed\n", VAR_17);
   break;
  }

  VAR_27 = 1;

  VAR_20->last_hmeboxnum = VAR_21 + 1;
  if (VAR_20->last_hmeboxnum == 4)
   VAR_20->last_hmeboxnum = 0;

  FUNC_0(VAR_19, VAR_0, VAR_2,
    "pHalData->last_hmeboxnum  = %d\n",
     VAR_20->last_hmeboxnum);
 }

 FUNC_8(&VAR_19->locks.h2c_lock, VAR_32);
 VAR_20->h2c_setinprogress = 0;
 FUNC_9(&VAR_19->locks.h2c_lock, VAR_32);

 FUNC_0(VAR_19, VAR_0, VAR_2, "go out\n");
}
