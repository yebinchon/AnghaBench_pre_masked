
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ath10k {TYPE_1__* hw_ce_regs; } ;
struct TYPE_2__ {int dr_base_addr_hi; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int) ;
 int FUNC_1 (struct ath10k*,int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ath10k *VAR_1,
       u32 VAR_2,
       u64 VAR_3)
{
 u32 VAR_4 = FUNC_2(VAR_3) & VAR_0;
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2 +
         VAR_1->hw_ce_regs->dr_base_addr_hi);
 VAR_5 &= ~VAR_0;
 VAR_5 |= VAR_4;
 FUNC_1(VAR_1, VAR_2 +
     VAR_1->hw_ce_regs->dr_base_addr_hi, VAR_5);
}
