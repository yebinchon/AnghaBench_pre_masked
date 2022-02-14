
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hal_com_data {int dummy; } ;
struct adapter {int dummy; } ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct adapter*,int ) ;
 int FUNC_2 (struct adapter*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_4)
{
 struct hal_com_data *VAR_5;
 u8 VAR_6;
 u8 VAR_7 = 0;
 u8 VAR_8 = 3;
 u8 VAR_9 = 0;

 VAR_5 = FUNC_0(VAR_4);

 VAR_6 = FUNC_1(VAR_4, VAR_1);
 VAR_6 |= VAR_2;
 FUNC_2(VAR_4, VAR_1, VAR_6);

 VAR_7 |= VAR_3;
 VAR_7 |= ((VAR_8 << 2) & 0x0C);
 VAR_7 |= ((VAR_9 << 4) & 0x30);
 FUNC_2(VAR_4, VAR_0, VAR_7);
}
