
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int btTotalAntNum; } ;
struct hal_com_data {TYPE_1__ bt_coexist; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct hal_com_data* FUNC_1 (struct adapter*) ;

void FUNC_2(struct adapter *VAR_1, u8 VAR_2)
{
 struct hal_com_data *VAR_3;


 VAR_3 = FUNC_1(VAR_1);

 VAR_3->bt_coexist.btTotalAntNum = VAR_2;
 FUNC_0(VAR_0, VAR_2);
}
