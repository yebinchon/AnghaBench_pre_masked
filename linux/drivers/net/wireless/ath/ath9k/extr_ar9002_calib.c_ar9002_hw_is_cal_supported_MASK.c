
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int supp_cals; } ;
struct ath9k_channel {int dummy; } ;
typedef enum ar9002_cal_types { ____Placeholder_ar9002_cal_types } ar9002_cal_types ;





 int FUNC_0 (struct ath9k_channel*) ;
 int FUNC_1 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_2 (struct ath9k_channel*) ;

__attribute__((used)) static bool FUNC_3(struct ath_hw *VAR_0,
    struct ath9k_channel *VAR_1,
    enum ar9002_cal_types VAR_2)
{
 bool VAR_3 = 0;
 switch (VAR_0->supp_cals & VAR_2) {
 case 128:
  VAR_3 = 1;
  break;
 case 129:
 case 130:

  if (!((FUNC_0(VAR_1) || FUNC_1(VAR_0, VAR_1)) &&
        FUNC_2(VAR_1)))
   VAR_3 = 1;
  break;
 }
 return VAR_3;
}
