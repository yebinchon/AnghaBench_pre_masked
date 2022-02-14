
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {int hw_mask; int fh_mask; int fh_init_mask; int hw_init_mask; int inta_mask; int msix_enabled; } ;
struct iwl_trans {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iwl_trans*,char*) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int VAR_4 ;
 int FUNC_2 (struct iwl_trans*,int ,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static inline void FUNC_4(struct iwl_trans *VAR_5)
{
 struct iwl_trans_pcie *VAR_6 = FUNC_1(VAR_5);

 FUNC_0(VAR_5, "Enabling interrupts\n");
 FUNC_3(VAR_4, &VAR_5->status);
 if (!VAR_6->msix_enabled) {
  VAR_6->inta_mask = VAR_0;
  FUNC_2(VAR_5, VAR_1, VAR_6->inta_mask);
 } else {




  VAR_6->hw_mask = VAR_6->hw_init_mask;
  VAR_6->fh_mask = VAR_6->fh_init_mask;
  FUNC_2(VAR_5, VAR_2,
       ~VAR_6->fh_mask);
  FUNC_2(VAR_5, VAR_3,
       ~VAR_6->hw_mask);
 }
}
