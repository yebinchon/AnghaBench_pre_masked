
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {int fh_init_mask; int hw_init_mask; int msix_enabled; } ;
struct iwl_trans {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iwl_trans*,char*) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int VAR_5 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct iwl_trans*,int ,int) ;

__attribute__((used)) static inline void FUNC_4(struct iwl_trans *VAR_6)
{
 struct iwl_trans_pcie *VAR_7 = FUNC_1(VAR_6);

 FUNC_2(VAR_5, &VAR_6->status);
 if (!VAR_7->msix_enabled) {

  FUNC_3(VAR_6, VAR_2, 0x00000000);



  FUNC_3(VAR_6, VAR_1, 0xffffffff);
  FUNC_3(VAR_6, VAR_0, 0xffffffff);
 } else {

  FUNC_3(VAR_6, VAR_3,
       VAR_7->fh_init_mask);
  FUNC_3(VAR_6, VAR_4,
       VAR_7->hw_init_mask);
 }
 FUNC_0(VAR_6, "Disabled interrupts\n");
}
