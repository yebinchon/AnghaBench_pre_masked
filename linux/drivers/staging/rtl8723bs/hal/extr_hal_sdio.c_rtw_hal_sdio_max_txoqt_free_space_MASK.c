
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hal_com_data {int SdioTxOQTMaxFreeSpace; } ;
struct adapter {int dummy; } ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;

u8 FUNC_1(struct adapter *VAR_0)
{
 struct hal_com_data *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->SdioTxOQTMaxFreeSpace < 8)
  VAR_1->SdioTxOQTMaxFreeSpace = 8;

 return VAR_1->SdioTxOQTMaxFreeSpace;
}
