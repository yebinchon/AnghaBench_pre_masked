
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_trans {TYPE_2__* trans_cfg; } ;
struct TYPE_4__ {TYPE_1__* csr; } ;
struct TYPE_3__ {int flag_sw_reset; int addr_sw_reset; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iwl_trans*,int ,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct iwl_trans *VAR_0)
{

 FUNC_1(VAR_0, VAR_0->trans_cfg->csr->addr_sw_reset,
      FUNC_0(VAR_0->trans_cfg->csr->flag_sw_reset));
 FUNC_2(5000, 6000);
}
