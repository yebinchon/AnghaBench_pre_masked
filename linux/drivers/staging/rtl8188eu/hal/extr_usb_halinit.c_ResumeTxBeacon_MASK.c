
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hal_data_8188e {int RegFwHwTxQCtrl; int RegReg542; } ;
struct adapter {struct hal_data_8188e* HalData; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct adapter*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_2)
{
 struct hal_data_8188e *VAR_3 = VAR_2->HalData;




 FUNC_1(VAR_2, VAR_0 + 2, (VAR_3->RegFwHwTxQCtrl) | FUNC_0(6));
 VAR_3->RegFwHwTxQCtrl |= FUNC_0(6);
 FUNC_1(VAR_2, VAR_1 + 1, 0xff);
 VAR_3->RegReg542 |= FUNC_0(0);
 FUNC_1(VAR_2, VAR_1 + 2, VAR_3->RegReg542);
}
