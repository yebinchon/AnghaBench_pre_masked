
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct survey_info {int time; int time_busy; int filled; int noise; } ;
struct chan_info_params {int cmd_flags; int mac_clk_mhz; int cycle_count; int rx_clear_count; int noise_floor; int freq; } ;
struct ath10k {struct survey_info* survey; } ;


 int FUNC_0 (struct survey_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ath10k*,int ,char*) ;
 int FUNC_2 (struct ath10k*,char*,int ,int) ;
 int FUNC_3 (struct ath10k*,int ) ;
 int FUNC_4 (struct survey_info*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ath10k *VAR_5,
      struct chan_info_params *VAR_6)
{
 struct survey_info *VAR_7;
 int VAR_8;

 if (VAR_6->cmd_flags & VAR_4) {
  FUNC_1(VAR_5, VAR_0, "chan info report completed\n");
  return;
 }

 VAR_8 = FUNC_3(VAR_5, VAR_6->freq);
 if (VAR_8 >= FUNC_0(VAR_5->survey)) {
  FUNC_2(VAR_5, "chan info: invalid frequency %d (idx %d out of bounds)\n",
       VAR_6->freq, VAR_8);
  return;
 }

 VAR_7 = &VAR_5->survey[VAR_8];

 if (!VAR_6->mac_clk_mhz)
  return;

 FUNC_4(VAR_7, 0, sizeof(*VAR_7));

 VAR_7->noise = VAR_6->noise_floor;
 VAR_7->time = (VAR_6->cycle_count / VAR_6->mac_clk_mhz) / 1000;
 VAR_7->time_busy = (VAR_6->rx_clear_count / VAR_6->mac_clk_mhz) / 1000;
 VAR_7->filled |= VAR_1 | VAR_2 |
     VAR_3;
}
