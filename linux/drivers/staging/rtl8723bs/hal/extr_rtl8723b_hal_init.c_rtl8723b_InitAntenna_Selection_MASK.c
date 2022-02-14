
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hal_com_data {int dummy; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (int) ;
 struct hal_com_data* FUNC_1 (struct adapter*) ;
 int VAR_0 ;
 int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (struct adapter*,int ,int ) ;

void FUNC_4(struct adapter *VAR_1)
{
 struct hal_com_data *VAR_2;
 u8 VAR_3;


 VAR_2 = FUNC_1(VAR_1);

 VAR_3 = FUNC_2(VAR_1, VAR_0);

 VAR_3 |= FUNC_0(7);
 FUNC_3(VAR_1, VAR_0, VAR_3);
}
