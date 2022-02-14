
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
struct ath9k_channel {int channel; } ;


 scalar_t__ FUNC_0 (struct ath9k_channel*) ;
 scalar_t__ FUNC_1 (struct ath9k_channel*) ;

__attribute__((used)) static int FUNC_2(struct ath_hw *VAR_0,
         struct ath9k_channel *VAR_1)
{
 int VAR_2;

 if (FUNC_0(VAR_1)) {
  if (FUNC_1(VAR_1))
   return 7;
  else
   return 8;
 }

 if (VAR_1->channel <= 5350)
  VAR_2 = 1;
 else if ((VAR_1->channel > 5350) && (VAR_1->channel <= 5600))
  VAR_2 = 3;
 else
  VAR_2 = 5;

 if (FUNC_1(VAR_1))
  VAR_2++;

 return VAR_2;
}
