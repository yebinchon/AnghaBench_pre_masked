
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans_pcie {int fh_init_mask; int inta_mask; int msix_enabled; } ;
struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct TYPE_2__ {scalar_t__ device_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iwl_trans*,char*) ;
 scalar_t__ VAR_5 ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int VAR_6 ;
 int FUNC_2 (struct iwl_trans*,int ) ;
 int FUNC_3 (struct iwl_trans*,int ,int ) ;
 int FUNC_4 (struct iwl_trans*,int ,int ) ;

__attribute__((used)) static inline void FUNC_5(struct iwl_trans *VAR_7)
{
 struct iwl_trans_pcie *VAR_8 = FUNC_1(VAR_7);

 FUNC_0(VAR_7, "Enabling rfkill interrupt\n");
 if (!VAR_8->msix_enabled) {
  VAR_8->inta_mask = VAR_2;
  FUNC_4(VAR_7, VAR_3, VAR_8->inta_mask);
 } else {
  FUNC_4(VAR_7, VAR_4,
       VAR_8->fh_init_mask);
  FUNC_2(VAR_7,
        VAR_6);
 }

 if (VAR_7->trans_cfg->device_family >= VAR_5) {





  FUNC_3(VAR_7, VAR_0,
       VAR_1);
 }
}
