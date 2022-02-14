
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw_antcomb_conf {scalar_t__ main_lna_conf; scalar_t__ alt_lna_conf; } ;
struct ath_ant_comb {scalar_t__ rssi_second; scalar_t__ rssi_third; scalar_t__ first_quick_scan_conf; scalar_t__ second_quick_scan_conf; scalar_t__ main_conf; scalar_t__ second_ratio; scalar_t__ first_ratio; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ath_ant_comb *VAR_2,
      struct ath_hw_antcomb_conf *VAR_3)
{

 if (VAR_2->first_ratio && VAR_2->second_ratio) {
  if (VAR_2->rssi_second > VAR_2->rssi_third) {

   if ((VAR_2->first_quick_scan_conf == VAR_0) ||
       (VAR_2->first_quick_scan_conf == VAR_1))

    if (VAR_3->main_lna_conf == VAR_1)
     VAR_3->alt_lna_conf = VAR_0;
    else
     VAR_3->alt_lna_conf = VAR_1;
   else

    VAR_3->alt_lna_conf =
     VAR_2->first_quick_scan_conf;
  } else if ((VAR_2->second_quick_scan_conf == VAR_0) ||
      (VAR_2->second_quick_scan_conf == VAR_1)) {

   if (VAR_3->main_lna_conf == VAR_1)
    VAR_3->alt_lna_conf = VAR_0;
   else
    VAR_3->alt_lna_conf = VAR_1;
  } else {

   VAR_3->alt_lna_conf = VAR_2->second_quick_scan_conf;
  }
 } else if (VAR_2->first_ratio) {

  if ((VAR_2->first_quick_scan_conf == VAR_0) ||
      (VAR_2->first_quick_scan_conf == VAR_1))

   if (VAR_3->main_lna_conf == VAR_1)
    VAR_3->alt_lna_conf = VAR_0;
   else
    VAR_3->alt_lna_conf = VAR_1;
  else

   VAR_3->alt_lna_conf = VAR_2->first_quick_scan_conf;
 } else if (VAR_2->second_ratio) {

  if ((VAR_2->second_quick_scan_conf == VAR_0) ||
      (VAR_2->second_quick_scan_conf == VAR_1))

   if (VAR_3->main_lna_conf == VAR_1)
    VAR_3->alt_lna_conf = VAR_0;
   else
    VAR_3->alt_lna_conf = VAR_1;
  else

   VAR_3->alt_lna_conf = VAR_2->second_quick_scan_conf;
 } else {

  if ((VAR_2->main_conf == VAR_0) ||
      (VAR_2->main_conf == VAR_1))

   if (VAR_3->main_lna_conf == VAR_1)
    VAR_3->alt_lna_conf = VAR_0;
   else
    VAR_3->alt_lna_conf = VAR_1;
  else

   VAR_3->alt_lna_conf = VAR_2->main_conf;
 }
}
