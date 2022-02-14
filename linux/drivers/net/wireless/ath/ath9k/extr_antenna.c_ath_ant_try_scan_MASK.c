
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw_antcomb_conf {int main_lna_conf; int alt_lna_conf; int lna1_lna2_switch_delta; } ;
struct ath_ant_comb {int rssi_lna2; int rssi_lna1; int scan; int rssi_add; int rssi_sub; } ;







__attribute__((used)) static void FUNC_0(struct ath_ant_comb *VAR_0,
        struct ath_hw_antcomb_conf *VAR_1,
        int VAR_2, int VAR_3,
        int VAR_4)
{
 switch (VAR_2) {
 case 128:
  VAR_0->rssi_lna2 = VAR_3;
  VAR_0->rssi_lna1 = VAR_4;
  VAR_0->scan = 1;

  VAR_1->main_lna_conf = 131;
  VAR_1->alt_lna_conf = 129;
  break;
 case 131:
  VAR_0->rssi_lna1 = VAR_3;
  VAR_0->rssi_lna2 = VAR_4;
  VAR_0->scan = 1;

  VAR_1->main_lna_conf = 128;
  VAR_1->alt_lna_conf = 129;
  break;
 case 129:
  VAR_0->rssi_add = VAR_3;
  VAR_0->scan = 1;

  VAR_1->alt_lna_conf = 130;
  break;
 case 130:
  VAR_0->rssi_sub = VAR_3;
  VAR_0->scan = 0;
  if (VAR_0->rssi_lna2 >
      (VAR_0->rssi_lna1 + VAR_1->lna1_lna2_switch_delta)) {

   if ((VAR_0->rssi_add > VAR_0->rssi_lna1) &&
       (VAR_0->rssi_add > VAR_0->rssi_sub)) {

    VAR_1->main_lna_conf = 128;
    VAR_1->alt_lna_conf = 129;
   } else if (VAR_0->rssi_sub >
       VAR_0->rssi_lna1) {

    VAR_1->main_lna_conf = 128;
    VAR_1->alt_lna_conf = 130;
   } else {

    VAR_1->main_lna_conf = 128;
    VAR_1->alt_lna_conf = 131;
   }
  } else {

   if ((VAR_0->rssi_add > VAR_0->rssi_lna2) &&
       (VAR_0->rssi_add > VAR_0->rssi_sub)) {

    VAR_1->main_lna_conf = 131;
    VAR_1->alt_lna_conf = 129;
   } else if (VAR_0->rssi_sub >
       VAR_0->rssi_lna1) {

    VAR_1->main_lna_conf = 131;
    VAR_1->alt_lna_conf = 130;
   } else {

    VAR_1->main_lna_conf = 131;
    VAR_1->alt_lna_conf = 128;
   }
  }
  break;
 default:
  break;
 }
}
