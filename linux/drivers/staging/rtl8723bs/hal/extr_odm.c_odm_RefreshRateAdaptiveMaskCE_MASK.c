
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t u8 ;
struct adapter {scalar_t__ bDriverStopped; } ;
struct TYPE_11__ {TYPE_2__** pODM_StaInfo; int bUseRAMask; struct adapter* Adapter; } ;
struct TYPE_9__ {int UndecoratedSmoothedPWDB; } ;
struct TYPE_10__ {int rssi_level; TYPE_1__ rssi_stat; int hwaddr; } ;
typedef TYPE_2__* PSTA_INFO_T ;
typedef TYPE_3__* PDM_ODM_T ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*,int ,int,int *) ;
 int FUNC_3 (TYPE_3__*,int ,int ,char*) ;
 int FUNC_4 (TYPE_2__*,int ) ;

void FUNC_5(PDM_ODM_T VAR_4)
{
 u8 VAR_5;
 struct adapter *VAR_6 = VAR_4->Adapter;

 if (VAR_6->bDriverStopped) {
  FUNC_3(VAR_4, VAR_1, VAR_3, ("<---- odm_RefreshRateAdaptiveMask(): driver is going to unload\n"));
  return;
 }

 if (!VAR_4->bUseRAMask) {
  FUNC_3(VAR_4, VAR_1, VAR_2, ("<---- odm_RefreshRateAdaptiveMask(): driver does not control rate adaptive mask\n"));
  return;
 }



 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  PSTA_INFO_T VAR_7 = VAR_4->pODM_StaInfo[VAR_5];

  if (FUNC_1(VAR_7)) {
   if (FUNC_0(VAR_7->hwaddr))
    continue;
   if (FUNC_0(VAR_7->hwaddr))
    continue;

   if (1 == FUNC_2(VAR_4, VAR_7->rssi_stat.UndecoratedSmoothedPWDB, 0, &VAR_7->rssi_level)) {
    FUNC_3(VAR_4, VAR_1, VAR_2, ("RSSI:%d, RSSI_LEVEL:%d\n", VAR_7->rssi_stat.UndecoratedSmoothedPWDB, VAR_7->rssi_level));

    FUNC_4(VAR_7, VAR_7->rssi_level);
   }

  }
 }
}
