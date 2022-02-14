
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int int_reset; } ;
union blogic_cntrl_reg {scalar_t__ all; TYPE_1__ cr; } ;
struct blogic_adapter {scalar_t__ io_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct blogic_adapter *VAR_1)
{
 union blogic_cntrl_reg VAR_2;
 VAR_2.all = 0;
 VAR_2.cr.int_reset = 1;
 FUNC_0(VAR_2.all, VAR_1->io_addr + VAR_0);
}
