
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hal_com_data {int SdioTxOQTFreeSpace; } ;
struct adapter {int dummy; } ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_0 ;
 int FUNC_1 (struct adapter*,int ) ;

void FUNC_2(struct adapter *VAR_1)
{
 struct hal_com_data *VAR_2 = FUNC_0(VAR_1);

 VAR_2->SdioTxOQTFreeSpace = FUNC_1(VAR_1, VAR_0);
}
