
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hal_com_data {int ReceiveConfig; } ;
struct adapter {int dummy; } ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct adapter*,int ,int) ;
 int FUNC_2 (struct adapter*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_15)
{
 struct hal_com_data *VAR_16;
 u16 VAR_17;


 VAR_16 = FUNC_0(VAR_15);

 VAR_16->ReceiveConfig = 0;
 VAR_16->ReceiveConfig |= VAR_3 | VAR_1 | VAR_0;
 VAR_16->ReceiveConfig |= VAR_8 | VAR_7 | VAR_2;
 VAR_16->ReceiveConfig |= VAR_9;
 VAR_16->ReceiveConfig |= VAR_6 | VAR_4 | VAR_5;
 FUNC_2(VAR_15, VAR_11, VAR_16->ReceiveConfig);


 FUNC_2(VAR_15, VAR_10, 0xFFFFFFFF);
 FUNC_2(VAR_15, VAR_10 + 4, 0xFFFFFFFF);


 VAR_17 = 0xFFFF;
 FUNC_1(VAR_15, VAR_14, VAR_17);




 VAR_17 = 0x400;
 FUNC_1(VAR_15, VAR_13, VAR_17);


 VAR_17 = 0xFFFF;
 FUNC_1(VAR_15, VAR_12, VAR_17);
}
