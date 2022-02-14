
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
struct ath9k_channel {int dummy; } ;
typedef scalar_t__ s8 ;
typedef scalar_t__ s16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct ath_hw*,struct ath9k_channel*,int ) ;

s16 FUNC_1(struct ath_hw *VAR_2, struct ath9k_channel *VAR_3,
      s16 VAR_4)
{
 s8 VAR_5 = VAR_1;

 if (VAR_4) {
  s8 VAR_6 = VAR_4 - VAR_0 -
      FUNC_0(VAR_2, VAR_3, 0);
  if (VAR_6 > 0)
   VAR_5 += VAR_6;
 }
 return VAR_5;
}
