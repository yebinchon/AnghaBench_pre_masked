
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rt2x00_dev {struct rt2800_drv_data* drv_data; } ;
struct rt2800_drv_data {int txmixer_gain_5g; int txmixer_gain_24g; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int FUNC_0 (int) ;
 int* FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int) ;
 int FUNC_4 (struct rt2x00_dev*) ;
 int FUNC_5 (struct rt2x00_dev*) ;
 int FUNC_6 (struct rt2x00_dev*) ;
 int FUNC_7 (struct rt2x00_dev*,char*,int) ;
 int FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (struct rt2x00_dev*,int ) ;
 int FUNC_10 (int*,int ,int) ;
 int FUNC_11 (struct rt2x00_dev*,int*) ;

__attribute__((used)) static int FUNC_12(struct rt2x00_dev *VAR_51)
{
 struct rt2800_drv_data *VAR_52 = VAR_51->drv_data;
 u16 VAR_53;
 u8 *VAR_54;
 u8 VAR_55;
 int VAR_56;




 VAR_56 = FUNC_6(VAR_51);
 if (VAR_56)
  return VAR_56;




 VAR_54 = FUNC_1(VAR_51, VAR_12);
 FUNC_11(VAR_51, VAR_54);

 VAR_53 = FUNC_2(VAR_51, VAR_13);
 if (VAR_53 == 0xffff) {
  FUNC_10(&VAR_53, VAR_15, 2);
  FUNC_10(&VAR_53, VAR_16, 1);
  FUNC_10(&VAR_53, VAR_14, VAR_46);
  FUNC_3(VAR_51, VAR_13, VAR_53);
  FUNC_7(VAR_51, "Antenna: 0x%04x\n", VAR_53);
 } else if (FUNC_9(VAR_51, VAR_47) ||
     FUNC_9(VAR_51, VAR_48)) {



  if (FUNC_8(VAR_53, VAR_15) > 2)
   FUNC_10(&VAR_53, VAR_15, 2);
  FUNC_3(VAR_51, VAR_13, VAR_53);
 }

 VAR_53 = FUNC_2(VAR_51, VAR_17);
 if (VAR_53 == 0xffff) {
  FUNC_10(&VAR_53, VAR_30, 0);
  FUNC_10(&VAR_53, VAR_29, 0);
  FUNC_10(&VAR_53, VAR_27, 0);
  FUNC_10(&VAR_53, VAR_28, 0);
  FUNC_10(&VAR_53, VAR_25, 0);
  FUNC_10(&VAR_53, VAR_23, 0);
  FUNC_10(&VAR_53, VAR_24, 0);
  FUNC_10(&VAR_53, VAR_32, 0);
  FUNC_10(&VAR_53, VAR_21, 0);
  FUNC_10(&VAR_53, VAR_22, 0);
  FUNC_10(&VAR_53, VAR_19, 0);
  FUNC_10(&VAR_53, VAR_18, 0);
  FUNC_10(&VAR_53, VAR_31, 0);
  FUNC_10(&VAR_53, VAR_20, 0);
  FUNC_10(&VAR_53, VAR_26, 0);
  FUNC_3(VAR_51, VAR_17, VAR_53);
  FUNC_7(VAR_51, "NIC: 0x%04x\n", VAR_53);
 }

 VAR_53 = FUNC_2(VAR_51, VAR_3);
 if ((VAR_53 & 0x00ff) == 0x00ff) {
  FUNC_10(&VAR_53, VAR_6, 0);
  FUNC_3(VAR_51, VAR_3, VAR_53);
  FUNC_7(VAR_51, "Freq: 0x%04x\n", VAR_53);
 }
 if ((VAR_53 & 0xff00) == 0xff00) {
  FUNC_10(&VAR_53, VAR_4,
       VAR_45);
  FUNC_10(&VAR_53, VAR_5, 0);
  FUNC_3(VAR_51, VAR_3, VAR_53);
  FUNC_3(VAR_51, VAR_8, 0x5555);
  FUNC_3(VAR_51, VAR_7, 0x2221);
  FUNC_3(VAR_51, VAR_9, 0xa9f8);
  FUNC_7(VAR_51, "Led Mode: 0x%04x\n", VAR_53);
 }






 VAR_53 = FUNC_2(VAR_51, VAR_10);
 VAR_55 = FUNC_8(VAR_53, VAR_11);

 VAR_53 = FUNC_2(VAR_51, VAR_39);
 if (FUNC_0(FUNC_8(VAR_53, VAR_43)) > 10)
  FUNC_10(&VAR_53, VAR_43, 0);
 if (FUNC_0(FUNC_8(VAR_53, VAR_44)) > 10)
  FUNC_10(&VAR_53, VAR_44, 0);
 FUNC_3(VAR_51, VAR_39, VAR_53);

 VAR_52->txmixer_gain_24g = FUNC_4(VAR_51);

 VAR_53 = FUNC_2(VAR_51, VAR_40);
 if (FUNC_0(FUNC_8(VAR_53, VAR_42)) > 10)
  FUNC_10(&VAR_53, VAR_42, 0);
 if (!FUNC_9(VAR_51, VAR_49) &&
     !FUNC_9(VAR_51, VAR_50)) {
  if (FUNC_8(VAR_53, VAR_41) == 0x00 ||
      FUNC_8(VAR_53, VAR_41) == 0xff)
   FUNC_10(&VAR_53, VAR_41,
        VAR_55);
 }
 FUNC_3(VAR_51, VAR_40, VAR_53);

 VAR_52->txmixer_gain_5g = FUNC_5(VAR_51);

 VAR_53 = FUNC_2(VAR_51, VAR_33);
 if (FUNC_0(FUNC_8(VAR_53, VAR_37)) > 10)
  FUNC_10(&VAR_53, VAR_37, 0);
 if (FUNC_0(FUNC_8(VAR_53, VAR_38)) > 10)
  FUNC_10(&VAR_53, VAR_38, 0);
 FUNC_3(VAR_51, VAR_33, VAR_53);

 VAR_53 = FUNC_2(VAR_51, VAR_34);
 if (FUNC_0(FUNC_8(VAR_53, VAR_36)) > 10)
  FUNC_10(&VAR_53, VAR_36, 0);
 if (!FUNC_9(VAR_51, VAR_49) &&
     !FUNC_9(VAR_51, VAR_50)) {
  if (FUNC_8(VAR_53, VAR_35) == 0x00 ||
      FUNC_8(VAR_53, VAR_35) == 0xff)
   FUNC_10(&VAR_53, VAR_35,
        VAR_55);
 }
 FUNC_3(VAR_51, VAR_34, VAR_53);

 if (FUNC_9(VAR_51, VAR_49) ||
     FUNC_9(VAR_51, VAR_50)) {
  VAR_53 = FUNC_2(VAR_51, VAR_0);
  if (FUNC_8(VAR_53, VAR_1) == 0x00 ||
      FUNC_8(VAR_53, VAR_1) == 0xff)
   FUNC_10(&VAR_53, VAR_1,
        VAR_55);
  if (FUNC_8(VAR_53, VAR_2) == 0x00 ||
      FUNC_8(VAR_53, VAR_2) == 0xff)
   FUNC_10(&VAR_53, VAR_1,
        VAR_55);
  FUNC_3(VAR_51, VAR_0, VAR_53);
 }

 return 0;
}
