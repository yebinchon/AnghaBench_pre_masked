
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hal_data_8188e {int* RfRegChnlVal; } ;
struct adapter {struct hal_data_8188e* HalData; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,int ,int,int ,int) ;
 int FUNC_1 (struct adapter*,int) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_2, u8 VAR_3)
{
 u32 VAR_4, VAR_5;
 struct hal_data_8188e *VAR_6 = VAR_2->HalData;

 FUNC_1(VAR_2, VAR_3);

 VAR_4 = VAR_0;
 VAR_5 = VAR_3;
 VAR_6->RfRegChnlVal[0] = (VAR_6->RfRegChnlVal[0] &
       0xfffffc00) | VAR_5;
 FUNC_0(VAR_2, 0, VAR_4,
         VAR_1, VAR_6->RfRegChnlVal[0]);
}
