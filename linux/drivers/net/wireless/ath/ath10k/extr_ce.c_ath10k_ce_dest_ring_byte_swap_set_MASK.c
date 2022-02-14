
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ath10k_hw_ce_ctrl1 {int addr; TYPE_2__* dst_ring; } ;
struct ath10k {TYPE_1__* hw_ce_regs; } ;
struct TYPE_4__ {int mask; } ;
struct TYPE_3__ {struct ath10k_hw_ce_ctrl1* ctrl1_regs; } ;


 int FUNC_0 (struct ath10k*,int) ;
 int FUNC_1 (struct ath10k*,int,int) ;
 int FUNC_2 (unsigned int,TYPE_2__*) ;

__attribute__((used)) static inline void FUNC_3(struct ath10k *VAR_0,
           u32 VAR_1,
           unsigned int VAR_2)
{
 struct ath10k_hw_ce_ctrl1 *VAR_3 = VAR_0->hw_ce_regs->ctrl1_regs;

 u32 VAR_4 = FUNC_0(VAR_0, VAR_1 +
       VAR_3->addr);

 FUNC_1(VAR_0, VAR_1 + VAR_3->addr,
     (VAR_4 & ~(VAR_3->dst_ring->mask)) |
     FUNC_2(VAR_2, VAR_3->dst_ring));
}
