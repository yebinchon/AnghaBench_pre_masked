
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef TYPE_1__* pDIG_T ;
struct TYPE_6__ {int IGIBackup; int CurIGValue; } ;
struct TYPE_7__ {int SupportAbility; int TxHangFlg; TYPE_1__ DM_DigTable; } ;
typedef TYPE_2__* PDM_ODM_T ;
typedef int ODM_Pause_DIG_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_5 ;


 int FUNC_1 (TYPE_2__*,int ,int ,char*) ;
 int FUNC_2 (TYPE_2__*,int ) ;

void FUNC_3(
 void *VAR_6,
 ODM_Pause_DIG_TYPE VAR_7,
 u8 VAR_8
)
{
 PDM_ODM_T VAR_9 = (PDM_ODM_T)VAR_6;
 pDIG_T VAR_10 = &VAR_9->DM_DigTable;
 static bool VAR_11;

 FUNC_1(VAR_9, VAR_4, VAR_5, ("odm_PauseDIG() =========>\n"));

 if (
  (VAR_9->SupportAbility & VAR_0) &&
  VAR_9->TxHangFlg == 1
 ) {
  FUNC_1(
   VAR_9,
   VAR_4,
   VAR_5,
   ("odm_PauseDIG(): Dynamic adjust threshold in progress !!\n")
  );
  return;
 }

 if (
  !VAR_11 && (!(VAR_9->SupportAbility & VAR_1) ||
  !(VAR_9->SupportAbility & VAR_2))
 ){
  FUNC_1(
   VAR_9,
   VAR_4,
   VAR_5,
   ("odm_PauseDIG(): Return: SupportAbility ODM_BB_DIG or ODM_BB_FA_CNT is disabled\n")
  );
  return;
 }

 switch (VAR_7) {

 case 129:

  FUNC_0(VAR_9, VAR_3, VAR_9->SupportAbility & (~VAR_1));
  FUNC_1(VAR_9, VAR_4, VAR_5, ("odm_PauseDIG(): Pause DIG !!\n"));


  if (!VAR_11) {
   VAR_10->IGIBackup = VAR_10->CurIGValue;
   VAR_11 = 1;
  }
  FUNC_1(VAR_9, VAR_4, VAR_5, ("odm_PauseDIG(): Backup IGI  = 0x%x\n", VAR_10->IGIBackup));


  FUNC_2(VAR_9, VAR_8);
  FUNC_1(VAR_9, VAR_4, VAR_5, ("odm_PauseDIG(): Write new IGI = 0x%x\n", VAR_8));
  break;


 case 128:
  if (VAR_11) {

   FUNC_2(VAR_9, VAR_10->IGIBackup);
   VAR_11 = 0;
   FUNC_1(VAR_9, VAR_4, VAR_5, ("odm_PauseDIG(): Write original IGI = 0x%x\n", VAR_10->IGIBackup));


   FUNC_0(VAR_9, VAR_3, VAR_9->SupportAbility | VAR_1);
   FUNC_1(VAR_9, VAR_4, VAR_5, ("odm_PauseDIG(): Resume DIG !!\n"));
  }
  break;

 default:
  FUNC_1(VAR_9, VAR_4, VAR_5, ("odm_PauseDIG(): Wrong  type !!\n"));
  break;
 }
}
