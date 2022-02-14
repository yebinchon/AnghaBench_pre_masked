
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_3__ {scalar_t__* pBandWidth; int* pSecChOffset; int bOneEntryOnly; int * pODM_StaInfo; scalar_t__* pChannel; scalar_t__ ControlChannel; } ;
typedef int PSTA_INFO_T ;
typedef TYPE_1__* PDM_ODM_T ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_1(PDM_ODM_T VAR_2)
{
 u8 VAR_3 = 0;
 u8 VAR_4;
 PSTA_INFO_T VAR_5;

 if (*(VAR_2->pBandWidth) == VAR_1) {
  if (*(VAR_2->pSecChOffset) == 1)
   VAR_2->ControlChannel = *(VAR_2->pChannel)-2;
  else if (*(VAR_2->pSecChOffset) == 2)
   VAR_2->ControlChannel = *(VAR_2->pChannel)+2;
 } else
  VAR_2->ControlChannel = *(VAR_2->pChannel);

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
