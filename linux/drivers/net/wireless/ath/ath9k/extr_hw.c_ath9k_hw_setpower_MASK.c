
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int power_mode; int chip_fullsleep; int ah_flags; } ;
struct ath_common {int dummy; } ;
typedef enum ath9k_power_mode { ____Placeholder_ath9k_power_mode } ath9k_power_mode ;


 int VAR_0 ;



 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct ath_hw*) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_common*,int ,char*,char const*,char const*) ;
 int FUNC_8 (struct ath_common*,char*,int) ;

bool FUNC_9(struct ath_hw *VAR_2, enum ath9k_power_mode VAR_3)
{
 struct ath_common *VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = 1;
 static const char *VAR_6[] = {
  "AWAKE",
  "FULL-SLEEP",
  "NETWORK SLEEP",
  "UNDEFINED"
 };

 if (VAR_2->power_mode == VAR_3)
  return VAR_5;

 FUNC_7(VAR_4, VAR_1, "%s -> %s\n",
  VAR_6[VAR_2->power_mode], VAR_6[VAR_3]);

 switch (VAR_3) {
 case 130:
  VAR_5 = FUNC_4(VAR_2);
  break;
 case 129:
  if (FUNC_3(VAR_2))
   FUNC_1(VAR_2);

  FUNC_6(VAR_2);
  VAR_2->chip_fullsleep = 1;
  break;
 case 128:
  FUNC_5(VAR_2);
  break;
 default:
  FUNC_8(VAR_4, "Unknown power mode %u\n", VAR_3);
  return 0;
 }
 VAR_2->power_mode = VAR_3;







 if (!(VAR_2->ah_flags & VAR_0))
  FUNC_0(!VAR_5);

 return VAR_5;
}
