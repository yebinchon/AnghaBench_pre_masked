
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hal_data_8188e {int ReceiveConfig; } ;
struct adapter {struct hal_data_8188e* HalData; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct adapter*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_13)
{
 struct hal_data_8188e *VAR_14 = VAR_13->HalData;

 VAR_14->ReceiveConfig = VAR_0 | VAR_4 | VAR_2 | VAR_1 |
      VAR_9 | VAR_8 |
      VAR_5 | VAR_3 | VAR_10 |
      VAR_6 | VAR_7;


 FUNC_0(VAR_13, VAR_12, VAR_14->ReceiveConfig);


 FUNC_0(VAR_13, VAR_11, 0xFFFFFFFF);
 FUNC_0(VAR_13, VAR_11 + 4, 0xFFFFFFFF);
}
