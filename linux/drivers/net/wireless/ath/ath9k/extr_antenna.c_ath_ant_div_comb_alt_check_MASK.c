
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw_antcomb_conf {scalar_t__ main_lna_conf; scalar_t__ alt_lna_conf; int div_group; } ;
struct ath_ant_comb {int low_rssi_thresh; int ant_ratio; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(struct ath_hw_antcomb_conf *VAR_3,
           struct ath_ant_comb *VAR_4,
           int VAR_5, int VAR_6,
           int VAR_7)
{
 bool VAR_8, VAR_9, VAR_10;

 VAR_8 = VAR_9 = VAR_10 = 0;

 if (VAR_3->main_lna_conf == VAR_2 &&
     VAR_3->alt_lna_conf == VAR_1)
  VAR_9 = 1;

 if (VAR_3->main_lna_conf == VAR_1 &&
     VAR_3->alt_lna_conf == VAR_2)
  VAR_10 = 1;

 switch (VAR_3->div_group) {
 case 0:
  if (VAR_5 > VAR_0)
   VAR_8 = 1;
  break;
 case 1:
 case 2:
  if (VAR_6 < 4 || VAR_6 < VAR_4->low_rssi_thresh)
   break;

  if ((VAR_9 && (VAR_6 >= (VAR_7 - 5))) ||
      (VAR_10 && (VAR_6 >= (VAR_7 - 2))) ||
      (VAR_5 > VAR_4->ant_ratio))
   VAR_8 = 1;

  break;
 case 3:
  if (VAR_6 < 4 || VAR_6 < VAR_4->low_rssi_thresh)
   break;

  if ((VAR_9 && (VAR_6 >= (VAR_7 - 3))) ||
      (VAR_10 && (VAR_6 >= (VAR_7 + 3))) ||
      (VAR_5 > VAR_4->ant_ratio))
   VAR_8 = 1;

  break;
 }

 return VAR_8;
}
