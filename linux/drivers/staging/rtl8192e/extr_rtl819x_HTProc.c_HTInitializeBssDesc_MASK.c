
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bss_ht {int bdSupportHT; int bdRT2RTAggregation; int bdRT2RTLongSlotTime; int RT2RT_HT_Mode; int bdHTSpecVer; scalar_t__ bdHTInfoLen; int bdHTInfoBuf; scalar_t__ bdHTCapLen; int bdHTCapBuf; } ;
typedef enum rt_ht_capability { ____Placeholder_rt_ht_capability } rt_ht_capability ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

void FUNC_1(struct bss_ht *VAR_1)
{

 VAR_1->bdSupportHT = 0;
 FUNC_0(VAR_1->bdHTCapBuf, 0, sizeof(VAR_1->bdHTCapBuf));
 VAR_1->bdHTCapLen = 0;
 FUNC_0(VAR_1->bdHTInfoBuf, 0, sizeof(VAR_1->bdHTInfoBuf));
 VAR_1->bdHTInfoLen = 0;

 VAR_1->bdHTSpecVer = VAR_0;

 VAR_1->bdRT2RTAggregation = 0;
 VAR_1->bdRT2RTLongSlotTime = 0;
 VAR_1->RT2RT_HT_Mode = (enum rt_ht_capability)0;
}
