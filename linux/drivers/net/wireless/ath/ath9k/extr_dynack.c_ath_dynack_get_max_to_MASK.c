
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {struct ath9k_channel* curchan; } ;
struct ath9k_channel {int dummy; } ;


 scalar_t__ FUNC_0 (struct ath9k_channel const*) ;
 scalar_t__ FUNC_1 (struct ath9k_channel const*) ;
 scalar_t__ FUNC_2 (struct ath9k_channel const*) ;

__attribute__((used)) static u32 FUNC_3(struct ath_hw *VAR_0)
{
 const struct ath9k_channel *VAR_1 = VAR_0->curchan;

 if (!VAR_1)
  return 300;

 if (FUNC_1(VAR_1))
  return 300;
 if (FUNC_0(VAR_1))
  return 750;
 if (FUNC_2(VAR_1))
  return 1500;
 return 600;
}
