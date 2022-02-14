
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct odm_dm_struct {int * pbPowerSaving; int * pbScanInProcess; int * pChannel; int * pBandWidth; int * pSecurity; int * pSecChOffset; int * pWirelessMode; int * pNumRxBytesUnicast; int * pNumTxBytesUnicast; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct odm_dm_struct*,int ,int ,char*) ;

void FUNC_1(struct odm_dm_struct *VAR_2)
{
 FUNC_0(VAR_2, VAR_0, VAR_1, ("odm_CmnInfoHook_Debug==>\n"));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("pNumTxBytesUnicast=%llu\n", *(VAR_2->pNumTxBytesUnicast)));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("pNumRxBytesUnicast=%llu\n", *(VAR_2->pNumRxBytesUnicast)));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("pWirelessMode=0x%x\n", *(VAR_2->pWirelessMode)));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("pSecChOffset=%d\n", *(VAR_2->pSecChOffset)));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("pSecurity=%d\n", *(VAR_2->pSecurity)));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("pBandWidth=%d\n", *(VAR_2->pBandWidth)));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("pChannel=%d\n", *(VAR_2->pChannel)));

 FUNC_0(VAR_2, VAR_0, VAR_1, ("pbScanInProcess=%d\n", *(VAR_2->pbScanInProcess)));
 FUNC_0(VAR_2, VAR_0, VAR_1, ("pbPowerSaving=%d\n", *(VAR_2->pbPowerSaving)));
}
