
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath10k_hw_ce_host_wm_regs {int wm_mask; } ;
struct ath10k {TYPE_1__* hw_ce_regs; } ;
struct TYPE_2__ {int host_ie_addr; struct ath10k_hw_ce_host_wm_regs* wm_regs; } ;


 int FUNC_0 (struct ath10k*,int) ;
 int FUNC_1 (struct ath10k*,int,int) ;

__attribute__((used)) static inline void FUNC_2(struct ath10k *VAR_0,
          u32 VAR_1)
{
 struct ath10k_hw_ce_host_wm_regs *VAR_2 = VAR_0->hw_ce_regs->wm_regs;

 u32 VAR_3 = FUNC_0(VAR_0, VAR_1 +
         VAR_0->hw_ce_regs->host_ie_addr);

 FUNC_1(VAR_0, VAR_1 + VAR_0->hw_ce_regs->host_ie_addr,
     VAR_3 & ~(VAR_2->wm_mask));
}
