
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sgiseeq_regs {int rstat; } ;
struct sgiseeq_private {int mode; } ;
struct hpc3_ethregs {int rx_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct sgiseeq_private *VAR_2,
      struct hpc3_ethregs *VAR_3,
      struct sgiseeq_regs *VAR_4)
{
 VAR_4->rstat = VAR_2->mode | VAR_1;
 VAR_3->rx_ctrl = VAR_0;
}
