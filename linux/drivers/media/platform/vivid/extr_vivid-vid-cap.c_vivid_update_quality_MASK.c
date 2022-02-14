
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {size_t input; int tv_freq; int tpg; int * std_signal_mode; int * dv_timings_signal_mode; scalar_t__ loop_video; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (struct vivid_dev*) ;
 scalar_t__ FUNC_4 (struct vivid_dev*) ;
 scalar_t__ FUNC_5 (struct vivid_dev*) ;
 int FUNC_6 (struct vivid_dev*) ;

void FUNC_7(struct vivid_dev *VAR_3)
{
 unsigned VAR_4;

 if (VAR_3->loop_video && (FUNC_5(VAR_3) || FUNC_3(VAR_3))) {




  FUNC_2(&VAR_3->tpg, VAR_2, 0);
  return;
 }
 if (FUNC_3(VAR_3) &&
     FUNC_0(VAR_3->dv_timings_signal_mode[VAR_3->input])) {
  FUNC_2(&VAR_3->tpg, VAR_2, 0);
  return;
 }
 if (FUNC_4(VAR_3) &&
     FUNC_0(VAR_3->std_signal_mode[VAR_3->input])) {
  FUNC_2(&VAR_3->tpg, VAR_2, 0);
  return;
 }
 if (!FUNC_6(VAR_3)) {
  FUNC_2(&VAR_3->tpg, VAR_0, 0);
  return;
 }







 VAR_4 = (VAR_3->tv_freq - 676 ) % (6 * 16);
 if (VAR_4 > 2 * 16) {
  FUNC_2(&VAR_3->tpg, VAR_2,
   FUNC_1(VAR_3->tv_freq ^ 0x55) & 0x3f);
  return;
 }
 if (VAR_4 < 12 || VAR_4 > 20 )
  FUNC_2(&VAR_3->tpg, VAR_1, 0);
 else
  FUNC_2(&VAR_3->tpg, VAR_0, 0);
}
