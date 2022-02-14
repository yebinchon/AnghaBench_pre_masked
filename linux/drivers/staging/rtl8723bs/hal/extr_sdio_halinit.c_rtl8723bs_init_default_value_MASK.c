
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hal_com_data {scalar_t__ SdioRxFIFOCnt; } ;
struct adapter {int dummy; } ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_0)
{
 struct hal_com_data *VAR_1;


 VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0);


 VAR_1->SdioRxFIFOCnt = 0;
}
