
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwl_trans {int status; TYPE_2__* cfg; TYPE_3__* trans_cfg; } ;
struct TYPE_6__ {scalar_t__ device_family; TYPE_1__* base_params; } ;
struct TYPE_5__ {int apmg_not_supported; scalar_t__ host_interrupt_operation_mode; } ;
struct TYPE_4__ {scalar_t__ pll_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct iwl_trans*,char*) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct iwl_trans*,TYPE_3__*) ;
 int FUNC_2 (struct iwl_trans*) ;
 int FUNC_3 (struct iwl_trans*,int ) ;
 int FUNC_4 (struct iwl_trans*,int ,int ) ;
 int FUNC_5 (struct iwl_trans*,int ,int ) ;
 int FUNC_6 (struct iwl_trans*,int ,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct iwl_trans *VAR_19)
{
 int VAR_20;

 FUNC_0(VAR_19, "Init card's basic functions\n");







 if (VAR_19->trans_cfg->device_family < VAR_15)
  FUNC_4(VAR_19, VAR_10,
       VAR_11);





 FUNC_4(VAR_19, VAR_10,
      VAR_12);


 FUNC_4(VAR_19, VAR_8, VAR_9);





 FUNC_4(VAR_19, VAR_13,
      VAR_14);

 FUNC_2(VAR_19);


 if (VAR_19->trans_cfg->base_params->pll_cfg)
  FUNC_4(VAR_19, VAR_7, VAR_6);

 VAR_20 = FUNC_1(VAR_19, VAR_19->trans_cfg);
 if (VAR_20)
  return VAR_20;

 if (VAR_19->cfg->host_interrupt_operation_mode) {
  FUNC_3(VAR_19, VAR_16);
  FUNC_3(VAR_19, VAR_16);
  FUNC_5(VAR_19, VAR_16, VAR_17);
  FUNC_3(VAR_19, VAR_16);
  FUNC_3(VAR_19, VAR_16);
 }
 if (!VAR_19->cfg->apmg_not_supported) {
  FUNC_6(VAR_19, VAR_0,
          VAR_1);
  FUNC_8(20);


  FUNC_5(VAR_19, VAR_2,
      VAR_3);


  FUNC_6(VAR_19, VAR_4,
          VAR_5);
 }

 FUNC_7(VAR_18, &VAR_19->status);

 return 0;
}
