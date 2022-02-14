
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_ps_ctl {scalar_t__ dot11_psmode; scalar_t__ inactive_pwrstate; } ;
struct TYPE_2__ {int h2c_lock; } ;
struct rtl_priv {TYPE_1__ locks; } ;
struct rtl_hal {int h2c_setinprogress; int last_hmeboxnum; } ;
struct ieee80211_hw {int dummy; } ;
typedef int boxextcontent ;
typedef scalar_t__ boxcontent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int ,int) ;
 struct rtl_hal* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_6 (struct rtl_priv*) ;
 int FUNC_7 (struct rtl_priv*,int) ;
 int FUNC_8 (struct rtl_priv*,int,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct ieee80211_hw *VAR_17, u8 VAR_18,
          u32 VAR_19, u8 *VAR_20)
{
 struct rtl_priv *VAR_21 = FUNC_5(VAR_17);
 struct rtl_hal *VAR_22 = FUNC_4(FUNC_5(VAR_17));
 struct rtl_ps_ctl *VAR_23 = FUNC_6(FUNC_5(VAR_17));
 u8 VAR_24;
 u16 VAR_25 = 0, VAR_26 = 0;
 u8 VAR_27;
 bool VAR_28 = 0;
 u8 VAR_29 = 0;
 bool VAR_30 = 0;
 u8 VAR_31 = 100;
 u8 VAR_32[4], VAR_33[4];
 u32 VAR_34 = 0;
 unsigned long VAR_35;
 u8 VAR_36;

 if (VAR_23->dot11_psmode != VAR_3 ||
     VAR_23->inactive_pwrstate == VAR_4) {
  FUNC_0(VAR_21, VAR_0, VAR_2 ,
    "FillH2CCommand8192E(): Return because RF is off!!!\n");
  return;
 }

 FUNC_0(VAR_21, VAR_0, VAR_2 , "come in\n");




 while (1) {
  FUNC_9(&VAR_21->locks.h2c_lock, VAR_35);
  if (VAR_22->h2c_setinprogress) {
   FUNC_0(VAR_21, VAR_0, VAR_2 ,
     "H2C set in progress! Wait to set..element_id(%d).\n",
      VAR_18);

   while (VAR_22->h2c_setinprogress) {
    FUNC_10(&VAR_21->locks.h2c_lock,
             VAR_35);
    VAR_34++;
    FUNC_0(VAR_21, VAR_0, VAR_2 ,
      "Wait 100 us (%d times)...\n",
       VAR_34);
    FUNC_11(100);

    if (VAR_34 > 1000)
     return;
    FUNC_9(&VAR_21->locks.h2c_lock,
        VAR_35);
   }
   FUNC_10(&VAR_21->locks.h2c_lock, VAR_35);
  } else {
   VAR_22->h2c_setinprogress = 1;
   FUNC_10(&VAR_21->locks.h2c_lock, VAR_35);
   break;
  }
 }

 while (!VAR_30) {

  VAR_24 = VAR_22->last_hmeboxnum;
  switch (VAR_24) {
  case 0:
   VAR_25 = VAR_6;
   VAR_26 = VAR_10;
   break;
  case 1:
   VAR_25 = VAR_7;
   VAR_26 = VAR_11;
   break;
  case 2:
   VAR_25 = VAR_8;
   VAR_26 = VAR_12;
   break;
  case 3:
   VAR_25 = VAR_9;
   VAR_26 = VAR_13;
   break;
  default:
   FUNC_0(VAR_21, VAR_1, VAR_2,
     "switch case %#x not processed\n", VAR_24);
   break;
  }


  VAR_28 = 0;
  VAR_27 = FUNC_7(VAR_21, VAR_5);

  if (VAR_27 != 0xea) {
   VAR_28 = 1;
  } else {
   if (FUNC_7(VAR_21, VAR_15) == 0xea ||
       FUNC_7(VAR_21, VAR_16) == 0xea)
    FUNC_8(VAR_21, VAR_14 + 3, 0xff);
  }

  if (VAR_28) {
   VAR_31 = 100;
   VAR_28 = FUNC_1(VAR_17, VAR_24);
   while (!VAR_28) {
    VAR_31--;
    if (VAR_31 == 0) {
     FUNC_0(VAR_21, VAR_0, VAR_2 ,
       "Waiting too long for FW read clear HMEBox(%d)!!!\n",
       VAR_24);
     break;
    }
    FUNC_11(10);
    VAR_28 =
      FUNC_1(VAR_17, VAR_24);
    VAR_27 = FUNC_7(VAR_21, 0x130);
    FUNC_0(VAR_21, VAR_0, VAR_2 ,
      "Waiting for FW read clear HMEBox(%d)!!! 0x130 = %2x\n",
      VAR_24, VAR_27);
   }
  }




  if (!VAR_28) {
   FUNC_0(VAR_21, VAR_0, VAR_2 ,
     "Write H2C reg BOX[%d] fail,Fw don't read.\n",
     VAR_24);
   break;
  }

  FUNC_3(VAR_32, 0, sizeof(VAR_32));
  FUNC_3(VAR_33, 0, sizeof(VAR_33));
  VAR_32[0] = VAR_18;
  FUNC_0(VAR_21, VAR_0, VAR_2 ,
    "Write element_id box_reg(%4x) = %2x\n",
     VAR_25, VAR_18);

  switch (VAR_19) {
  case 1:
  case 2:
  case 3:

   FUNC_2((u8 *)(VAR_32) + 1,
          VAR_20 + VAR_29, VAR_19);

   for (VAR_36 = 0; VAR_36 < 4; VAR_36++) {
    FUNC_8(VAR_21, VAR_25 + VAR_36,
            VAR_32[VAR_36]);
   }
   break;
  case 4:
  case 5:
  case 6:
  case 7:

   FUNC_2((u8 *)(VAR_33),
          VAR_20 + VAR_29+3, VAR_19-3);
   FUNC_2((u8 *)(VAR_32) + 1,
          VAR_20 + VAR_29, 3);

   for (VAR_36 = 0; VAR_36 < 4; VAR_36++) {
    FUNC_8(VAR_21, VAR_26 + VAR_36,
            VAR_33[VAR_36]);
   }

   for (VAR_36 = 0; VAR_36 < 4; VAR_36++) {
    FUNC_8(VAR_21, VAR_25 + VAR_36,
            VAR_32[VAR_36]);
   }
   break;
  default:
   FUNC_0(VAR_21, VAR_1, VAR_2,
     "switch case %#x not processed\n", VAR_19);
   break;
  }

  VAR_30 = 1;

  VAR_22->last_hmeboxnum = VAR_24 + 1;
  if (VAR_22->last_hmeboxnum == 4)
   VAR_22->last_hmeboxnum = 0;

  FUNC_0(VAR_21, VAR_0, VAR_2 ,
    "pHalData->last_hmeboxnum  = %d\n",
     VAR_22->last_hmeboxnum);
 }

 FUNC_9(&VAR_21->locks.h2c_lock, VAR_35);
 VAR_22->h2c_setinprogress = 0;
 FUNC_10(&VAR_21->locks.h2c_lock, VAR_35);

 FUNC_0(VAR_21, VAR_0, VAR_2 , "go out\n");
}
