
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int preamble; } ;
union cvmx_smix_clk {int u64; TYPE_1__ s; } ;
struct cavium_mdiobus {int mode; scalar_t__ register_base; } ;
typedef enum cavium_mdiobus_mode { ____Placeholder_cavium_mdiobus_mode } cavium_mdiobus_mode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct cavium_mdiobus *VAR_2,
        enum cavium_mdiobus_mode VAR_3)
{
 union cvmx_smix_clk VAR_4;

 if (VAR_3 == VAR_2->mode)
  return;

 VAR_4.u64 = FUNC_0(VAR_2->register_base + VAR_1);
 VAR_4.s.mode = (VAR_3 == VAR_0) ? 1 : 0;
 VAR_4.s.preamble = 1;
 FUNC_1(VAR_4.u64, VAR_2->register_base + VAR_1);
 VAR_2->mode = VAR_3;
}
