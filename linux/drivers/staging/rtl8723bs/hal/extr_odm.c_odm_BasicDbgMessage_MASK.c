
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int RSSI_B; int RSSI_A; int RxRate; int RSSI_Min; int bLinked; } ;
typedef TYPE_1__* PDM_ODM_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,char*) ;

void FUNC_1(PDM_ODM_T VAR_2)
{
 FUNC_0(VAR_2, VAR_0, VAR_1, ("odm_BasicDbgMsg ==>\n"));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("bLinked = %d, RSSI_Min = %d,\n",
  VAR_2->bLinked, VAR_2->RSSI_Min));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("RxRate = 0x%x, RSSI_A = %d, RSSI_B = %d\n",
  VAR_2->RxRate, VAR_2->RSSI_A, VAR_2->RSSI_B));
}
