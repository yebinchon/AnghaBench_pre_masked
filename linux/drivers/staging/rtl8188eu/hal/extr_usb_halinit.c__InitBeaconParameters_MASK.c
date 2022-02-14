
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hal_data_8188e {void* RegCR_1; void* RegReg542; void* RegFwHwTxQCtrl; void* RegTxPause; void* RegBcnCtrlVal; } ;
struct adapter {struct hal_data_8188e* HalData; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* FUNC_0 (struct adapter*,scalar_t__) ;
 int FUNC_1 (struct adapter*,scalar_t__,int) ;
 int FUNC_2 (struct adapter*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_10)
{
 struct hal_data_8188e *VAR_11 = VAR_10->HalData;

 FUNC_1(VAR_10, VAR_4, 0x1010);


 FUNC_1(VAR_10, VAR_8, 0x6404);
 FUNC_2(VAR_10, VAR_6, VAR_1);
 FUNC_2(VAR_10, VAR_2, VAR_0);



 FUNC_1(VAR_10, VAR_3, 0x660F);

 VAR_11->RegBcnCtrlVal = FUNC_0(VAR_10, VAR_4);
 VAR_11->RegTxPause = FUNC_0(VAR_10, VAR_9);
 VAR_11->RegFwHwTxQCtrl = FUNC_0(VAR_10, VAR_7 + 2);
 VAR_11->RegReg542 = FUNC_0(VAR_10, VAR_8 + 2);
 VAR_11->RegCR_1 = FUNC_0(VAR_10, VAR_5 + 1);
}
