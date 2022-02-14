
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hal_data_8188e {int UsbTxAggMode; int UsbTxAggDescNum; } ;
struct TYPE_2__ {scalar_t__ wifi_spec; } ;
struct adapter {TYPE_1__ registrypriv; struct hal_data_8188e* HalData; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct adapter*,int ) ;
 int FUNC_1 (struct adapter*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_3)
{
 struct hal_data_8188e *VAR_4 = VAR_3->HalData;
 u32 VAR_5;

 if (VAR_3->registrypriv.wifi_spec)
  VAR_4->UsbTxAggMode = 0;

 if (VAR_4->UsbTxAggMode) {
  VAR_5 = FUNC_0(VAR_3, VAR_2);
  VAR_5 = VAR_5 & ~(VAR_0 << VAR_1);
  VAR_5 |= ((VAR_4->UsbTxAggDescNum & VAR_0) << VAR_1);

  FUNC_1(VAR_3, VAR_2, VAR_5);
 }
}
