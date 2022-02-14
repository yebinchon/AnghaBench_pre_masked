
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ath10k_ahb {scalar_t__ mem; } ;
struct ath10k {int dummy; } ;


 struct ath10k_ahb* FUNC_0 (struct ath10k*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct ath10k *VAR_0, u32 VAR_1)
{
 struct ath10k_ahb *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2->mem + VAR_1);
}
