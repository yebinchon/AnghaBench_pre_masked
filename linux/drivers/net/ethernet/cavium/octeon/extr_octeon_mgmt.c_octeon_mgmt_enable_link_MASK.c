
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_en; int rx_en; int en; } ;
union cvmx_agl_gmx_prtx_cfg {int u64; TYPE_1__ s; } ;
struct octeon_mgmt {scalar_t__ agl; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct octeon_mgmt *VAR_1)
{
 union cvmx_agl_gmx_prtx_cfg VAR_2;


 VAR_2.u64 = FUNC_0(VAR_1->agl + VAR_0);
 VAR_2.s.tx_en = 1;
 VAR_2.s.rx_en = 1;
 VAR_2.s.en = 1;
 FUNC_1(VAR_1->agl + VAR_0, VAR_2.u64);
}
