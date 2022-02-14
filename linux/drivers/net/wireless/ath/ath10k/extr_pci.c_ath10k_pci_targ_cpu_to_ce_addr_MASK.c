
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k_pci {int (* targ_cpu_to_ce_addr ) (struct ath10k*,int ) ;} ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct ath10k_pci* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,int ) ;

__attribute__((used)) static u32 FUNC_3(struct ath10k *VAR_1, u32 VAR_2)
{
 struct ath10k_pci *VAR_3 = FUNC_1(VAR_1);

 if (FUNC_0(!VAR_3->targ_cpu_to_ce_addr))
  return -VAR_0;

 return VAR_3->targ_cpu_to_ce_addr(VAR_1, VAR_2);
}
