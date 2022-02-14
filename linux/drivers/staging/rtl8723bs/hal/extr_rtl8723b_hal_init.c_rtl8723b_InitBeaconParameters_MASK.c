
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hal_com_data {void* RegCR_1; void* RegReg542; void* RegFwHwTxQCtrl; void* RegTxPause; void* RegBcnCtrlVal; } ;
struct adapter {int mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (struct adapter*,scalar_t__) ;
 int FUNC_3 (struct adapter*,scalar_t__,int) ;
 int FUNC_4 (struct adapter*,int ,int ) ;

void FUNC_5(struct adapter *VAR_13)
{
 struct hal_com_data *VAR_14 = FUNC_0(VAR_13);
 u16 VAR_15;
 u8 VAR_16;


 VAR_16 = VAR_1;
 VAR_15 = VAR_16 | (VAR_16 << 8);


 VAR_15 |= VAR_3;

 FUNC_3(VAR_13, VAR_6, VAR_15);


 FUNC_3(VAR_13, VAR_10, 0x6404);


 if (FUNC_1(&VAR_13->mlmepriv, VAR_12) == 0)
  FUNC_4(VAR_13, VAR_8, VAR_2);
 FUNC_4(VAR_13, VAR_4, VAR_0);



 FUNC_3(VAR_13, VAR_5, 0x660F);

 VAR_14->RegBcnCtrlVal = FUNC_2(VAR_13, VAR_6);
 VAR_14->RegTxPause = FUNC_2(VAR_13, VAR_11);
 VAR_14->RegFwHwTxQCtrl = FUNC_2(VAR_13, VAR_9+2);
 VAR_14->RegReg542 = FUNC_2(VAR_13, VAR_10+2);
 VAR_14->RegCR_1 = FUNC_2(VAR_13, VAR_7+1);
}
