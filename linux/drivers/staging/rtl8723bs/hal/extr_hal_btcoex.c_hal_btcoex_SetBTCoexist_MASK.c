
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int bBtExist; } ;
struct hal_com_data {TYPE_1__ bt_coexist; } ;
struct adapter {int dummy; } ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;

void FUNC_1(struct adapter *VAR_0, u8 VAR_1)
{
 struct hal_com_data *VAR_2;


 VAR_2 = FUNC_0(VAR_0);
 VAR_2->bt_coexist.bBtExist = VAR_1;
}
