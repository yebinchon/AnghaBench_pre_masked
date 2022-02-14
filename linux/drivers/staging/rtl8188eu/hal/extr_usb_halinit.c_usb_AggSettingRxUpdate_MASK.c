
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hal_data_8188e {int UsbRxAggMode; int UsbRxAggPageCount; int UsbRxAggPageTimeout; int UsbRxAggBlockCount; int UsbRxAggBlockTimeout; int HwRxPageSize; } ;
struct adapter {struct hal_data_8188e* HalData; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (struct adapter*,int ) ;
 int FUNC_1 (struct adapter*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_7)
{
 struct hal_data_8188e *VAR_8 = VAR_7->HalData;
 u8 VAR_9;
 u8 VAR_10;

 VAR_9 = FUNC_0(VAR_7, VAR_1);
 VAR_10 = FUNC_0(VAR_7, VAR_4);

 switch (VAR_8->UsbRxAggMode) {
 case 130:
  VAR_9 |= VAR_5;
  VAR_10 &= ~VAR_6;
  break;
 case 128:
  VAR_9 &= ~VAR_5;
  VAR_10 |= VAR_6;
  break;
 case 129:
  VAR_9 |= VAR_5;
  VAR_10 |= VAR_6;
  break;
 case 131:
 default:
  VAR_9 &= ~VAR_5;
  VAR_10 &= ~VAR_6;
  break;
 }

 FUNC_1(VAR_7, VAR_1, VAR_9);
 FUNC_1(VAR_7, VAR_4, VAR_10);

 switch (VAR_8->UsbRxAggMode) {
 case 130:
  FUNC_1(VAR_7, VAR_0, VAR_8->UsbRxAggPageCount);
  FUNC_1(VAR_7, VAR_0 + 1, VAR_8->UsbRxAggPageTimeout);
  break;
 case 128:
  FUNC_1(VAR_7, VAR_2, VAR_8->UsbRxAggBlockCount);
  FUNC_1(VAR_7, VAR_3, VAR_8->UsbRxAggBlockTimeout);
  break;
 case 129:
  FUNC_1(VAR_7, VAR_0, VAR_8->UsbRxAggPageCount);
  FUNC_1(VAR_7, VAR_0 + 1, (VAR_8->UsbRxAggPageTimeout & 0x1F));
  FUNC_1(VAR_7, VAR_2, VAR_8->UsbRxAggBlockCount);
  FUNC_1(VAR_7, VAR_3, VAR_8->UsbRxAggBlockTimeout);
  break;
 case 131:
 default:

  break;
 }

 switch (135) {
 case 135:
  VAR_8->HwRxPageSize = 128;
  break;
 case 132:
  VAR_8->HwRxPageSize = 64;
  break;
 case 134:
  VAR_8->HwRxPageSize = 256;
  break;
 case 133:
  VAR_8->HwRxPageSize = 512;
  break;
 case 136:
  VAR_8->HwRxPageSize = 1024;
  break;
 default:
  break;
 }
}
