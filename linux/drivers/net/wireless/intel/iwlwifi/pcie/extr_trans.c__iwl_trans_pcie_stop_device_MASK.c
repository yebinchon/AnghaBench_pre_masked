
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwl_trans_pcie {int is_down; int mutex; } ;
struct iwl_trans {int status; TYPE_3__* trans_cfg; TYPE_1__* cfg; } ;
struct TYPE_6__ {TYPE_2__* csr; } ;
struct TYPE_5__ {int flag_mac_access_req; } ;
struct TYPE_4__ {int apmg_not_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct iwl_trans*,char*) ;
 struct iwl_trans_pcie* FUNC_2 (struct iwl_trans*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct iwl_trans*,int ,int ) ;
 int FUNC_5 (struct iwl_trans*) ;
 int FUNC_6 (struct iwl_trans*) ;
 int FUNC_7 (struct iwl_trans*,int) ;
 int FUNC_8 (struct iwl_trans_pcie*) ;
 int FUNC_9 (struct iwl_trans*) ;
 int FUNC_10 (struct iwl_trans*) ;
 int FUNC_11 (struct iwl_trans*) ;
 int FUNC_12 (struct iwl_trans*) ;
 int FUNC_13 (struct iwl_trans*) ;
 int FUNC_14 (struct iwl_trans*,int ,int ) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int ,int *) ;
 int FUNC_17 (int) ;

__attribute__((used)) static void FUNC_18(struct iwl_trans *VAR_7)
{
 struct iwl_trans_pcie *VAR_8 = FUNC_2(VAR_7);

 FUNC_15(&VAR_8->mutex);

 if (VAR_8->is_down)
  return;

 VAR_8->is_down = 1;


 FUNC_5(VAR_7);


 FUNC_9(VAR_7);
 if (FUNC_16(VAR_3, &VAR_7->status)) {
  FUNC_1(VAR_7,
          "DEVICE_ENABLED bit was set and is now cleared\n");
  FUNC_12(VAR_7);
  FUNC_11(VAR_7);


  if (!VAR_7->cfg->apmg_not_supported) {
   FUNC_14(VAR_7, VAR_0,
           VAR_1);
   FUNC_17(5);
  }
 }


 FUNC_4(VAR_7, VAR_2,
        FUNC_0(VAR_7->trans_cfg->csr->flag_mac_access_req));


 FUNC_7(VAR_7, 0);

 FUNC_13(VAR_7);
 FUNC_8(VAR_8);
 FUNC_5(VAR_7);


 FUNC_3(VAR_5, &VAR_7->status);
 FUNC_3(VAR_4, &VAR_7->status);
 FUNC_3(VAR_6, &VAR_7->status);





 FUNC_6(VAR_7);


 FUNC_10(VAR_7);
}
