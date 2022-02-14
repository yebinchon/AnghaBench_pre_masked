
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int tx_chain_num; int rx_chain_num; } ;
struct TYPE_3__ {int rf; } ;
struct rt2x00_dev {int rf_channel; TYPE_2__ default_ant; TYPE_1__ chip; } ;
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
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct rt2x00_dev*,int,int) ;
 int FUNC_2 (struct rt2x00_dev*,int ) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_4 (struct rt2x00_dev*,int) ;
 int FUNC_5 (struct rt2x00_dev*,int,int) ;
 scalar_t__ FUNC_6 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_7 (struct rt2x00_dev*,int ) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int*,int ,int) ;
 int FUNC_10 (int,int) ;

void FUNC_11(struct rt2x00_dev *VAR_12)
{
 u32 VAR_13;
 u8 VAR_14;
 unsigned long VAR_15 = 0;
 VAR_13 = FUNC_2(VAR_12, VAR_4);
 VAR_13 &= VAR_8;
 FUNC_3(VAR_12, VAR_4, VAR_13);

 switch (VAR_12->chip.rf) {
 case 146:
 case 145:
 case 144:
 case 143:
 case 138:
 case 142:
  VAR_14 = FUNC_4(VAR_12, 7);
  FUNC_9(&VAR_14, VAR_2, 1);
  FUNC_5(VAR_12, 7, VAR_14);
  break;
 case 141:
 case 140:
 case 139:
 case 137:
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
  VAR_14 = FUNC_4(VAR_12, 3);
  FUNC_9(&VAR_14, VAR_0, 1);
  FUNC_5(VAR_12, 3, VAR_14);
  VAR_15 = 1000;
  break;
 case 128:
  FUNC_5(VAR_12, 5, 0x40);
  FUNC_5(VAR_12, 4, 0x0C);
  VAR_14 = FUNC_4(VAR_12, 4);
  FUNC_9(&VAR_14, VAR_1, 1);
  FUNC_5(VAR_12, 4, VAR_14);
  VAR_15 = 2000;
  break;
 default:
  FUNC_0(1, "Not supported RF chipset %x for VCO recalibration",
     VAR_12->chip.rf);
  return;
 }

 if (VAR_15 > 0)
  FUNC_10(VAR_15, VAR_15 * 2);

 VAR_13 = FUNC_2(VAR_12, VAR_4);
 if (VAR_12->rf_channel <= 14) {
  switch (VAR_12->default_ant.tx_chain_num) {
  case 3:
   FUNC_8(&VAR_13, VAR_11, 1);

  case 2:
   FUNC_8(&VAR_13, VAR_10, 1);

  case 1:
  default:
   FUNC_8(&VAR_13, VAR_9, 1);
   break;
  }
 } else {
  switch (VAR_12->default_ant.tx_chain_num) {
  case 3:
   FUNC_8(&VAR_13, VAR_7, 1);

  case 2:
   FUNC_8(&VAR_13, VAR_6, 1);

  case 1:
  default:
   FUNC_8(&VAR_13, VAR_5, 1);
   break;
  }
 }
 FUNC_3(VAR_12, VAR_4, VAR_13);

 if (FUNC_7(VAR_12, VAR_3)) {
  if (VAR_12->default_ant.rx_chain_num == 1) {
   FUNC_1(VAR_12, 91, 0x07);
   FUNC_1(VAR_12, 95, 0x1A);
   FUNC_1(VAR_12, 195, 128);
   FUNC_1(VAR_12, 196, 0xA0);
   FUNC_1(VAR_12, 195, 170);
   FUNC_1(VAR_12, 196, 0x12);
   FUNC_1(VAR_12, 195, 171);
   FUNC_1(VAR_12, 196, 0x10);
  } else {
   FUNC_1(VAR_12, 91, 0x06);
   FUNC_1(VAR_12, 95, 0x9A);
   FUNC_1(VAR_12, 195, 128);
   FUNC_1(VAR_12, 196, 0xE0);
   FUNC_1(VAR_12, 195, 170);
   FUNC_1(VAR_12, 196, 0x30);
   FUNC_1(VAR_12, 195, 171);
   FUNC_1(VAR_12, 196, 0x30);
  }

  if (FUNC_6(VAR_12)) {
   FUNC_1(VAR_12, 75, 0x68);
   FUNC_1(VAR_12, 76, 0x4C);
   FUNC_1(VAR_12, 79, 0x1C);
   FUNC_1(VAR_12, 80, 0x0C);
   FUNC_1(VAR_12, 82, 0xB6);
  }






  FUNC_10(1000, 1500);
 }
}
