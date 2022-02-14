
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int bAdjust; int DefXCap; int bATCStatus; int CrystalCap; } ;
struct TYPE_6__ {TYPE_2__ DM_CfoTrack; } ;
typedef TYPE_1__* PDM_ODM_T ;
typedef TYPE_2__* PCFO_TRACKING ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(void *VAR_2)
{
 PDM_ODM_T VAR_3 = (PDM_ODM_T)VAR_2;
 PCFO_TRACKING VAR_4 = &VAR_3->DM_CfoTrack;

 VAR_4->DefXCap =
  VAR_4->CrystalCap = FUNC_2(VAR_3);
 VAR_4->bATCStatus = FUNC_1(VAR_3);
 VAR_4->bAdjust = 1;
 FUNC_0(
  VAR_3,
  VAR_0,
  VAR_1,
  ("ODM_CfoTracking_init() =========>\n")
 );
 FUNC_0(
  VAR_3,
  VAR_0,
  VAR_1,
  (
   "ODM_CfoTracking_init(): bATCStatus = %d, CrystalCap = 0x%x\n",
   VAR_4->bATCStatus,
   VAR_4->DefXCap
  )
 );
}
