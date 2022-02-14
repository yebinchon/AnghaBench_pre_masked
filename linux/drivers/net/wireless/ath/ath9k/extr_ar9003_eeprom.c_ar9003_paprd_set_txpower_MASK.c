
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath_hw {int paprd_target_power; } ;
struct ath9k_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath9k_channel*) ;
 scalar_t__ FUNC_5 (struct ath9k_channel*) ;
 int FUNC_6 (struct ath_hw*) ;

__attribute__((used)) static void FUNC_7(struct ath_hw *VAR_4,
         struct ath9k_channel *VAR_5,
         u8 *VAR_6)
{
 int VAR_7;

 if (!FUNC_6(VAR_4))
  return;

 if (FUNC_5(VAR_5))
  VAR_7 = VAR_3;
 else
  VAR_7 = VAR_1;

 if (FUNC_4(VAR_5)) {
  if (!FUNC_0(VAR_4) && !FUNC_1(VAR_4) &&
      !FUNC_2(VAR_4) && !FUNC_3(VAR_4)) {
   if (FUNC_5(VAR_5))
    VAR_7 = VAR_2;
   else
    VAR_7 = VAR_0;
  }
 }

 VAR_4->paprd_target_power = VAR_6[VAR_7];
}
