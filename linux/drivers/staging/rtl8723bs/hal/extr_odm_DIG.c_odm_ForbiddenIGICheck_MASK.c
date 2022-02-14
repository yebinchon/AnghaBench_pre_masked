
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef TYPE_1__* pDIG_T ;
struct TYPE_6__ {int Cnt_all; } ;
struct TYPE_5__ {int rx_gain_range_min; int LargeFAHit; int ForbiddenIGI; int rx_gain_range_max; int Recover_cnt; } ;
struct TYPE_7__ {TYPE_2__ FalseAlmCnt; TYPE_1__ DM_DigTable; } ;
typedef TYPE_2__* Pfalse_ALARM_STATISTICS ;
typedef TYPE_3__* PDM_ODM_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int ,char*) ;

u8 FUNC_1(void *VAR_2, u8 VAR_3, u8 VAR_4)
{
 PDM_ODM_T VAR_5 = (PDM_ODM_T)VAR_2;
 pDIG_T VAR_6 = &VAR_5->DM_DigTable;
 Pfalse_ALARM_STATISTICS VAR_7 = &(VAR_5->FalseAlmCnt);
 u8 VAR_8 = VAR_6->rx_gain_range_min;

 if (VAR_7->Cnt_all > 10000) {
  FUNC_0(VAR_5, VAR_0, VAR_1, ("odm_DIG(): Abnormally false alarm case.\n"));

  if (VAR_6->LargeFAHit != 3)
   VAR_6->LargeFAHit++;


  if (VAR_6->ForbiddenIGI < VAR_4) {
   VAR_6->ForbiddenIGI = VAR_4;

   VAR_6->LargeFAHit = 1;
  }

  if (VAR_6->LargeFAHit >= 3) {
   if ((VAR_6->ForbiddenIGI + 2) > VAR_6->rx_gain_range_max)
    VAR_8 = VAR_6->rx_gain_range_max;
   else
    VAR_8 = (VAR_6->ForbiddenIGI + 2);
   VAR_6->Recover_cnt = 1800;
   FUNC_0(VAR_5, VAR_0, VAR_1, ("odm_DIG(): Abnormally false alarm case: Recover_cnt = %d\n", VAR_6->Recover_cnt));
  }
 } else {
  if (VAR_6->Recover_cnt != 0) {
   VAR_6->Recover_cnt--;
   FUNC_0(VAR_5, VAR_0, VAR_1, ("odm_DIG(): Normal Case: Recover_cnt = %d\n", VAR_6->Recover_cnt));
  } else {
   if (VAR_6->LargeFAHit < 3) {
    if ((VAR_6->ForbiddenIGI - 2) < VAR_3) {
     VAR_6->ForbiddenIGI = VAR_3;
     VAR_8 = VAR_3;
     FUNC_0(VAR_5, VAR_0, VAR_1, ("odm_DIG(): Normal Case: At Lower Bound\n"));
    } else {
     VAR_6->ForbiddenIGI -= 2;
     VAR_8 = (VAR_6->ForbiddenIGI + 2);
     FUNC_0(VAR_5, VAR_0, VAR_1, ("odm_DIG(): Normal Case: Approach Lower Bound\n"));
    }
   } else
    VAR_6->LargeFAHit = 0;
  }
 }

 return VAR_8;

}
