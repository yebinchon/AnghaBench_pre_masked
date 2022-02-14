
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw_antcomb_conf {int main_lna_conf; int lna1_lna2_switch_delta; int alt_lna_conf; } ;
struct ath_ant_comb {int quick_scan_cnt; int main_conf; int rssi_first; int rssi_second; int first_ratio; int alt_good; int scan_not_start; int scan; int rssi_third; int rssi_lna1; int rssi_lna2; int second_ratio; int total_pkt_count; int second_quick_scan_conf; int first_quick_scan_conf; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct ath_ant_comb*,struct ath_hw_antcomb_conf*) ;
 int FUNC_1 (struct ath_ant_comb*,int,int ,int ,int,int,int ) ;

__attribute__((used)) static void FUNC_2(struct ath_ant_comb *VAR_3,
           struct ath_hw_antcomb_conf *VAR_4,
           int VAR_5, int VAR_6,
           int VAR_7)
{

 switch (VAR_3->quick_scan_cnt) {
 case 0:

  VAR_4->main_lna_conf = VAR_3->main_conf;
  VAR_4->alt_lna_conf = VAR_3->first_quick_scan_conf;
  break;
 case 1:

  VAR_4->main_lna_conf = VAR_3->main_conf;
  VAR_4->alt_lna_conf = VAR_3->second_quick_scan_conf;
  VAR_3->rssi_first = VAR_5;
  VAR_3->rssi_second = VAR_6;

  if (VAR_3->main_conf == 130) {

   if (FUNC_1(VAR_3, VAR_7,
      VAR_0,
      VAR_1,
      VAR_5, VAR_6,
      VAR_3->total_pkt_count))
    VAR_3->first_ratio = 1;
   else
    VAR_3->first_ratio = 0;
  } else if (VAR_3->main_conf == 128) {
   if (FUNC_1(VAR_3, VAR_7,
      VAR_2,
      VAR_1,
      VAR_5, VAR_6,
      VAR_3->total_pkt_count))
    VAR_3->first_ratio = 1;
   else
    VAR_3->first_ratio = 0;
  } else {
   if (FUNC_1(VAR_3, VAR_7,
      VAR_0,
      0,
      VAR_5, VAR_6,
      VAR_3->total_pkt_count))
    VAR_3->first_ratio = 1;
   else
    VAR_3->first_ratio = 0;
  }
  break;
 case 2:
  VAR_3->alt_good = 0;
  VAR_3->scan_not_start = 0;
  VAR_3->scan = 0;
  VAR_3->rssi_first = VAR_5;
  VAR_3->rssi_third = VAR_6;

  switch(VAR_3->second_quick_scan_conf) {
  case 130:
   VAR_3->rssi_lna1 = VAR_6;
   break;
  case 128:
   VAR_3->rssi_lna2 = VAR_6;
   break;
  case 129:
   if (VAR_3->main_conf == 128)
    VAR_3->rssi_lna2 = VAR_5;
   else if (VAR_3->main_conf == 130)
    VAR_3->rssi_lna1 = VAR_5;
   break;
  default:
   break;
  }

  if (VAR_3->rssi_lna2 > VAR_3->rssi_lna1 +
      VAR_4->lna1_lna2_switch_delta)
   VAR_4->main_lna_conf = 128;
  else
   VAR_4->main_lna_conf = 130;

  if (VAR_3->main_conf == 130) {
   if (FUNC_1(VAR_3, VAR_7,
      VAR_0,
      VAR_1,
      VAR_5, VAR_6,
      VAR_3->total_pkt_count))
    VAR_3->second_ratio = 1;
   else
    VAR_3->second_ratio = 0;
  } else if (VAR_3->main_conf == 128) {
   if (FUNC_1(VAR_3, VAR_7,
      VAR_2,
      VAR_1,
      VAR_5, VAR_6,
      VAR_3->total_pkt_count))
    VAR_3->second_ratio = 1;
   else
    VAR_3->second_ratio = 0;
  } else {
   if (FUNC_1(VAR_3, VAR_7,
      VAR_0,
      0,
      VAR_5, VAR_6,
      VAR_3->total_pkt_count))
    VAR_3->second_ratio = 1;
   else
    VAR_3->second_ratio = 0;
  }

  FUNC_0(VAR_3, VAR_4);

  break;
 default:
  break;
 }
}
