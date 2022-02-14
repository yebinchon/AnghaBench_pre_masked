
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hal_data_8188e {int UsbTxAggMode; int UsbTxAggDescNum; int UsbRxAggBlockCount; int UsbRxAggBlockTimeout; int UsbRxAggPageCount; int UsbRxAggPageTimeout; int UsbRxAggMode; int interfaceIndex; int UsbBulkOutSize; } ;
struct dvobj_priv {int RtNumOutPipes; int RtNumInPipes; int InterfaceNumber; scalar_t__ ishighspeed; } ;
struct adapter {struct hal_data_8188e* HalData; } ;


 int FUNC_0 (struct adapter*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dvobj_priv* FUNC_1 (struct adapter*) ;

void FUNC_2(struct adapter *VAR_3)
{
 struct hal_data_8188e *VAR_4 = VAR_3->HalData;
 struct dvobj_priv *VAR_5 = FUNC_1(VAR_3);

 if (VAR_5->ishighspeed)
  VAR_4->UsbBulkOutSize = VAR_1;
 else
  VAR_4->UsbBulkOutSize = VAR_0;

 VAR_4->interfaceIndex = VAR_5->InterfaceNumber;

 VAR_4->UsbTxAggMode = 1;
 VAR_4->UsbTxAggDescNum = 0x6;

 VAR_4->UsbRxAggMode = VAR_2;
 VAR_4->UsbRxAggBlockCount = 8;
 VAR_4->UsbRxAggBlockTimeout = 0x6;
 VAR_4->UsbRxAggPageCount = 48;
 VAR_4->UsbRxAggPageTimeout = 0x4;

 FUNC_0(VAR_3,
    VAR_5->RtNumInPipes, VAR_5->RtNumOutPipes);
}
