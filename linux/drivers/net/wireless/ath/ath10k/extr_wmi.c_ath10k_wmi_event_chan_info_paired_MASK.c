
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct survey_info {int filled; int noise; } ;
struct chan_info_params {int cmd_flags; int cycle_count; int rx_clear_count; int noise_floor; int freq; } ;
struct ath10k {int ch_info_can_report_survey; int survey_last_cycle_count; int survey_last_rx_clear_count; struct survey_info* survey; } ;


 int FUNC_0 (struct survey_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ath10k*,struct survey_info*,int ,int ,int ,int ) ;
 int FUNC_2 (struct ath10k*,char*,int ,int) ;
 int FUNC_3 (struct ath10k*,int ) ;

__attribute__((used)) static void FUNC_4(struct ath10k *VAR_3,
           struct chan_info_params *VAR_4)
{
 struct survey_info *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_3, VAR_4->freq);
 if (VAR_6 >= FUNC_0(VAR_3->survey)) {
  FUNC_2(VAR_3, "chan info: invalid frequency %d (idx %d out of bounds)\n",
       VAR_4->freq, VAR_6);
  return;
 }

 if (VAR_4->cmd_flags & VAR_1) {
  if (VAR_3->ch_info_can_report_survey) {
   VAR_5 = &VAR_3->survey[VAR_6];
   VAR_5->noise = VAR_4->noise_floor;
   VAR_5->filled = VAR_0;

   FUNC_1(VAR_3,
         VAR_5,
         VAR_4->cycle_count,
         VAR_4->rx_clear_count,
         VAR_3->survey_last_cycle_count,
         VAR_3->survey_last_rx_clear_count);
  }

  VAR_3->ch_info_can_report_survey = 0;
 } else {
  VAR_3->ch_info_can_report_survey = 1;
 }

 if (!(VAR_4->cmd_flags & VAR_2)) {
  VAR_3->survey_last_rx_clear_count = VAR_4->rx_clear_count;
  VAR_3->survey_last_cycle_count = VAR_4->cycle_count;
 }
}
