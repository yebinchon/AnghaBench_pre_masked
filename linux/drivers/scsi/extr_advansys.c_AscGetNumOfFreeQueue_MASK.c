
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
typedef int uchar ;
struct TYPE_3__ {int unit_not_ready; int queue_full_or_busy; int last_q_shortage; int max_total_qng; scalar_t__* cur_dvc_qng; scalar_t__* max_dvc_qng; scalar_t__ cur_total_qng; } ;
typedef int ASC_SCSI_BIT_ID_TYPE ;
typedef TYPE_1__ ASC_DVC_VAR ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static uint
FUNC_2(ASC_DVC_VAR *VAR_1, uchar VAR_2, uchar VAR_3)
{
 uint VAR_4;
 uint VAR_5;
 ASC_SCSI_BIT_ID_TYPE VAR_6;
 uchar VAR_7;

 VAR_6 = FUNC_0(VAR_2);
 VAR_7 = FUNC_1(VAR_2);
 if ((VAR_1->unit_not_ready & VAR_6) ||
     (VAR_1->queue_full_or_busy & VAR_6)) {
  return 0;
 }
 if (VAR_3 == 1) {
  VAR_4 = (uint) VAR_1->cur_total_qng +
      (uint) VAR_1->last_q_shortage + (uint) VAR_0;
 } else {
  VAR_4 = (uint) VAR_1->cur_total_qng +
      (uint) VAR_0;
 }
 if ((uint) (VAR_4 + VAR_3) <= (uint) VAR_1->max_total_qng) {
  VAR_5 = (uint) VAR_1->max_total_qng - VAR_4;
  if (VAR_1->cur_dvc_qng[VAR_7] >=
      VAR_1->max_dvc_qng[VAR_7]) {
   return 0;
  }
  return VAR_5;
 }
 if (VAR_3 > 1) {
  if ((VAR_3 > VAR_1->last_q_shortage)
      && (VAR_3 <= (VAR_1->max_total_qng - VAR_0))) {
   VAR_1->last_q_shortage = VAR_3;
  }
 }
 return 0;
}
