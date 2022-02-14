
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rt2x00_dev {int eeprom; } ;


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
 int FUNC_0 (struct rt2x00_dev*,int) ;
 int* FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (struct rt2x00_dev*,char*,int) ;
 int FUNC_3 (struct rt2x00_dev*,int ) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (struct rt2x00_dev*,int*) ;
 int FUNC_7 (struct rt2x00_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct rt2x00_dev *VAR_37)
{
 u16 VAR_38;
 u8 *VAR_39;
 u8 VAR_40;

 FUNC_7(VAR_37, VAR_37->eeprom, VAR_34);




 VAR_39 = FUNC_1(VAR_37, VAR_29);
 FUNC_6(VAR_37, VAR_39);

 VAR_38 = FUNC_3(VAR_37, VAR_2);
 if (VAR_38 == 0xffff) {
  FUNC_5(&VAR_38, VAR_6, 2);
  FUNC_5(&VAR_38, VAR_9,
       VAR_0);
  FUNC_5(&VAR_38, VAR_8,
       VAR_0);
  FUNC_5(&VAR_38, VAR_5,
       VAR_35);
  FUNC_5(&VAR_38, VAR_3, 0);
  FUNC_5(&VAR_38, VAR_4, 0);
  FUNC_5(&VAR_38, VAR_7, VAR_36);
  FUNC_4(VAR_37, VAR_2, VAR_38);
  FUNC_2(VAR_37, "Antenna: 0x%04x\n", VAR_38);
 }

 VAR_38 = FUNC_3(VAR_37, VAR_30);
 if (VAR_38 == 0xffff) {
  FUNC_5(&VAR_38, VAR_31, 0);
  FUNC_5(&VAR_38, VAR_33, 0);
  FUNC_5(&VAR_38, VAR_32, 0);
  FUNC_4(VAR_37, VAR_30, VAR_38);
  FUNC_2(VAR_37, "NIC: 0x%04x\n", VAR_38);
 }

 VAR_38 = FUNC_3(VAR_37, VAR_27);
 if (VAR_38 == 0xffff) {
  FUNC_5(&VAR_38, VAR_28,
       VAR_1);
  FUNC_4(VAR_37, VAR_27, VAR_38);
  FUNC_2(VAR_37, "Calibrate offset: 0x%04x\n",
      VAR_38);
 }

 VAR_38 = FUNC_3(VAR_37, VAR_10);
 if (VAR_38 == 0xffff) {
  FUNC_5(&VAR_38, VAR_23, 45);
  FUNC_4(VAR_37, VAR_10, VAR_38);
  FUNC_2(VAR_37, "BBPtune: 0x%04x\n", VAR_38);
 }





 VAR_40 = FUNC_0(VAR_37, 17);
 VAR_40 -= 6;

 VAR_38 = FUNC_3(VAR_37, VAR_24);
 if (VAR_38 == 0xffff) {
  FUNC_5(&VAR_38, VAR_26, 0x40);
  FUNC_5(&VAR_38, VAR_25, VAR_40);
  FUNC_4(VAR_37, VAR_24, VAR_38);
  FUNC_2(VAR_37, "BBPtune vgc: 0x%04x\n", VAR_38);
 } else {
  FUNC_5(&VAR_38, VAR_25, VAR_40);
  FUNC_4(VAR_37, VAR_24, VAR_38);
 }

 VAR_38 = FUNC_3(VAR_37, VAR_11);
 if (VAR_38 == 0xffff) {
  FUNC_5(&VAR_38, VAR_13, 0x48);
  FUNC_5(&VAR_38, VAR_12, 0x41);
  FUNC_4(VAR_37, VAR_11, VAR_38);
  FUNC_2(VAR_37, "BBPtune r17: 0x%04x\n", VAR_38);
 }

 VAR_38 = FUNC_3(VAR_37, VAR_14);
 if (VAR_38 == 0xffff) {
  FUNC_5(&VAR_38, VAR_16, 0x40);
  FUNC_5(&VAR_38, VAR_15, 0x80);
  FUNC_4(VAR_37, VAR_14, VAR_38);
  FUNC_2(VAR_37, "BBPtune r24: 0x%04x\n", VAR_38);
 }

 VAR_38 = FUNC_3(VAR_37, VAR_17);
 if (VAR_38 == 0xffff) {
  FUNC_5(&VAR_38, VAR_19, 0x40);
  FUNC_5(&VAR_38, VAR_18, 0x50);
  FUNC_4(VAR_37, VAR_17, VAR_38);
  FUNC_2(VAR_37, "BBPtune r25: 0x%04x\n", VAR_38);
 }

 VAR_38 = FUNC_3(VAR_37, VAR_20);
 if (VAR_38 == 0xffff) {
  FUNC_5(&VAR_38, VAR_22, 0x60);
  FUNC_5(&VAR_38, VAR_21, 0x6d);
  FUNC_4(VAR_37, VAR_20, VAR_38);
  FUNC_2(VAR_37, "BBPtune r61: 0x%04x\n", VAR_38);
 }

 return 0;
}
