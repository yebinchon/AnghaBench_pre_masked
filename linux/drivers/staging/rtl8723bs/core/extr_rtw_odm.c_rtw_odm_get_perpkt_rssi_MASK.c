
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int RSSI_B; int RSSI_A; int RxRate; } ;
struct hal_com_data {TYPE_1__ odmpriv; } ;
struct adapter {int dummy; } ;
typedef TYPE_1__ DM_ODM_T ;


 int FUNC_0 (void*,char*,int ,int ,int ) ;
 struct hal_com_data* FUNC_1 (struct adapter*) ;
 int FUNC_2 (int ) ;

void FUNC_3(void *VAR_0, struct adapter *VAR_1)
{
 struct hal_com_data *VAR_2 = FUNC_1(VAR_1);
 DM_ODM_T *VAR_3 = &VAR_2->odmpriv;

 FUNC_0(VAR_0, "RxRate = %s, RSSI_A = %d(%%), RSSI_B = %d(%%)\n",
   FUNC_2(VAR_3->RxRate), VAR_3->RSSI_A, VAR_3->RSSI_B);
}
