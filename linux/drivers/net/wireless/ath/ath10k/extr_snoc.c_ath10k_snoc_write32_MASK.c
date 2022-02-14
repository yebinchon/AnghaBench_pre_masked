
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ath10k_snoc {scalar_t__ mem; } ;
struct ath10k {int dummy; } ;


 struct ath10k_snoc* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ath10k *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct ath10k_snoc *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_2, VAR_3->mem + VAR_1);
}
