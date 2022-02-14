
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_phy {scalar_t__ current_chan_bw; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_hal {int current_bandtype; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

 int VAR_3 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_2 (struct ieee80211_hw*,int,int,int) ;
 int FUNC_3 (struct ieee80211_hw*,int,int,int) ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ieee80211_hw*,int,int) ;
 int FUNC_6 (struct ieee80211_hw*,int,int,int) ;
 struct rtl_hal* FUNC_7 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct ieee80211_hw*,int,int,int) ;
 int FUNC_10 (struct ieee80211_hw*,int,int,int,int) ;
 int FUNC_11 (struct rtl_priv*,int,int) ;

__attribute__((used)) static void FUNC_12(struct ieee80211_hw *VAR_5, enum radio_path VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_8(VAR_5);
 struct rtl_phy *VAR_8 = &VAR_7->phy;
 struct rtl_hal *VAR_9 = FUNC_7(FUNC_8(VAR_5));

 u32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15 = 0, VAR_16;
 int VAR_17 = 0, VAR_18 = 0, VAR_19 = 0, VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;
 int VAR_23[VAR_4], VAR_24[VAR_4], VAR_25[VAR_4],
  VAR_26[VAR_4], VAR_27[VAR_4], VAR_28[VAR_4],
  VAR_29[VAR_4], VAR_30[VAR_4];
 bool VAR_31 = 0, VAR_32 = 0;
 bool VAR_33 = 0;
 int VAR_34, VAR_35, VAR_36[3], VAR_37[3],
  VAR_38, VAR_39 = 0, VAR_40 = 0, VAR_41 = 0, VAR_42 = 0;

 FUNC_1(VAR_7, VAR_0, VAR_1,
   "BandWidth = %d.\n",
    VAR_8->current_chan_bw);
 if (VAR_8->current_chan_bw == VAR_2)
  VAR_33 = 1;

 while (VAR_15 < VAR_4) {
  switch (VAR_6) {
  case 128:
   VAR_16 = FUNC_6(VAR_5, VAR_6, 0x65, 0xffffffff);

   FUNC_9(VAR_5, 0x82c, FUNC_0(31), 0x0);


   FUNC_11(VAR_7, 0xc60, 0x77777777);
   FUNC_11(VAR_7, 0xc64, 0x77777777);
   FUNC_11(VAR_7, 0xc68, 0x19791979);
   FUNC_11(VAR_7, 0xc6c, 0x19791979);
   FUNC_11(VAR_7, 0xc70, 0x19791979);
   FUNC_11(VAR_7, 0xc74, 0x19791979);
   FUNC_11(VAR_7, 0xc78, 0x19791979);
   FUNC_11(VAR_7, 0xc7c, 0x19791979);
   FUNC_11(VAR_7, 0xc80, 0x19791979);
   FUNC_11(VAR_7, 0xc84, 0x19791979);

   FUNC_9(VAR_5, 0xc00, 0xf, 0x4);




   FUNC_9(VAR_5, 0xc5c, FUNC_0(26) | FUNC_0(25) | FUNC_0(24), 0x7);


   FUNC_10(VAR_5, VAR_6, 0xef, VAR_3, 0x80002);
   FUNC_10(VAR_5, VAR_6, 0x18, 0x00c00, 0x3);
   FUNC_10(VAR_5, VAR_6, 0x30, VAR_3, 0x20000);
   FUNC_10(VAR_5, VAR_6, 0x31, VAR_3, 0x0003f);
   FUNC_10(VAR_5, VAR_6, 0x32, VAR_3, 0xf3fc3);
   FUNC_10(VAR_5, VAR_6, 0x65, VAR_3, 0x931d5);
   FUNC_10(VAR_5, VAR_6, 0x8f, VAR_3, 0x8a001);
   FUNC_9(VAR_5, 0xcb8, 0xf, 0xd);
   FUNC_11(VAR_7, 0x90c, 0x00008000);
   FUNC_11(VAR_7, 0xb00, 0x03000100);
   FUNC_9(VAR_5, 0xc94, FUNC_0(0), 0x1);
   FUNC_11(VAR_7, 0x978, 0x29002000);
   FUNC_11(VAR_7, 0x97c, 0xa9002000);
   FUNC_11(VAR_7, 0x984, 0x00462910);

   FUNC_9(VAR_5, 0x82c, FUNC_0(31), 0x1);
   FUNC_11(VAR_7, 0xc88, 0x821403f4);

   if (VAR_9->current_bandtype)
    FUNC_11(VAR_7, 0xc8c, 0x68163e96);
   else
    FUNC_11(VAR_7, 0xc8c, 0x28163e96);

   FUNC_11(VAR_7, 0xc80, 0x18008c10);
   FUNC_11(VAR_7, 0xc84, 0x38008c10);
   FUNC_11(VAR_7, 0xcb8, 0x00100000);
   FUNC_11(VAR_7, 0x980, 0xfa000000);
   FUNC_11(VAR_7, 0x980, 0xf8000000);

   FUNC_4(10);
   FUNC_11(VAR_7, 0xcb8, 0x00000000);

   FUNC_9(VAR_5, 0x82c, FUNC_0(31), 0x0);
   FUNC_10(VAR_5, VAR_6, 0x58, 0x7fe00, FUNC_6(VAR_5, VAR_6, 0x8, 0xffc00));

   switch (VAR_8->current_chan_bw) {
   case 1:
    FUNC_10(VAR_5, VAR_6, 0x18, 0x00c00, 0x1);
    break;
   case 2:
    FUNC_10(VAR_5, VAR_6, 0x18, 0x00c00, 0x0);
    break;
   default:
    break;
   }

   FUNC_9(VAR_5, 0x82c, FUNC_0(31), 0x1);


   FUNC_9(VAR_5, 0x82c, FUNC_0(31), 0x0);
   FUNC_10(VAR_5, VAR_6, 0xef, VAR_3, 0x80000);
   FUNC_10(VAR_5, VAR_6, 0x30, VAR_3, 0x20000);
   FUNC_10(VAR_5, VAR_6, 0x31, VAR_3, 0x0003f);
   FUNC_10(VAR_5, VAR_6, 0x32, VAR_3, 0xf3fc3);
   FUNC_10(VAR_5, VAR_6, 0x65, VAR_3, 0x931d5);
   FUNC_10(VAR_5, VAR_6, 0x8f, VAR_3, 0x8a001);
   FUNC_10(VAR_5, VAR_6, 0xef, VAR_3, 0x00000);

   FUNC_11(VAR_7, 0x90c, 0x00008000);
   FUNC_11(VAR_7, 0xb00, 0x03000100);
   FUNC_9(VAR_5, 0xc94, FUNC_0(0), 0x1);
   FUNC_11(VAR_7, 0x978, 0x29002000);
   FUNC_11(VAR_7, 0x97c, 0xa9002000);
   FUNC_11(VAR_7, 0x984, 0x0046a910);

   FUNC_9(VAR_5, 0x82c, FUNC_0(31), 0x1);
   FUNC_11(VAR_7, 0xc88, 0x821403f1);
   if (VAR_9->current_bandtype)
    FUNC_11(VAR_7, 0xc8c, 0x40163e96);
   else
    FUNC_11(VAR_7, 0xc8c, 0x00163e96);

   if (VAR_33 == 1) {
    FUNC_1(VAR_7, VAR_0, VAR_1, "VDF_enable\n");
    for (VAR_35 = 0; VAR_35 <= 2; VAR_35++) {
     switch (VAR_35) {
     case 0:
      FUNC_11(VAR_7, 0xc80, 0x18008c38);
      FUNC_11(VAR_7, 0xc84, 0x38008c38);
      FUNC_9(VAR_5, 0xce8, FUNC_0(31), 0x0);
      break;
     case 1:
      FUNC_9(VAR_5, 0xc80, FUNC_0(28), 0x0);
      FUNC_9(VAR_5, 0xc84, FUNC_0(28), 0x0);
      FUNC_9(VAR_5, 0xce8, FUNC_0(31), 0x0);
      break;
     case 2:
      FUNC_1(VAR_7, VAR_0, VAR_1,
       "vdf_y[1] = %x;;;vdf_y[0] = %x\n", VAR_36[1]>>21 & 0x00007ff, VAR_36[0]>>21 & 0x00007ff);
      FUNC_1(VAR_7, VAR_0, VAR_1,
       "vdf_x[1] = %x;;;vdf_x[0] = %x\n", VAR_37[1]>>21 & 0x00007ff, VAR_37[0]>>21 & 0x00007ff);
      VAR_29[VAR_15] = (VAR_36[1]>>20)-(VAR_36[0]>>20);
      VAR_29[VAR_15] = ((16*VAR_29[VAR_15])*10000/15708);
      VAR_29[VAR_15] = (VAR_29[VAR_15] >> 1)+(VAR_29[VAR_15] & FUNC_0(0));
      FUNC_11(VAR_7, 0xc80, 0x18008c20);
      FUNC_11(VAR_7, 0xc84, 0x38008c20);
      FUNC_9(VAR_5, 0xce8, FUNC_0(31), 0x1);
      FUNC_9(VAR_5, 0xce8, 0x3fff0000, VAR_29[VAR_15] & 0x00003fff);
      break;
     default:
      break;
     }
     FUNC_11(VAR_7, 0xcb8, 0x00100000);
     VAR_14 = 0;
     while (1) {

      FUNC_11(VAR_7, 0x980, 0xfa000000);
      FUNC_11(VAR_7, 0x980, 0xf8000000);

      FUNC_4(10);
      FUNC_11(VAR_7, 0xcb8, 0x00000000);
      VAR_12 = 0;
      while (1) {
       VAR_13 = FUNC_5(VAR_5, 0xd00, FUNC_0(10));
       if ((~VAR_13) || (VAR_12 > 20))
        break;
       else{
        FUNC_4(1);
        VAR_12++;
       }
      }

      if (VAR_12 < 20) {

       VAR_10 = FUNC_5(VAR_5, 0xd00, FUNC_0(12));

       if (~VAR_10) {
        FUNC_11(VAR_7, 0xcb8, 0x02000000);
        VAR_37[VAR_35] = FUNC_5(VAR_5, 0xd00, 0x07ff0000)<<21;
        FUNC_11(VAR_7, 0xcb8, 0x04000000);
        VAR_36[VAR_35] = FUNC_5(VAR_5, 0xd00, 0x07ff0000)<<21;
        VAR_31 = 1;
        break;
       } else {
        FUNC_9(VAR_5, 0xccc, 0x000007ff, 0x0);
        FUNC_9(VAR_5, 0xcd4, 0x000007ff, 0x200);
        VAR_31 = 0;
        VAR_14++;
        if (VAR_14 == 10)
         break;
       }
      } else {
       VAR_31 = 0;
       VAR_14++;
       if (VAR_14 == 10)
        break;
      }
     }
    }
    if (VAR_35 == 3) {
     VAR_23[VAR_15] = VAR_37[VAR_35-1];
     VAR_24[VAR_15] = VAR_36[VAR_35-1];
    }
   } else {
    FUNC_11(VAR_7, 0xc80, 0x18008c10);
    FUNC_11(VAR_7, 0xc84, 0x38008c10);
    FUNC_11(VAR_7, 0xcb8, 0x00100000);
    VAR_14 = 0;
    while (1) {

     FUNC_11(VAR_7, 0x980, 0xfa000000);
     FUNC_11(VAR_7, 0x980, 0xf8000000);

     FUNC_4(10);
     FUNC_11(VAR_7, 0xcb8, 0x00000000);
     VAR_12 = 0;
     while (1) {
      VAR_13 = FUNC_5(VAR_5, 0xd00, FUNC_0(10));
      if ((~VAR_13) || (VAR_12 > 20))
       break;
      else{
       FUNC_4(1);
       VAR_12++;
      }
     }

     if (VAR_12 < 20) {

      VAR_10 = FUNC_5(VAR_5, 0xd00, FUNC_0(12));

      if (~VAR_10) {
       FUNC_11(VAR_7, 0xcb8, 0x02000000);
       VAR_23[VAR_15] = FUNC_5(VAR_5, 0xd00, 0x07ff0000)<<21;
       FUNC_11(VAR_7, 0xcb8, 0x04000000);
       VAR_24[VAR_15] = FUNC_5(VAR_5, 0xd00, 0x07ff0000)<<21;
       VAR_31 = 1;
       break;
      } else {
       FUNC_9(VAR_5, 0xccc, 0x000007ff, 0x0);
       FUNC_9(VAR_5, 0xcd4, 0x000007ff, 0x200);
       VAR_31 = 0;
       VAR_14++;
       if (VAR_14 == 10)
        break;
      }
     } else {
      VAR_31 = 0;
      VAR_14++;
      if (VAR_14 == 10)
       break;
     }
    }
   }

   if (VAR_31 == 0)
    break;

   if (VAR_33 == 1) {
    FUNC_9(VAR_5, 0xce8, FUNC_0(31), 0x0);
    FUNC_1(VAR_7, VAR_0, VAR_1, "RXVDF Start\n");
    for (VAR_35 = 0; VAR_35 <= 2; VAR_35++) {

     FUNC_9(VAR_5, 0x82c, FUNC_0(31), 0x0);

     FUNC_10(VAR_5, VAR_6, 0xef, VAR_3, 0x80000);
     FUNC_10(VAR_5, VAR_6, 0x30, VAR_3, 0x30000);
     FUNC_10(VAR_5, VAR_6, 0x31, VAR_3, 0x00029);
     FUNC_10(VAR_5, VAR_6, 0x32, VAR_3, 0xd7ffb);
     FUNC_10(VAR_5, VAR_6, 0x65, VAR_3, VAR_16);
     FUNC_10(VAR_5, VAR_6, 0x8f, VAR_3, 0x8a001);
     FUNC_10(VAR_5, VAR_6, 0xef, VAR_3, 0x00000);

     FUNC_9(VAR_5, 0xcb8, 0xf, 0xd);
     FUNC_11(VAR_7, 0x978, 0x29002000);
     FUNC_11(VAR_7, 0x97c, 0xa9002000);
     FUNC_11(VAR_7, 0x984, 0x0046a910);
     FUNC_11(VAR_7, 0x90c, 0x00008000);
     FUNC_11(VAR_7, 0xb00, 0x03000100);
     FUNC_9(VAR_5, 0x82c, FUNC_0(31), 0x1);
     switch (VAR_35) {
     case 0:
      {
       FUNC_11(VAR_7, 0xc80, 0x18008c38);
       FUNC_11(VAR_7, 0xc84, 0x38008c38);
       FUNC_9(VAR_5, 0xce8, FUNC_0(30), 0x0);
      }
      break;
     case 1:
      {
       FUNC_11(VAR_7, 0xc80, 0x08008c38);
       FUNC_11(VAR_7, 0xc84, 0x28008c38);
       FUNC_9(VAR_5, 0xce8, FUNC_0(30), 0x0);
      }
      break;
     case 2:
      {
       FUNC_1(VAR_7, VAR_0, VAR_1,
       "VDF_Y[1] = %x;;;VDF_Y[0] = %x\n",
       VAR_36[1]>>21 & 0x00007ff, VAR_36[0]>>21 & 0x00007ff);
       FUNC_1(VAR_7, VAR_0, VAR_1,
       "VDF_X[1] = %x;;;VDF_X[0] = %x\n",
       VAR_37[1]>>21 & 0x00007ff, VAR_37[0]>>21 & 0x00007ff);
       VAR_30[VAR_15] = (VAR_36[1]>>20)-(VAR_36[0]>>20);
       FUNC_1(VAR_7, VAR_0, VAR_1, "Rx_dt = %d\n", VAR_30[VAR_15]);
       VAR_30[VAR_15] = ((16*VAR_30[VAR_15])*10000/13823);
       VAR_30[VAR_15] = (VAR_30[VAR_15] >> 1)+(VAR_30[VAR_15] & FUNC_0(0));
       FUNC_11(VAR_7, 0xc80, 0x18008c20);
       FUNC_11(VAR_7, 0xc84, 0x38008c20);
       FUNC_9(VAR_5, 0xce8, 0x00003fff, VAR_30[VAR_15] & 0x00003fff);
      }
      break;
     default:
      break;
     }
     FUNC_11(VAR_7, 0xc88, 0x821603e0);
     FUNC_11(VAR_7, 0xc8c, 0x68163e96);
     FUNC_11(VAR_7, 0xcb8, 0x00100000);
     VAR_14 = 0;
     while (1) {

      FUNC_11(VAR_7, 0x980, 0xfa000000);
      FUNC_11(VAR_7, 0x980, 0xf8000000);

      FUNC_4(10);
      FUNC_11(VAR_7, 0xcb8, 0x00000000);
      VAR_12 = 0;
      while (1) {
       VAR_13 = FUNC_5(VAR_5, 0xd00, FUNC_0(10));
       if ((~VAR_13) || (VAR_12 > 20))
        break;
       else{
        FUNC_4(1);
        VAR_12++;
       }
      }

      if (VAR_12 < 20) {

       VAR_10 = FUNC_5(VAR_5, 0xd00, FUNC_0(12));

       if (~VAR_10) {
        FUNC_11(VAR_7, 0xcb8, 0x02000000);
        VAR_25[VAR_15] = FUNC_5(VAR_5, 0xd00, 0x07ff0000)<<21;
        FUNC_11(VAR_7, 0xcb8, 0x04000000);
        VAR_26[VAR_15] = FUNC_5(VAR_5, 0xd00, 0x07ff0000)<<21;
        VAR_31 = 1;
        break;
       } else{
        VAR_31 = 0;
        VAR_14++;
        if (VAR_14 == 10)
         break;
       }
      } else {
       VAR_31 = 0;
       VAR_14++;
       if (VAR_14 == 10)
        break;
      }
     }

     if (VAR_31 == 0) {
      VAR_25[VAR_15] = VAR_23[VAR_15];
      VAR_26[VAR_15] = VAR_24[VAR_15];
      VAR_31 = 1;
      FUNC_1(VAR_7,
        VAR_0,
        VAR_1,
        "RXK Step 1 fail\n");
     }


     FUNC_9(VAR_5, 0x82c, FUNC_0(31), 0x0);

     FUNC_10(VAR_5, VAR_6, 0xef, VAR_3, 0x80000);
     FUNC_10(VAR_5, VAR_6, 0x30, VAR_3, 0x30000);
     FUNC_10(VAR_5, VAR_6, 0x31, VAR_3, 0x0002f);
     FUNC_10(VAR_5, VAR_6, 0x32, VAR_3, 0xfffbb);
     FUNC_10(VAR_5, VAR_6, 0x8f, VAR_3, 0x88001);
     FUNC_10(VAR_5, VAR_6, 0x65, VAR_3, 0x931d8);
     FUNC_10(VAR_5, VAR_6, 0xef, VAR_3, 0x00000);

     FUNC_9(VAR_5, 0x978, 0x03FF8000, (VAR_25[VAR_15])>>21&0x000007ff);
     FUNC_9(VAR_5, 0x978, 0x000007FF, (VAR_26[VAR_15])>>21&0x000007ff);
     FUNC_9(VAR_5, 0x978, FUNC_0(31), 0x1);
     FUNC_9(VAR_5, 0x97c, FUNC_0(31), 0x0);
     FUNC_9(VAR_5, 0xcb8, 0xF, 0xe);
     FUNC_11(VAR_7, 0x90c, 0x00008000);
     FUNC_11(VAR_7, 0x984, 0x0046a911);

     FUNC_9(VAR_5, 0x82c, FUNC_0(31), 0x1);
     FUNC_9(VAR_5, 0xc80, FUNC_0(29), 0x1);
     FUNC_9(VAR_5, 0xc84, FUNC_0(29), 0x0);
     FUNC_11(VAR_7, 0xc88, 0x02140119);

     FUNC_11(VAR_7, 0xc8c, 0x28160d00);

     if (VAR_35 == 2)
      FUNC_9(VAR_5, 0xce8, FUNC_0(30), 0x1);
     FUNC_11(VAR_7, 0xcb8, 0x00100000);

     VAR_14 = 0;
     while (1) {

      FUNC_11(VAR_7, 0x980, 0xfa000000);
      FUNC_11(VAR_7, 0x980, 0xf8000000);

      FUNC_4(10);
      FUNC_11(VAR_7, 0xcb8, 0x00000000);
      VAR_12 = 0;
      while (1) {
       VAR_13 = FUNC_5(VAR_5, 0xd00, FUNC_0(10));
       if ((~VAR_13) || (VAR_12 > 20))
        break;
       else{
        FUNC_4(1);
        VAR_12++;
       }
      }

      if (VAR_12 < 20) {

       VAR_11 = FUNC_5(VAR_5, 0xd00, FUNC_0(11));
       if (VAR_11 == 0) {
        FUNC_11(VAR_7, 0xcb8, 0x06000000);
        VAR_37[VAR_35] = FUNC_5(VAR_5, 0xd00, 0x07ff0000)<<21;
        FUNC_11(VAR_7, 0xcb8, 0x08000000);
        VAR_36[VAR_35] = FUNC_5(VAR_5, 0xd00, 0x07ff0000)<<21;
        VAR_32 = 1;
        break;
       } else {
        FUNC_9(VAR_5, 0xc10, 0x000003ff, 0x200>>1);
        FUNC_9(VAR_5, 0xc10, 0x03ff0000, 0x0>>1);
        VAR_32 = 0;
        VAR_14++;
        if (VAR_14 == 10)
         break;

       }
      } else{
       VAR_32 = 0;
       VAR_14++;
       if (VAR_14 == 10)
        break;
      }
     }

    }
    if (VAR_35 == 3) {
     VAR_27[VAR_15] = VAR_37[VAR_35-1];
     VAR_28[VAR_15] = VAR_36[VAR_35-1];
    }
    FUNC_9(VAR_5, 0xce8, FUNC_0(31), 0x1);
   }

   else{

    FUNC_9(VAR_5, 0x82c, FUNC_0(31), 0x0);

    FUNC_10(VAR_5, VAR_6, 0xef, VAR_3, 0x80000);
    FUNC_10(VAR_5, VAR_6, 0x30, VAR_3, 0x30000);
    FUNC_10(VAR_5, VAR_6, 0x31, VAR_3, 0x00029);
    FUNC_10(VAR_5, VAR_6, 0x32, VAR_3, 0xd7ffb);
    FUNC_10(VAR_5, VAR_6, 0x65, VAR_3, VAR_16);
    FUNC_10(VAR_5, VAR_6, 0x8f, VAR_3, 0x8a001);
    FUNC_10(VAR_5, VAR_6, 0xef, VAR_3, 0x00000);
    FUNC_11(VAR_7, 0x90c, 0x00008000);
    FUNC_11(VAR_7, 0xb00, 0x03000100);
    FUNC_11(VAR_7, 0x984, 0x0046a910);

    FUNC_9(VAR_5, 0x82c, FUNC_0(31), 0x1);
    FUNC_11(VAR_7, 0xc80, 0x18008c10);
    FUNC_11(VAR_7, 0xc84, 0x38008c10);
    FUNC_11(VAR_7, 0xc88, 0x821603e0);

    FUNC_11(VAR_7, 0xcb8, 0x00100000);
    VAR_14 = 0;
    while (1) {

     FUNC_11(VAR_7, 0x980, 0xfa000000);
     FUNC_11(VAR_7, 0x980, 0xf8000000);

     FUNC_4(10);
     FUNC_11(VAR_7, 0xcb8, 0x00000000);
     VAR_12 = 0;
     while (1) {
      VAR_13 = FUNC_5(VAR_5, 0xd00, FUNC_0(10));
      if ((~VAR_13) || (VAR_12 > 20))
       break;
      else{
       FUNC_4(1);
       VAR_12++;
      }
     }

     if (VAR_12 < 20) {

      VAR_10 = FUNC_5(VAR_5, 0xd00, FUNC_0(12));

      if (~VAR_10) {
       FUNC_11(VAR_7, 0xcb8, 0x02000000);
       VAR_25[VAR_15] = FUNC_5(VAR_5, 0xd00, 0x07ff0000)<<21;
       FUNC_11(VAR_7, 0xcb8, 0x04000000);
       VAR_26[VAR_15] = FUNC_5(VAR_5, 0xd00, 0x07ff0000)<<21;
       VAR_31 = 1;
       break;
      } else {
       VAR_31 = 0;
       VAR_14++;
       if (VAR_14 == 10)
        break;
      }
     } else{
      VAR_31 = 0;
      VAR_14++;
      if (VAR_14 == 10)
       break;
     }
    }

    if (VAR_31 == 0) {
     VAR_25[VAR_15] = VAR_23[VAR_15];
     VAR_26[VAR_15] = VAR_24[VAR_15];
     VAR_31 = 1;
     FUNC_1(VAR_7, VAR_0,
       VAR_1, "1");
    }


    FUNC_9(VAR_5, 0x82c, FUNC_0(31), 0x0);

    FUNC_10(VAR_5, VAR_6, 0xef, VAR_3, 0x80000);
    FUNC_10(VAR_5, VAR_6, 0x30, VAR_3, 0x30000);
    FUNC_10(VAR_5, VAR_6, 0x31, VAR_3, 0x0002f);
    FUNC_10(VAR_5, VAR_6, 0x32, VAR_3, 0xfffbb);
    FUNC_10(VAR_5, VAR_6, 0x8f, VAR_3, 0x88001);
    FUNC_10(VAR_5, VAR_6, 0x65, VAR_3, 0x931d8);
    FUNC_10(VAR_5, VAR_6, 0xef, VAR_3, 0x00000);

    FUNC_9(VAR_5, 0x978, 0x03FF8000, (VAR_25[VAR_15])>>21&0x000007ff);
    FUNC_9(VAR_5, 0x978, 0x000007FF, (VAR_26[VAR_15])>>21&0x000007ff);
    FUNC_9(VAR_5, 0x978, FUNC_0(31), 0x1);
    FUNC_9(VAR_5, 0x97c, FUNC_0(31), 0x0);

    FUNC_11(VAR_7, 0x90c, 0x00008000);
    FUNC_11(VAR_7, 0x984, 0x0046a911);

    FUNC_9(VAR_5, 0x82c, FUNC_0(31), 0x1);
    FUNC_11(VAR_7, 0xc80, 0x38008c10);
    FUNC_11(VAR_7, 0xc84, 0x18008c10);
    FUNC_11(VAR_7, 0xc88, 0x02140119);

    FUNC_11(VAR_7, 0xc8c, 0x28160d00);

    FUNC_11(VAR_7, 0xcb8, 0x00100000);

    VAR_14 = 0;
    while (1) {

     FUNC_11(VAR_7, 0x980, 0xfa000000);
     FUNC_11(VAR_7, 0x980, 0xf8000000);

     FUNC_4(10);
     FUNC_11(VAR_7, 0xcb8, 0x00000000);
     VAR_12 = 0;
     while (1) {
      VAR_13 = FUNC_5(VAR_5, 0xd00, FUNC_0(10));
      if ((~VAR_13) || (VAR_12 > 20))
       break;
      else{
       FUNC_4(1);
       VAR_12++;
      }
     }

     if (VAR_12 < 20) {

      VAR_11 = FUNC_5(VAR_5, 0xd00, FUNC_0(11));
      if (VAR_11 == 0) {
       FUNC_11(VAR_7, 0xcb8, 0x06000000);
       VAR_27[VAR_15] = FUNC_5(VAR_5, 0xd00, 0x07ff0000)<<21;
       FUNC_11(VAR_7, 0xcb8, 0x08000000);
       VAR_28[VAR_15] = FUNC_5(VAR_5, 0xd00, 0x07ff0000)<<21;
       VAR_32 = 1;
       break;
      } else{
       FUNC_9(VAR_5, 0xc10, 0x000003ff, 0x200>>1);
       FUNC_9(VAR_5, 0xc10, 0x03ff0000, 0x0>>1);
       VAR_32 = 0;
       VAR_14++;
       if (VAR_14 == 10)
        break;

      }
     } else{
      VAR_32 = 0;
      VAR_14++;
      if (VAR_14 == 10)
       break;
     }
    }
   }

   if (VAR_31)
    VAR_21++;
   if (VAR_32)
    VAR_22++;
   FUNC_9(VAR_5, 0x82c, FUNC_0(31), 0x0);
   FUNC_10(VAR_5, VAR_6, 0x65, VAR_3, VAR_16);
   break;
  default:
   break;
  }
  VAR_15++;
 }


 switch (VAR_6) {
 case 128:
  FUNC_1(VAR_7, VAR_0, VAR_1,
    "========Path_A =======\n");
  if (VAR_21 == 0)
   break;

  for (VAR_34 = 0; VAR_34 < VAR_21; VAR_34++) {
   FUNC_1(VAR_7, VAR_0, VAR_1,
     "TX_X0_RXK[%d] = %x ;; TX_Y0_RXK[%d] = %x\n", VAR_34,
     (VAR_25[VAR_34])>>21&0x000007ff, VAR_34,
     (VAR_26[VAR_34])>>21&0x000007ff);
   FUNC_1(VAR_7, VAR_0, VAR_1,
     "TX_X0[%d] = %x ;; TX_Y0[%d] = %x\n", VAR_34,
     (VAR_23[VAR_34])>>21&0x000007ff, VAR_34,
     (VAR_24[VAR_34])>>21&0x000007ff);
  }
  for (VAR_34 = 0; VAR_34 < VAR_21; VAR_34++) {
   for (VAR_38 = VAR_34+1; VAR_38 < VAR_21; VAR_38++) {
    VAR_39 = (VAR_23[VAR_34]>>21) - (VAR_23[VAR_38]>>21);
    if (VAR_39 < 3 && VAR_39 > -3) {
     VAR_40 = (VAR_24[VAR_34]>>21) - (VAR_24[VAR_38]>>21);
     if (VAR_40 < 3 && VAR_40 > -3) {
      VAR_17 = ((VAR_23[VAR_34]>>21) + (VAR_23[VAR_38]>>21))/2;
      VAR_18 = ((VAR_24[VAR_34]>>21) + (VAR_24[VAR_38]>>21))/2;
      VAR_41 = 1;
      break;
     }
    }
   }
   if (VAR_41 == 1)
    break;
  }

  if (VAR_41 == 1)
   FUNC_3(VAR_5, VAR_6, VAR_17, VAR_18);
  else
   FUNC_3(VAR_5, VAR_6, 0x200, 0x0);

  if (VAR_22 == 0)
   break;

  for (VAR_34 = 0; VAR_34 < VAR_22; VAR_34++)
   FUNC_1(VAR_7, VAR_0, VAR_1,
    "RX_X0[%d] = %x ;; RX_Y0[%d] = %x\n", VAR_34,
    (VAR_27[VAR_34])>>21&0x000007ff, VAR_34,
    (VAR_28[VAR_34])>>21&0x000007ff);
  for (VAR_34 = 0; VAR_34 < VAR_22; VAR_34++) {
   for (VAR_38 = VAR_34+1; VAR_38 < VAR_22; VAR_38++) {
    VAR_39 = (VAR_27[VAR_34]>>21) - (VAR_27[VAR_38]>>21);
    if (VAR_39 < 4 && VAR_39 > -4) {
     VAR_40 = (VAR_28[VAR_34]>>21) - (VAR_28[VAR_38]>>21);
     if (VAR_40 < 4 && VAR_40 > -4) {
      VAR_19 = ((VAR_27[VAR_34]>>21) + (VAR_27[VAR_38]>>21))/2;
      VAR_20 = ((VAR_28[VAR_34]>>21) + (VAR_28[VAR_38]>>21))/2;
      VAR_42 = 1;
      break;
     }
    }
   }
   if (VAR_42 == 1)
    break;
  }

  if (VAR_42 == 1)
   FUNC_2(VAR_5, VAR_6, VAR_19, VAR_20);
  else
   FUNC_2(VAR_5, VAR_6, 0x200, 0x0);
  break;
 default:
  break;
 }
}
