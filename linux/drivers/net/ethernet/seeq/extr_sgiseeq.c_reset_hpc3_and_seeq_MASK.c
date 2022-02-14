
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sgiseeq_regs {int dummy; } ;
struct hpc3_ethregs {scalar_t__ tx_ctrl; scalar_t__ rx_ctrl; } ;


 int FUNC_0 (struct hpc3_ethregs*) ;

__attribute__((used)) static inline void FUNC_1(struct hpc3_ethregs *VAR_0,
           struct sgiseeq_regs *VAR_1)
{
 VAR_0->rx_ctrl = VAR_0->tx_ctrl = 0;
 FUNC_0(VAR_0);
}
