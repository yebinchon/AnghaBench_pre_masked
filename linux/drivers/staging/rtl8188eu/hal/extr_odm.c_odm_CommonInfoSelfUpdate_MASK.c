
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct sta_info {int dummy; } ;
struct odm_dm_struct {scalar_t__* pBandWidth; int* pSecChOffset; int bOneEntryOnly; struct sta_info** pODM_StaInfo; scalar_t__* pChannel; scalar_t__ ControlChannel; } ;


 scalar_t__ FUNC_0 (struct sta_info*) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_1(struct odm_dm_struct *VAR_2)
{
 u8 VAR_3 = 0;
 u8 VAR_4;
 struct sta_info *VAR_5;

 if (*(VAR_2->pBandWidth) == VAR_1) {
  if (*(VAR_2->pSecChOffset) == 1)
   VAR_2->ControlChannel = *(VAR_2->pChannel) - 2;
  else if (*(VAR_2->pSecChOffset) == 2)
   VAR_2->ControlChannel = *(VAR_2->pChannel) + 2;
 } else {
  VAR_2->ControlChannel = *(VAR_2->pChannel);
 }

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = VAR_2->pODM_StaInfo[VAR_4];
  if (FUNC_0(VAR_5))
   VAR_3++;
 }
 if (VAR_3 == 1)
  VAR_2->bOneEntryOnly = 1;
 else
  VAR_2->bOneEntryOnly = 0;
}
