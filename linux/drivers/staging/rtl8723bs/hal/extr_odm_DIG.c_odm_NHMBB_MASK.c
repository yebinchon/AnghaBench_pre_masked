
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {scalar_t__ NHMCurTxOkcnt; scalar_t__* pNumTxBytesUnicast; scalar_t__ NHMLastTxOkcnt; int NHMCurRxOkcnt; int* pNumRxBytesUnicast; int NHMLastRxOkcnt; int NHM_cnt_0; int adaptivity_flag; int tolerance_cnt; } ;
typedef TYPE_1__* PDM_ODM_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,char*) ;

void FUNC_1(void *VAR_2)
{
 PDM_ODM_T VAR_3 = (PDM_ODM_T)VAR_2;



 VAR_3->NHMCurTxOkcnt =
  *(VAR_3->pNumTxBytesUnicast)-VAR_3->NHMLastTxOkcnt;
 VAR_3->NHMCurRxOkcnt =
  *(VAR_3->pNumRxBytesUnicast)-VAR_3->NHMLastRxOkcnt;
 VAR_3->NHMLastTxOkcnt =
  *(VAR_3->pNumTxBytesUnicast);
 VAR_3->NHMLastRxOkcnt =
  *(VAR_3->pNumRxBytesUnicast);
 FUNC_0(
  VAR_3,
  VAR_0,
  VAR_1,
  (
   "NHM_cnt_0 =%d, NHMCurTxOkcnt = %llu, NHMCurRxOkcnt = %llu\n",
   VAR_3->NHM_cnt_0,
   VAR_3->NHMCurTxOkcnt,
   VAR_3->NHMCurRxOkcnt
  )
 );


 if ((VAR_3->NHMCurTxOkcnt) + 1 > (u64)(VAR_3->NHMCurRxOkcnt<<2) + 1) {
  if (VAR_3->NHM_cnt_0 >= 190 || VAR_3->adaptivity_flag == 1) {


   VAR_3->adaptivity_flag = 1;
   VAR_3->tolerance_cnt = 0;
  } else {
   if (VAR_3->tolerance_cnt < 3)
    VAR_3->tolerance_cnt = VAR_3->tolerance_cnt + 1;
   else
    VAR_3->tolerance_cnt = 4;

   if (VAR_3->tolerance_cnt > 3) {

    VAR_3->adaptivity_flag = 0;
   }
  }
 } else {
  if (VAR_3->adaptivity_flag == 1 && VAR_3->NHM_cnt_0 <= 200) {

   VAR_3->tolerance_cnt = 0;
  } else {
   if (VAR_3->tolerance_cnt < 3)
    VAR_3->tolerance_cnt = VAR_3->tolerance_cnt + 1;
   else
    VAR_3->tolerance_cnt = 4;

   if (VAR_3->tolerance_cnt > 3) {

    VAR_3->adaptivity_flag = 0;
   }
  }
 }

 FUNC_0(VAR_3, VAR_0, VAR_1, ("adaptivity_flag = %d\n ", VAR_3->adaptivity_flag));
}
