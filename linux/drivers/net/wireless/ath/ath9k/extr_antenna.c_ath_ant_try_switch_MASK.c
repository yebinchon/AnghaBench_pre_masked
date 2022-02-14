
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw_antcomb_conf {int main_lna_conf; int alt_lna_conf; } ;
struct ath_ant_comb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ath_hw_antcomb_conf*,struct ath_ant_comb*,int,int,int) ;

__attribute__((used)) static bool FUNC_1(struct ath_hw_antcomb_conf *VAR_2,
          struct ath_ant_comb *VAR_3,
          int VAR_4, int VAR_5,
          int VAR_6, int VAR_7,
          int VAR_8)
{
 bool VAR_9 = 0;

 if (FUNC_0(VAR_2, VAR_3, VAR_4,
           VAR_5, VAR_6)) {
  if (VAR_8 == VAR_1) {



   VAR_2->main_lna_conf = VAR_1;
   VAR_2->alt_lna_conf = VAR_0;
  } else if (VAR_8 == VAR_0) {
   VAR_2->main_lna_conf = VAR_0;
   VAR_2->alt_lna_conf = VAR_1;
  }

  VAR_9 = 1;
 } else if ((VAR_8 != VAR_0) &&
     (VAR_8 != VAR_1)) {



  if (VAR_7 == VAR_1)
   VAR_2->alt_lna_conf = VAR_0;
  else if (VAR_7 == VAR_0)
   VAR_2->alt_lna_conf = VAR_1;

  VAR_9 = 1;
 }

 return VAR_9;
}
