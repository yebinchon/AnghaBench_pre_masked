
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_trans_pcie {int is_down; int mutex; } ;
struct iwl_trans {int status; TYPE_2__* trans_cfg; } ;
struct TYPE_4__ {scalar_t__ device_family; TYPE_1__* csr; } ;
struct TYPE_3__ {int flag_mac_access_req; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_trans*,char*) ;
 scalar_t__ VAR_1 ;
 struct iwl_trans_pcie* FUNC_2 (struct iwl_trans*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct iwl_trans*,int ,int ) ;
 int FUNC_5 (struct iwl_trans*) ;
 int FUNC_6 (struct iwl_trans*) ;
 int FUNC_7 (struct iwl_trans_pcie*) ;
 int FUNC_8 (struct iwl_trans*) ;
 int FUNC_9 (struct iwl_trans*) ;
 int FUNC_10 (struct iwl_trans*) ;
 int FUNC_11 (struct iwl_trans*) ;
 int FUNC_12 (struct iwl_trans*,int) ;
 int FUNC_13 (struct iwl_trans*) ;
 int FUNC_14 (struct iwl_trans*) ;
 int FUNC_15 (struct iwl_trans*) ;
 int FUNC_16 (struct iwl_trans*) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int ,int *) ;

void FUNC_19(struct iwl_trans *VAR_6)
{
 struct iwl_trans_pcie *VAR_7 = FUNC_2(VAR_6);

 FUNC_17(&VAR_7->mutex);

 if (VAR_7->is_down)
  return;

 VAR_7->is_down = 1;


 FUNC_5(VAR_6);


 FUNC_11(VAR_6);
 if (FUNC_18(VAR_2, &VAR_6->status)) {
  FUNC_1(VAR_6,
          "DEVICE_ENABLED bit was set and is now cleared\n");
  FUNC_13(VAR_6);
  FUNC_15(VAR_6);
 }

 FUNC_9(VAR_6);
 if (VAR_6->trans_cfg->device_family >= VAR_1)
  FUNC_10(VAR_6);
 else
  FUNC_8(VAR_6);


 FUNC_4(VAR_6, VAR_0,
        FUNC_0(VAR_6->trans_cfg->csr->flag_mac_access_req));


 FUNC_12(VAR_6, 0);

 FUNC_16(VAR_6);
 FUNC_7(VAR_7);
 FUNC_5(VAR_6);


 FUNC_3(VAR_4, &VAR_6->status);
 FUNC_3(VAR_3, &VAR_6->status);
 FUNC_3(VAR_5, &VAR_6->status);





 FUNC_6(VAR_6);


 FUNC_14(VAR_6);
}
