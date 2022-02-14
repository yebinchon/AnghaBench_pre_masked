
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hal_com_data {scalar_t__ LastHMEBoxNum; } ;
struct adapter {int dummy; } ;
struct TYPE_2__ {int bFwCurrentInPSMode; } ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*,int ,int) ;

void FUNC_3(struct adapter *VAR_1)
{
 struct hal_com_data *VAR_2 = FUNC_0(VAR_1);


 FUNC_1(VAR_1)->bFwCurrentInPSMode = 0;


 FUNC_2(VAR_1, VAR_0, 0x0f);


 VAR_2->LastHMEBoxNum = 0;



}
