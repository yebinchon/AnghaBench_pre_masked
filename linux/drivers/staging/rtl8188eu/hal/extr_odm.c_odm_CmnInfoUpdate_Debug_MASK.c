
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct odm_dm_struct {int RSSI_Min; int bLinked; int bWIFI_Display; int bWIFI_Direct; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct odm_dm_struct*,int ,int ,char*) ;

void FUNC_1(struct odm_dm_struct *VAR_2)
{
 FUNC_0(VAR_2, VAR_0, VAR_1, ("odm_CmnInfoUpdate_Debug==>\n"));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("bWIFI_Direct=%d\n", VAR_2->bWIFI_Direct));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("bWIFI_Display=%d\n", VAR_2->bWIFI_Display));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("bLinked=%d\n", VAR_2->bLinked));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("RSSI_Min=%d\n", VAR_2->RSSI_Min));
}
