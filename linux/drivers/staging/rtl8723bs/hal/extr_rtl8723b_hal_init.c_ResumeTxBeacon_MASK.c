
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hal_com_data {int RegFwHwTxQCtrl; int RegReg542; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (int) ;
 struct hal_com_data* FUNC_1 (struct adapter*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct adapter*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct adapter *VAR_4)
{
 struct hal_com_data *VAR_5 = FUNC_1(VAR_4);





 FUNC_2(VAR_3, VAR_2, ("+ResumeTxBeacon\n"));

 VAR_5->RegFwHwTxQCtrl |= FUNC_0(6);
 FUNC_3(VAR_4, VAR_0+2, VAR_5->RegFwHwTxQCtrl);
 FUNC_3(VAR_4, VAR_1+1, 0xff);
 VAR_5->RegReg542 |= FUNC_0(0);
 FUNC_3(VAR_4, VAR_1+2, VAR_5->RegReg542);
}
