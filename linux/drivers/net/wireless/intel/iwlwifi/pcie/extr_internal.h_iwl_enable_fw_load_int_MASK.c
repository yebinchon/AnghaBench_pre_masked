
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {int hw_init_mask; int inta_mask; int msix_enabled; } ;
struct iwl_trans {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_trans*,char*) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int VAR_3 ;
 int FUNC_2 (struct iwl_trans*,int ) ;
 int FUNC_3 (struct iwl_trans*,int ,int ) ;

__attribute__((used)) static inline void FUNC_4(struct iwl_trans *VAR_4)
{
 struct iwl_trans_pcie *VAR_5 = FUNC_1(VAR_4);

 FUNC_0(VAR_4, "Enabling FW load interrupt\n");
 if (!VAR_5->msix_enabled) {
  VAR_5->inta_mask = VAR_0;
  FUNC_3(VAR_4, VAR_1, VAR_5->inta_mask);
 } else {
  FUNC_3(VAR_4, VAR_2,
       VAR_5->hw_init_mask);
  FUNC_2(VAR_4,
        VAR_3);
 }
}
