
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bBtExist; } ;
struct hal_com_data {TYPE_1__ bt_coexist; } ;
struct adapter {int dummy; } ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;

bool FUNC_1(struct adapter *VAR_0)
{
 struct hal_com_data *VAR_1;


 VAR_1 = FUNC_0(VAR_0);
 return VAR_1->bt_coexist.bBtExist;
}
