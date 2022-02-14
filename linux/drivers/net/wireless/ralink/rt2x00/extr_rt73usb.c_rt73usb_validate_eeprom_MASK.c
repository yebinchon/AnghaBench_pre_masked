
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rt2x00_dev {int eeprom; } ;
typedef int s8 ;


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
 int * FUNC_0 (struct rt2x00_dev*,int ) ;
 int FUNC_1 (struct rt2x00_dev*,char*,int) ;
 int FUNC_2 (struct rt2x00_dev*,int ) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (struct rt2x00_dev*,int *) ;
 int FUNC_7 (struct rt2x00_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct rt2x00_dev *VAR_34)
{
 u16 VAR_35;
 u8 *VAR_36;
 s8 VAR_37;

 FUNC_7(VAR_34, VAR_34->eeprom, VAR_31);




 VAR_36 = FUNC_0(VAR_34, VAR_22);
 FUNC_6(VAR_34, VAR_36);

 VAR_35 = FUNC_2(VAR_34, VAR_1);
 if (VAR_35 == 0xffff) {
  FUNC_5(&VAR_35, VAR_5, 2);
  FUNC_5(&VAR_35, VAR_8,
       VAR_0);
  FUNC_5(&VAR_35, VAR_7,
       VAR_0);
  FUNC_5(&VAR_35, VAR_3, 0);
  FUNC_5(&VAR_35, VAR_2, 0);
  FUNC_5(&VAR_35, VAR_4, 0);
  FUNC_5(&VAR_35, VAR_6, VAR_33);
  FUNC_3(VAR_34, VAR_1, VAR_35);
  FUNC_1(VAR_34, "Antenna: 0x%04x\n", VAR_35);
 }

 VAR_35 = FUNC_2(VAR_34, VAR_23);
 if (VAR_35 == 0xffff) {
  FUNC_5(&VAR_35, VAR_24, 0);
  FUNC_3(VAR_34, VAR_23, VAR_35);
  FUNC_1(VAR_34, "NIC: 0x%04x\n", VAR_35);
 }

 VAR_35 = FUNC_2(VAR_34, VAR_12);
 if (VAR_35 == 0xffff) {
  FUNC_5(&VAR_35, VAR_21, 0);
  FUNC_5(&VAR_35, VAR_20, 0);
  FUNC_5(&VAR_35, VAR_14, 0);
  FUNC_5(&VAR_35, VAR_15, 0);
  FUNC_5(&VAR_35, VAR_16, 0);
  FUNC_5(&VAR_35, VAR_17, 0);
  FUNC_5(&VAR_35, VAR_18, 0);
  FUNC_5(&VAR_35, VAR_19, 0);
  FUNC_5(&VAR_35, VAR_13,
       VAR_32);
  FUNC_3(VAR_34, VAR_12, VAR_35);
  FUNC_1(VAR_34, "Led: 0x%04x\n", VAR_35);
 }

 VAR_35 = FUNC_2(VAR_34, VAR_9);
 if (VAR_35 == 0xffff) {
  FUNC_5(&VAR_35, VAR_10, 0);
  FUNC_5(&VAR_35, VAR_11, 0);
  FUNC_3(VAR_34, VAR_9, VAR_35);
  FUNC_1(VAR_34, "Freq: 0x%04x\n", VAR_35);
 }

 VAR_35 = FUNC_2(VAR_34, VAR_28);
 if (VAR_35 == 0xffff) {
  FUNC_5(&VAR_35, VAR_29, 0);
  FUNC_5(&VAR_35, VAR_30, 0);
  FUNC_3(VAR_34, VAR_28, VAR_35);
  FUNC_1(VAR_34, "RSSI OFFSET BG: 0x%04x\n", VAR_35);
 } else {
  VAR_37 = FUNC_4(VAR_35, VAR_29);
  if (VAR_37 < -10 || VAR_37 > 10)
   FUNC_5(&VAR_35, VAR_29, 0);
  VAR_37 = FUNC_4(VAR_35, VAR_30);
  if (VAR_37 < -10 || VAR_37 > 10)
   FUNC_5(&VAR_35, VAR_30, 0);
  FUNC_3(VAR_34, VAR_28, VAR_35);
 }

 VAR_35 = FUNC_2(VAR_34, VAR_25);
 if (VAR_35 == 0xffff) {
  FUNC_5(&VAR_35, VAR_26, 0);
  FUNC_5(&VAR_35, VAR_27, 0);
  FUNC_3(VAR_34, VAR_25, VAR_35);
  FUNC_1(VAR_34, "RSSI OFFSET A: 0x%04x\n", VAR_35);
 } else {
  VAR_37 = FUNC_4(VAR_35, VAR_26);
  if (VAR_37 < -10 || VAR_37 > 10)
   FUNC_5(&VAR_35, VAR_26, 0);
  VAR_37 = FUNC_4(VAR_35, VAR_27);
  if (VAR_37 < -10 || VAR_37 > 10)
   FUNC_5(&VAR_35, VAR_27, 0);
  FUNC_3(VAR_34, VAR_25, VAR_35);
 }

 return 0;
}
