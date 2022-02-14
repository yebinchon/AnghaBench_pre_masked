
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int flags; } ;
struct eth_fast_path_rx_reg_cqe {TYPE_1__ tunnel_pars_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_0(struct eth_fast_path_rx_reg_cqe *VAR_4,
          u16 VAR_5)
{
 u8 VAR_6 = VAR_4->tunnel_pars_flags.flags;

 if ((VAR_6 & (VAR_0 <<
        VAR_1)) ||
     (VAR_5 & (VAR_2 <<
       VAR_3)))
  return 1;

 return 0;
}
