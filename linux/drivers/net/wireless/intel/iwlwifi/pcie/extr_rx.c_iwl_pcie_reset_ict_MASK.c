
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_trans_pcie {int ict_tbl_dma; int use_ict; int inta_mask; int irq_lock; scalar_t__ ict_index; int ict_tbl; } ;
struct iwl_trans {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct iwl_trans*,char*,int) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*) ;
 int FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (struct iwl_trans*,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct iwl_trans *VAR_7)
{
 struct iwl_trans_pcie *VAR_8 = FUNC_1(VAR_7);
 u32 VAR_9;

 if (!VAR_8->ict_tbl)
  return;

 FUNC_6(&VAR_8->irq_lock);
 FUNC_2(VAR_7);

 FUNC_5(VAR_8->ict_tbl, 0, VAR_6);

 VAR_9 = VAR_8->ict_tbl_dma >> VAR_5;

 VAR_9 |= VAR_2 |
        VAR_0 |
        VAR_1;

 FUNC_0(VAR_7, "CSR_DRAM_INT_TBL_REG =0x%x\n", VAR_9);

 FUNC_4(VAR_7, VAR_3, VAR_9);
 VAR_8->use_ict = 1;
 VAR_8->ict_index = 0;
 FUNC_4(VAR_7, VAR_4, VAR_8->inta_mask);
 FUNC_3(VAR_7);
 FUNC_7(&VAR_8->irq_lock);
}
