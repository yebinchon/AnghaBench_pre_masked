
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_trans {TYPE_2__* trans_cfg; } ;
struct TYPE_4__ {TYPE_1__* csr; } ;
struct TYPE_3__ {int flag_init_done; int flag_mac_access_req; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_trans*,int ,int ) ;
 int FUNC_2 (struct iwl_trans*) ;
 int FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (struct iwl_trans*,int) ;
 int FUNC_5 (struct iwl_trans*) ;
 int FUNC_6 (struct iwl_trans*) ;

void FUNC_7(struct iwl_trans *VAR_1,
      bool VAR_2, bool VAR_3)
{
 FUNC_2(VAR_1);





 if (VAR_2)
  return;

 FUNC_3(VAR_1);

 FUNC_5(VAR_1);

 FUNC_1(VAR_1, VAR_0,
        FUNC_0(VAR_1->trans_cfg->csr->flag_mac_access_req));
 FUNC_1(VAR_1, VAR_0,
        FUNC_0(VAR_1->trans_cfg->csr->flag_init_done));

 if (VAR_3) {





  FUNC_6(VAR_1);
 }

 FUNC_4(VAR_1, 1);
}
