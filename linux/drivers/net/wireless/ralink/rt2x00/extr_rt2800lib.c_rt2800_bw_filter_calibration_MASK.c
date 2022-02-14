
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rt2x00_dev {int flags; struct rt2800_drv_data* drv_data; } ;
struct rt2800_drv_data {int tx_calibration_bw20; int tx_calibration_bw40; int rx_calibration_bw20; int rx_calibration_bw40; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rt2x00_dev*,int,int) ;
 int FUNC_1 (struct rt2x00_dev*,int) ;
 int FUNC_2 (struct rt2x00_dev*,int,int) ;
 int FUNC_3 (struct rt2x00_dev*,int) ;
 int FUNC_4 (struct rt2x00_dev*,int,int) ;
 char FUNC_5 (struct rt2x00_dev*) ;
 int FUNC_6 (struct rt2x00_dev*,int ) ;
 int FUNC_7 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_8 (struct rt2x00_dev*,int) ;
 int FUNC_9 (struct rt2x00_dev*,int,int) ;
 int FUNC_10 (struct rt2x00_dev*,int,int,int) ;
 int FUNC_11 (int*,int ,int) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static void FUNC_14(struct rt2x00_dev *VAR_4,
      bool VAR_5)
{
 struct rt2800_drv_data *VAR_6 = VAR_4->drv_data;
 u8 VAR_7 = 0, VAR_8 = 0, VAR_9;
 u8 VAR_10;
 u8 VAR_11 = 0x09, VAR_12 = 0x02;
 u8 VAR_13 = 0x27, VAR_14 = 0x31;
 int VAR_15 = 0, VAR_16, VAR_17;
 u8 VAR_18, VAR_19;
 char VAR_20, VAR_21, VAR_22;
 u8 VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 u8 VAR_28, VAR_29;
 u8 VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;
 u8 VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
 u8 VAR_40, VAR_41, VAR_42, VAR_43, VAR_44;
 u8 VAR_45, VAR_46;
 u8 VAR_47, VAR_48, VAR_49;
 u32 VAR_50, VAR_51;


 VAR_50 = FUNC_6(VAR_4, VAR_3);
 VAR_51 = FUNC_6(VAR_4, VAR_2);


 VAR_49 = FUNC_3(VAR_4, 23);

 VAR_47 = FUNC_1(VAR_4, 0);
 VAR_48 = FUNC_1(VAR_4, 2);


 VAR_23 = FUNC_9(VAR_4, 5, 0);
 VAR_24 = FUNC_9(VAR_4, 5, 1);
 VAR_25 = FUNC_9(VAR_4, 5, 3);
 VAR_26 = FUNC_9(VAR_4, 5, 4);
 VAR_27 = FUNC_9(VAR_4, 5, 5);
 VAR_28 = FUNC_9(VAR_4, 5, 6);
 VAR_29 = FUNC_9(VAR_4, 5, 7);
 VAR_30 = FUNC_9(VAR_4, 5, 8);
 VAR_31 = FUNC_9(VAR_4, 5, 17);
 VAR_32 = FUNC_9(VAR_4, 5, 18);
 VAR_33 = FUNC_9(VAR_4, 5, 19);
 VAR_34 = FUNC_9(VAR_4, 5, 20);

 VAR_35 = FUNC_9(VAR_4, 5, 37);
 VAR_36 = FUNC_9(VAR_4, 5, 38);
 VAR_37 = FUNC_9(VAR_4, 5, 39);
 VAR_38 = FUNC_9(VAR_4, 5, 40);
 VAR_39 = FUNC_9(VAR_4, 5, 41);
 VAR_40 = FUNC_9(VAR_4, 5, 42);
 VAR_41 = FUNC_9(VAR_4, 5, 43);
 VAR_42 = FUNC_9(VAR_4, 5, 44);
 VAR_43 = FUNC_9(VAR_4, 5, 45);
 VAR_44 = FUNC_9(VAR_4, 5, 46);

 VAR_45 = FUNC_9(VAR_4, 5, 58);
 VAR_46 = FUNC_9(VAR_4, 5, 59);

 VAR_19 = FUNC_9(VAR_4, 5, 0);
 VAR_19 |= 0x3;
 FUNC_10(VAR_4, 5, 0, VAR_19);

 VAR_19 = FUNC_9(VAR_4, 5, 1);
 VAR_19 |= 0x1;
 FUNC_10(VAR_4, 5, 1, VAR_19);

 VAR_17 = 0;
 do {
  FUNC_13(500, 2000);
  VAR_19 = FUNC_9(VAR_4, 5, 1);
  if (((VAR_19 & 0x1) == 0x00) || (VAR_17 == 40))
   break;
  VAR_17++;
 } while (VAR_17 < 40);

 VAR_19 = FUNC_9(VAR_4, 5, 0);
 VAR_19 &= (~0x3);
 VAR_19 |= 0x1;
 FUNC_10(VAR_4, 5, 0, VAR_19);


 VAR_18 = FUNC_3(VAR_4, 23);
 VAR_18 &= (~0x1F);
 VAR_18 |= 0x10;
 FUNC_4(VAR_4, 23, VAR_18);

 do {

  if (VAR_15 == 0) {
   VAR_16 = 0;

   if (VAR_5)
    VAR_10 = VAR_11;
   else
    VAR_10 = VAR_13;
  } else {
   VAR_16 = 1;

   if (VAR_5)
    VAR_10 = VAR_12;
   else
    VAR_10 = VAR_14;
  }

  VAR_19 = FUNC_9(VAR_4, 5, 8);
  VAR_19 &= (~0x04);
  if (VAR_15 == 1)
   VAR_19 |= 0x4;

  FUNC_10(VAR_4, 5, 8, VAR_19);

  FUNC_0(VAR_4, 1, VAR_16);

  FUNC_8(VAR_4, VAR_5);
  if (VAR_5) {
   VAR_7 = 0;
   VAR_19 = FUNC_9(VAR_4, 5, 58);
   VAR_19 &= (~0x7F);
   FUNC_10(VAR_4, 5, 58, VAR_19);
   VAR_19 = FUNC_9(VAR_4, 5, 59);
   VAR_19 &= (~0x7F);
   FUNC_10(VAR_4, 5, 59, VAR_19);
  } else {
   VAR_8 = 0;
   VAR_19 = FUNC_9(VAR_4, 5, 6);
   VAR_19 &= (~0x7F);
   FUNC_10(VAR_4, 5, 6, VAR_19);
   VAR_19 = FUNC_9(VAR_4, 5, 7);
   VAR_19 &= (~0x7F);
   FUNC_10(VAR_4, 5, 7, VAR_19);
  }

  FUNC_13(1000, 2000);

  VAR_18 = FUNC_1(VAR_4, 2);
  VAR_18 &= (~0x6);
  FUNC_2(VAR_4, 2, VAR_18);

  FUNC_0(VAR_4, 0, VAR_16);

  VAR_20 = FUNC_5(VAR_4);

  VAR_18 = FUNC_1(VAR_4, 2);
  VAR_18 |= 0x6;
  FUNC_2(VAR_4, 2, VAR_18);
do_cal:
  if (VAR_5) {
   VAR_19 = FUNC_9(VAR_4, 5, 58);
   VAR_19 &= (~0x7F);
   VAR_19 |= VAR_7;
   FUNC_10(VAR_4, 5, 58, VAR_19);
   VAR_19 = FUNC_9(VAR_4, 5, 59);
   VAR_19 &= (~0x7F);
   VAR_19 |= VAR_7;
   FUNC_10(VAR_4, 5, 59, VAR_19);
  } else {
   VAR_19 = FUNC_9(VAR_4, 5, 6);
   VAR_19 &= (~0x7F);
   VAR_19 |= VAR_8;
   FUNC_10(VAR_4, 5, 6, VAR_19);
   VAR_19 = FUNC_9(VAR_4, 5, 7);
   VAR_19 &= (~0x7F);
   VAR_19 |= VAR_8;
   FUNC_10(VAR_4, 5, 7, VAR_19);
  }

  FUNC_13(500, 1000);

  FUNC_0(VAR_4, 0, VAR_16);

  VAR_21 = FUNC_5(VAR_4);

  VAR_22 = VAR_20 - VAR_21;

  if (VAR_5)
   VAR_9 = VAR_7;
  else
   VAR_9 = VAR_8;

  if (((VAR_22 > VAR_10) && (VAR_9 == 0)) ||
      ((VAR_22 < VAR_10) && (VAR_9 == 0x3f))) {
   if (VAR_5)
    VAR_7 = 0;
   else
    VAR_8 = 0;
  } else if ((VAR_22 <= VAR_10) && (VAR_9 < 0x3f)) {
   if (VAR_5)
    VAR_7++;
   else
    VAR_8++;
   goto do_cal;
  }

  if (VAR_5) {
   if (VAR_15 == 0)
    VAR_6->tx_calibration_bw20 = VAR_7;
   else
    VAR_6->tx_calibration_bw40 = VAR_7;
  } else {
   if (VAR_15 == 0)
    VAR_6->rx_calibration_bw20 = VAR_8;
   else
    VAR_6->rx_calibration_bw40 = VAR_8;
  }

  VAR_15++;
 } while (VAR_15 <= 1);

 FUNC_10(VAR_4, 5, 0, VAR_23);
 FUNC_10(VAR_4, 5, 1, VAR_24);
 FUNC_10(VAR_4, 5, 3, VAR_25);
 FUNC_10(VAR_4, 5, 4, VAR_26);
 FUNC_10(VAR_4, 5, 5, VAR_27);
 FUNC_10(VAR_4, 5, 6, VAR_28);
 FUNC_10(VAR_4, 5, 7, VAR_29);
 FUNC_10(VAR_4, 5, 8, VAR_30);
 FUNC_10(VAR_4, 5, 17, VAR_31);
 FUNC_10(VAR_4, 5, 18, VAR_32);
 FUNC_10(VAR_4, 5, 19, VAR_33);
 FUNC_10(VAR_4, 5, 20, VAR_34);

 FUNC_10(VAR_4, 5, 37, VAR_35);
 FUNC_10(VAR_4, 5, 38, VAR_36);
 FUNC_10(VAR_4, 5, 39, VAR_37);
 FUNC_10(VAR_4, 5, 40, VAR_38);
 FUNC_10(VAR_4, 5, 41, VAR_39);
 FUNC_10(VAR_4, 5, 42, VAR_40);
 FUNC_10(VAR_4, 5, 43, VAR_41);
 FUNC_10(VAR_4, 5, 44, VAR_42);
 FUNC_10(VAR_4, 5, 45, VAR_43);
 FUNC_10(VAR_4, 5, 46, VAR_44);

 FUNC_10(VAR_4, 5, 58, VAR_45);
 FUNC_10(VAR_4, 5, 59, VAR_46);

 FUNC_4(VAR_4, 23, VAR_49);

 FUNC_2(VAR_4, 0, VAR_47);
 FUNC_2(VAR_4, 2, VAR_48);

 VAR_18 = FUNC_3(VAR_4, 4);
 FUNC_11(&VAR_18, VAR_0,
     2 * FUNC_12(VAR_1, &VAR_4->flags));
 FUNC_4(VAR_4, 4, VAR_18);

 FUNC_7(VAR_4, VAR_3, VAR_50);
 FUNC_7(VAR_4, VAR_2, VAR_51);
}
