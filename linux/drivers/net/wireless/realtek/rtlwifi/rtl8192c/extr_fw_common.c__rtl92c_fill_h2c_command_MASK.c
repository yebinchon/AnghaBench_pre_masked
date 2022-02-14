
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int h2c_lock; } ;
struct rtl_priv {TYPE_1__ locks; } ;
struct rtl_hal {int h2c_setinprogress; scalar_t__ last_hmeboxnum; } ;
struct ieee80211_hw {int dummy; } ;
typedef int boxextcontent ;
typedef scalar_t__ boxcontent ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_2 (struct ieee80211_hw*,scalar_t__) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_4 (scalar_t__*,int ,int) ;
 int FUNC_5 (char*) ;
 struct rtl_hal* FUNC_6 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_7 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_8 (struct rtl_priv*,int) ;
 int FUNC_9 (struct rtl_priv*,scalar_t__,scalar_t__) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct ieee80211_hw *VAR_11,
         u8 VAR_12, u32 VAR_13, u8 *VAR_14)
{
 struct rtl_priv *VAR_15 = FUNC_7(VAR_11);
 struct rtl_hal *VAR_16 = FUNC_6(FUNC_7(VAR_11));
 u8 VAR_17;
 u16 VAR_18 = 0, VAR_19 = 0;
 u8 VAR_20;
 bool VAR_21 = 0;
 u8 VAR_22 = 0;
 bool VAR_23 = 0;
 u8 VAR_24 = 100;
 u8 VAR_25 = 100;
 u8 VAR_26[4], VAR_27[2];
 u32 VAR_28 = 0;
 unsigned long VAR_29;
 u8 VAR_30;

 FUNC_1(VAR_15, VAR_0, VAR_2, "come in\n");

 while (1) {
  FUNC_10(&VAR_15->locks.h2c_lock, VAR_29);
  if (VAR_16->h2c_setinprogress) {
   FUNC_1(VAR_15, VAR_0, VAR_2,
     "H2C set in progress! Wait to set..element_id(%d).\n",
     VAR_12);
   while (VAR_16->h2c_setinprogress) {
    FUNC_11(&VAR_15->locks.h2c_lock,
             VAR_29);
    VAR_28++;
    FUNC_1(VAR_15, VAR_0, VAR_2,
      "Wait 100 us (%d times)...\n",
       VAR_28);
    FUNC_12(100);

    if (VAR_28 > 1000)
     return;
    FUNC_10(&VAR_15->locks.h2c_lock,
        VAR_29);
   }
   FUNC_11(&VAR_15->locks.h2c_lock, VAR_29);
  } else {
   VAR_16->h2c_setinprogress = 1;
   FUNC_11(&VAR_15->locks.h2c_lock, VAR_29);
   break;
  }
 }

 while (!VAR_23) {
  VAR_25--;
  if (VAR_25 == 0) {
   FUNC_5("Write H2C fail because no trigger for FW INT!\n");
   break;
  }

  VAR_17 = VAR_16->last_hmeboxnum;
  switch (VAR_17) {
  case 0:
   VAR_18 = VAR_3;
   VAR_19 = VAR_7;
   break;
  case 1:
   VAR_18 = VAR_4;
   VAR_19 = VAR_8;
   break;
  case 2:
   VAR_18 = VAR_5;
   VAR_19 = VAR_9;
   break;
  case 3:
   VAR_18 = VAR_6;
   VAR_19 = VAR_10;
   break;
  default:
   FUNC_1(VAR_15, VAR_1, VAR_2,
     "switch case %#x not processed\n", VAR_17);
   break;
  }

  VAR_21 = FUNC_2(VAR_11, VAR_17);
  while (!VAR_21) {
   VAR_24--;
   if (VAR_24 == 0) {
    FUNC_1(VAR_15, VAR_0, VAR_2,
      "Waiting too long for FW read clear HMEBox(%d)!\n",
      VAR_17);
    break;
   }

   FUNC_12(10);

   VAR_21 = FUNC_2(VAR_11, VAR_17);
   VAR_20 = FUNC_8(VAR_15, 0x1BF);
   FUNC_1(VAR_15, VAR_0, VAR_2,
     "Waiting for FW read clear HMEBox(%d)!!! 0x1BF = %2x\n",
     VAR_17, VAR_20);
  }

  if (!VAR_21) {
   FUNC_1(VAR_15, VAR_0, VAR_2,
     "Write H2C register BOX[%d] fail!!!!! Fw do not read.\n",
     VAR_17);
   break;
  }

  FUNC_4(VAR_26, 0, sizeof(VAR_26));
  FUNC_4(VAR_27, 0, sizeof(VAR_27));
  VAR_26[0] = VAR_12;
  FUNC_1(VAR_15, VAR_0, VAR_2,
    "Write element_id box_reg(%4x) = %2x\n",
     VAR_18, VAR_12);

  switch (VAR_13) {
  case 1:
   VAR_26[0] &= ~(FUNC_0(7));
   FUNC_3((u8 *)(VAR_26) + 1,
          VAR_14 + VAR_22, 1);

   for (VAR_30 = 0; VAR_30 < 4; VAR_30++) {
    FUNC_9(VAR_15, VAR_18 + VAR_30,
            VAR_26[VAR_30]);
   }
   break;
  case 2:
   VAR_26[0] &= ~(FUNC_0(7));
   FUNC_3((u8 *)(VAR_26) + 1,
          VAR_14 + VAR_22, 2);

   for (VAR_30 = 0; VAR_30 < 4; VAR_30++) {
    FUNC_9(VAR_15, VAR_18 + VAR_30,
            VAR_26[VAR_30]);
   }
   break;
  case 3:
   VAR_26[0] &= ~(FUNC_0(7));
   FUNC_3((u8 *)(VAR_26) + 1,
          VAR_14 + VAR_22, 3);

   for (VAR_30 = 0; VAR_30 < 4; VAR_30++) {
    FUNC_9(VAR_15, VAR_18 + VAR_30,
            VAR_26[VAR_30]);
   }
   break;
  case 4:
   VAR_26[0] |= (FUNC_0(7));
   FUNC_3((u8 *)(VAR_27),
          VAR_14 + VAR_22, 2);
   FUNC_3((u8 *)(VAR_26) + 1,
          VAR_14 + VAR_22 + 2, 2);

   for (VAR_30 = 0; VAR_30 < 2; VAR_30++) {
    FUNC_9(VAR_15, VAR_19 + VAR_30,
            VAR_27[VAR_30]);
   }

   for (VAR_30 = 0; VAR_30 < 4; VAR_30++) {
    FUNC_9(VAR_15, VAR_18 + VAR_30,
            VAR_26[VAR_30]);
   }
   break;
  case 5:
   VAR_26[0] |= (FUNC_0(7));
   FUNC_3((u8 *)(VAR_27),
          VAR_14 + VAR_22, 2);
   FUNC_3((u8 *)(VAR_26) + 1,
          VAR_14 + VAR_22 + 2, 3);

   for (VAR_30 = 0; VAR_30 < 2; VAR_30++) {
    FUNC_9(VAR_15, VAR_19 + VAR_30,
            VAR_27[VAR_30]);
   }

   for (VAR_30 = 0; VAR_30 < 4; VAR_30++) {
    FUNC_9(VAR_15, VAR_18 + VAR_30,
            VAR_26[VAR_30]);
   }
   break;
  default:
   FUNC_1(VAR_15, VAR_1, VAR_2,
     "switch case %#x not processed\n", VAR_13);
   break;
  }

  VAR_23 = 1;

  VAR_16->last_hmeboxnum = VAR_17 + 1;
  if (VAR_16->last_hmeboxnum == 4)
   VAR_16->last_hmeboxnum = 0;

  FUNC_1(VAR_15, VAR_0, VAR_2,
    "pHalData->last_hmeboxnum  = %d\n",
     VAR_16->last_hmeboxnum);
 }

 FUNC_10(&VAR_15->locks.h2c_lock, VAR_29);
 VAR_16->h2c_setinprogress = 0;
 FUNC_11(&VAR_15->locks.h2c_lock, VAR_29);

 FUNC_1(VAR_15, VAR_0, VAR_2, "go out\n");
}
