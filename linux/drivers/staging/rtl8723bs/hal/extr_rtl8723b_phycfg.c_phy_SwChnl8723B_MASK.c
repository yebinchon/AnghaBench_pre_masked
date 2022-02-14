
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hal_com_data {int CurrentChannel; scalar_t__ rf_chip; int* RfRegChnlVal; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (char*,int) ;
 struct hal_com_data* FUNC_1 (struct adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct adapter*,int ,int ,int,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_4)
{
 struct hal_com_data *VAR_5 = FUNC_1(VAR_4);
 u8 VAR_6 = VAR_5->CurrentChannel;

 if (VAR_5->rf_chip == VAR_3) {

  return;
 }
 VAR_5->RfRegChnlVal[0] = ((VAR_5->RfRegChnlVal[0] & 0xfffff00) | VAR_6);
 FUNC_2(VAR_4, VAR_0, VAR_2, 0x3FF, VAR_5->RfRegChnlVal[0]);
 FUNC_2(VAR_4, VAR_1, VAR_2, 0x3FF, VAR_5->RfRegChnlVal[0]);

 FUNC_0("===>phy_SwChnl8723B: Channel = %d\n", VAR_6);
}
