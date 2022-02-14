
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
struct ath9k_channel {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ath9k_channel*) ;
 scalar_t__ FUNC_1 (struct ath9k_channel*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct ath_hw *VAR_1, struct ath9k_channel *VAR_2,
     int VAR_3)
{
 VAR_3 /= 10;

 if (FUNC_0(VAR_2))
  VAR_3 *= 2;
 else if (FUNC_1(VAR_2))
  VAR_3 *= 4;

 FUNC_2(VAR_3 + VAR_0);
}
