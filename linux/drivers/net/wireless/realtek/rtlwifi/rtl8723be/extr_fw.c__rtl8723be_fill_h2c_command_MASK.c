
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


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct ieee80211_hw*,scalar_t__) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_3 (scalar_t__*,int ,int) ;
 int FUNC_4 (char*,...) ;
 struct rtl_hal* FUNC_5 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_7 (struct rtl_priv*,int) ;
 int FUNC_8 (struct rtl_priv*,scalar_t__,scalar_t__) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct ieee80211_hw *VAR_10, u8 VAR_11,
     u32 VAR_12, u8 *VAR_13)
{
 struct rtl_priv *VAR_14 = FUNC_6(VAR_10);
 struct rtl_hal *VAR_15 = FUNC_5(FUNC_6(VAR_10));
 u8 VAR_16;
 u16 VAR_17 = 0, VAR_18 = 0;
 u8 VAR_19;
 bool VAR_20 = 0;
 u8 VAR_21 = 0;
 bool VAR_22 = 0;
 u8 VAR_23 = 100;
 u8 VAR_24 = 100;
 u8 VAR_25[4], VAR_26[4];
 u32 VAR_27 = 0;
 unsigned long VAR_28;
 u8 VAR_29;

 FUNC_0(VAR_14, VAR_0, VAR_1, "come in\n");

 while (1) {
  FUNC_9(&VAR_14->locks.h2c_lock, VAR_28);
  if (VAR_15->h2c_setinprogress) {
   FUNC_0(VAR_14, VAR_0, VAR_1,
     "H2C set in progress! Wait to set..element_id(%d).\n",
     VAR_11);

   while (VAR_15->h2c_setinprogress) {
    FUNC_10(&VAR_14->locks.h2c_lock,
             VAR_28);
    VAR_27++;
    FUNC_0(VAR_14, VAR_0, VAR_1,
      "Wait 100 us (%d times)...\n",
      VAR_27);
    FUNC_11(100);

    if (VAR_27 > 1000)
     return;
    FUNC_9(&VAR_14->locks.h2c_lock,
        VAR_28);
   }
   FUNC_10(&VAR_14->locks.h2c_lock, VAR_28);
  } else {
   VAR_15->h2c_setinprogress = 1;
   FUNC_10(&VAR_14->locks.h2c_lock, VAR_28);
   break;
  }
 }

 while (!VAR_22) {
  VAR_24--;
  if (VAR_24 == 0) {
   FUNC_4("Write H2C fail because no trigger for FW INT!\n");
   break;
  }

  VAR_16 = VAR_15->last_hmeboxnum;
  switch (VAR_16) {
  case 0:
   VAR_17 = VAR_2;
   VAR_18 = VAR_6;
   break;
  case 1:
   VAR_17 = VAR_3;
   VAR_18 = VAR_7;
   break;
  case 2:
   VAR_17 = VAR_4;
   VAR_18 = VAR_8;
   break;
  case 3:
   VAR_17 = VAR_5;
   VAR_18 = VAR_9;
   break;
  default:
   FUNC_4("switch case %#x not processed\n",
          VAR_16);
   break;
  }

  VAR_20 = FUNC_1(VAR_10, VAR_16);
  while (!VAR_20) {
   VAR_23--;
   if (VAR_23 == 0) {
    FUNC_0(VAR_14, VAR_0, VAR_1,
      "Waiting too long for FW read clear HMEBox(%d)!\n",
      VAR_16);
    break;
   }

   FUNC_11(10);

   VAR_20 = FUNC_1(VAR_10,
        VAR_16);
   VAR_19 = FUNC_7(VAR_14, 0x130);
   FUNC_0(VAR_14, VAR_0, VAR_1,
     "Waiting for FW read clear HMEBox(%d)!!! 0x130 = %2x\n",
     VAR_16, VAR_19);
  }

  if (!VAR_20) {
   FUNC_0(VAR_14, VAR_0, VAR_1,
     "Write H2C register BOX[%d] fail!!!!! Fw do not read.\n",
     VAR_16);
   break;
  }

  FUNC_3(VAR_25, 0, sizeof(VAR_25));
  FUNC_3(VAR_26, 0, sizeof(VAR_26));
  VAR_25[0] = VAR_11;
  FUNC_0(VAR_14, VAR_0, VAR_1,
    "Write element_id box_reg(%4x) = %2x\n",
     VAR_17, VAR_11);

  switch (VAR_12) {
  case 1:
  case 2:
  case 3:

   FUNC_2((u8 *)(VAR_25) + 1,
          VAR_13 + VAR_21, VAR_12);

   for (VAR_29 = 0; VAR_29 < 4; VAR_29++) {
    FUNC_8(VAR_14, VAR_17 + VAR_29,
            VAR_25[VAR_29]);
   }
   break;
  case 4:
  case 5:
  case 6:
  case 7:

   FUNC_2((u8 *)(VAR_26),
          VAR_13 + VAR_21+3, VAR_12-3);
   FUNC_2((u8 *)(VAR_25) + 1,
          VAR_13 + VAR_21, 3);

   for (VAR_29 = 0; VAR_29 < 4; VAR_29++) {
    FUNC_8(VAR_14, VAR_18 + VAR_29,
            VAR_26[VAR_29]);
   }

   for (VAR_29 = 0; VAR_29 < 4; VAR_29++) {
    FUNC_8(VAR_14, VAR_17 + VAR_29,
            VAR_25[VAR_29]);
   }
   break;
  default:
   FUNC_4("switch case %#x not processed\n",
          VAR_12);
   break;
  }

  VAR_22 = 1;

  VAR_15->last_hmeboxnum = VAR_16 + 1;
  if (VAR_15->last_hmeboxnum == 4)
   VAR_15->last_hmeboxnum = 0;

  FUNC_0(VAR_14, VAR_0, VAR_1,
    "pHalData->last_hmeboxnum  = %d\n",
     VAR_15->last_hmeboxnum);
 }

 FUNC_9(&VAR_14->locks.h2c_lock, VAR_28);
 VAR_15->h2c_setinprogress = 0;
 FUNC_10(&VAR_14->locks.h2c_lock, VAR_28);

 FUNC_0(VAR_14, VAR_0, VAR_1, "go out\n");
}
