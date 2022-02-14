
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k_pci {scalar_t__ mem; } ;
struct ath10k {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 struct ath10k_pci* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static bool FUNC_3(struct ath10k *VAR_3)
{
 struct ath10k_pci *VAR_4 = FUNC_1(VAR_3);
 u32 VAR_5 = FUNC_2(VAR_4->mem + VAR_0 +
      VAR_1);

 return FUNC_0(VAR_5) == VAR_2;
}
