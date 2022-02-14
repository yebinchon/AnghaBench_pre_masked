
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {int UndecoratedSmoothedPWDB; } ;
struct sta_info {int rssi_level; TYPE_1__ rssi_stat; } ;
struct odm_dm_struct {struct sta_info** pODM_StaInfo; int bUseRAMask; struct adapter* Adapter; } ;
struct adapter {scalar_t__ bDriverStopped; } ;


 scalar_t__ FUNC_0 (struct sta_info*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct odm_dm_struct*,int ,int,int *) ;
 int FUNC_2 (struct odm_dm_struct*,int ,int ,char*) ;
 int FUNC_3 (struct adapter*,size_t,int ) ;

void FUNC_4(struct odm_dm_struct *VAR_4)
{
 u8 VAR_5;
 struct adapter *VAR_6 = VAR_4->Adapter;

 if (VAR_6->bDriverStopped) {
  FUNC_2(VAR_4, VAR_1, VAR_3, ("<---- odm_RefreshRateAdaptiveMask(): driver is going to unload\n"));
  return;
 }

 if (!VAR_4->bUseRAMask) {
  FUNC_2(VAR_4, VAR_1, VAR_2, ("<---- odm_RefreshRateAdaptiveMask(): driver does not control rate adaptive mask\n"));
  return;
 }

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct sta_info *VAR_7 = VAR_4->pODM_StaInfo[VAR_5];

  if (FUNC_0(VAR_7)) {
   if (FUNC_1(VAR_4, VAR_7->rssi_stat.UndecoratedSmoothedPWDB, 0, &VAR_7->rssi_level)) {
    FUNC_2(VAR_4, VAR_1, VAR_2,
          ("RSSI:%d, RSSI_LEVEL:%d\n",
          VAR_7->rssi_stat.UndecoratedSmoothedPWDB, VAR_7->rssi_level));
    FUNC_3(VAR_6, VAR_5, VAR_7->rssi_level);
   }
  }
 }
}
