
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {scalar_t__ Cnt_all; } ;
struct TYPE_6__ {int RSSI_Min; TYPE_1__ FalseAlmCnt; } ;
typedef TYPE_1__* Pfalse_ALARM_STATISTICS ;
typedef TYPE_2__* PDM_ODM_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int ,int ,char*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int VAR_7 ;

void FUNC_2(void *VAR_8)
{
 PDM_ODM_T VAR_9 = (PDM_ODM_T)VAR_8;
 Pfalse_ALARM_STATISTICS VAR_10 = &VAR_9->FalseAlmCnt;

 u8 VAR_11 = VAR_4;
 u8 VAR_12 = VAR_9->RSSI_Min;

 VAR_12 = VAR_12+VAR_7;

 FUNC_0(
  VAR_9,
  VAR_5,
  VAR_6,
  ("odm_DIGbyRSSI_LPS() ==>\n")
 );



 if (VAR_10->Cnt_all > VAR_2)
  VAR_12 = VAR_12+4;
 else if (VAR_10->Cnt_all > VAR_1)
  VAR_12 = VAR_12+2;
 else if (VAR_10->Cnt_all < VAR_0)
  VAR_12 = VAR_12-2;





 if ((VAR_9->RSSI_Min-10) > VAR_4)
  VAR_11 = VAR_9->RSSI_Min-10;
 else
  VAR_11 = VAR_4;


 if (VAR_12 > VAR_3)
  VAR_12 = VAR_3;
 else if (VAR_12 < VAR_11)
  VAR_12 = VAR_11;


 FUNC_0(
  VAR_9,
  VAR_5,
  VAR_6,
  ("odm_DIGbyRSSI_LPS(): pFalseAlmCnt->Cnt_all = %d\n", VAR_10->Cnt_all)
 );
 FUNC_0(
  VAR_9,
  VAR_5,
  VAR_6,
  ("odm_DIGbyRSSI_LPS(): pDM_Odm->RSSI_Min = %d\n", VAR_9->RSSI_Min)
 );
 FUNC_0(
  VAR_9,
  VAR_5,
  VAR_6,
  ("odm_DIGbyRSSI_LPS(): CurrentIGI = 0x%x\n", VAR_12)
 );

 FUNC_1(VAR_9, VAR_12);

}
