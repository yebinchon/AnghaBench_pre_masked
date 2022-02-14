
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;
struct ath9k_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath9k_channel*) ;
 scalar_t__ FUNC_2 (struct ath9k_channel*) ;
 scalar_t__ FUNC_3 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_4 (struct ath_hw*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ath_hw *VAR_6, struct ath9k_channel *VAR_7)
{
 u32 VAR_8 = 0;

 if (VAR_7 == ((void*)0))
  return;

 if (FUNC_1(VAR_7))
  VAR_8 |= VAR_1;
 else
  VAR_8 |= VAR_3;

 if (!FUNC_0(VAR_6))
  VAR_8 |= (FUNC_2(VAR_7)) ?
   VAR_5 : VAR_4;

 if (FUNC_3(VAR_6, VAR_7))
  VAR_8 |= (VAR_1 | VAR_2);

 FUNC_4(VAR_6, VAR_0, VAR_8);
}
