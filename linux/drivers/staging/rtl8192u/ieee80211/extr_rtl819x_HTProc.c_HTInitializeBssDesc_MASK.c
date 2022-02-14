
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bdSupportHT; int bdRT2RTAggregation; int bdRT2RTLongSlotTime; int bdHTSpecVer; scalar_t__ bdHTInfoLen; int bdHTInfoBuf; scalar_t__ bdHTCapLen; int bdHTCapBuf; } ;
typedef TYPE_1__* PBSS_HT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

void FUNC_1(PBSS_HT VAR_1)
{
 VAR_1->bdSupportHT = 0;
 FUNC_0(VAR_1->bdHTCapBuf, 0, sizeof(VAR_1->bdHTCapBuf));
 VAR_1->bdHTCapLen = 0;
 FUNC_0(VAR_1->bdHTInfoBuf, 0, sizeof(VAR_1->bdHTInfoBuf));
 VAR_1->bdHTInfoLen = 0;

 VAR_1->bdHTSpecVer = VAR_0;

 VAR_1->bdRT2RTAggregation = 0;
 VAR_1->bdRT2RTLongSlotTime = 0;
}
