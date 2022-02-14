
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_idle; int rx_idle; scalar_t__ rx_en; scalar_t__ tx_en; scalar_t__ en; } ;
union cvmx_agl_gmx_prtx_cfg {TYPE_1__ s; void* u64; } ;
struct octeon_mgmt {scalar_t__ agl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,void*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct octeon_mgmt *VAR_2)
{
 union cvmx_agl_gmx_prtx_cfg VAR_3;


 VAR_3.u64 = FUNC_1(VAR_2->agl + VAR_0);
 VAR_3.s.en = 0;
 VAR_3.s.tx_en = 0;
 VAR_3.s.rx_en = 0;
 FUNC_2(VAR_2->agl + VAR_0, VAR_3.u64);

 if (FUNC_0(VAR_1)) {
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < 10; VAR_4++) {
   VAR_3.u64 = FUNC_1(VAR_2->agl + VAR_0);
   if (VAR_3.s.tx_idle == 1 || VAR_3.s.rx_idle == 1)
    break;
   FUNC_3(1);
   VAR_4++;
  }
 }
}
