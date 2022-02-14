
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_trans {TYPE_2__* trans_cfg; } ;
struct TYPE_4__ {TYPE_1__* csr; } ;
struct TYPE_3__ {int flag_master_dis; int addr_sw_reset; int flag_stop_master; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iwl_trans*,char*) ;
 int FUNC_2 (struct iwl_trans*,char*) ;
 int FUNC_3 (struct iwl_trans*,int ,int ,int ,int) ;
 int FUNC_4 (struct iwl_trans*,int ,int ) ;

void FUNC_5(struct iwl_trans *VAR_0)
{
 int VAR_1;


 FUNC_4(VAR_0, VAR_0->trans_cfg->csr->addr_sw_reset,
      FUNC_0(VAR_0->trans_cfg->csr->flag_stop_master));

 VAR_1 = FUNC_3(VAR_0, VAR_0->trans_cfg->csr->addr_sw_reset,
      FUNC_0(VAR_0->trans_cfg->csr->flag_master_dis),
      FUNC_0(VAR_0->trans_cfg->csr->flag_master_dis), 100);
 if (VAR_1 < 0)
  FUNC_2(VAR_0, "Master Disable Timed Out, 100 usec\n");

 FUNC_1(VAR_0, "stop master\n");
}
