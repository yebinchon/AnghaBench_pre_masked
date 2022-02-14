
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ath10k {TYPE_1__* hw_ce_regs; } ;
struct TYPE_2__ {scalar_t__ sr_size_addr; } ;


 int FUNC_0 (struct ath10k*,scalar_t__,unsigned int) ;

__attribute__((used)) static inline void FUNC_1(struct ath10k *VAR_0,
            u32 VAR_1,
            unsigned int VAR_2)
{
 FUNC_0(VAR_0, VAR_1 +
     VAR_0->hw_ce_regs->sr_size_addr, VAR_2);
}
