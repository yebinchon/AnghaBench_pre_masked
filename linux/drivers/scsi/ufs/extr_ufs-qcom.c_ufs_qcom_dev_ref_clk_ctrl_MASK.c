
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ufs_qcom_host {int is_dev_ref_clk_enabled; scalar_t__ dev_ref_clk_ctrl_mmio; int dev_ref_clk_en_mask; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct ufs_qcom_host *VAR_0, bool VAR_1)
{
 if (VAR_0->dev_ref_clk_ctrl_mmio &&
     (VAR_1 ^ VAR_0->is_dev_ref_clk_enabled)) {
  u32 VAR_2 = FUNC_0(VAR_0->dev_ref_clk_ctrl_mmio);

  if (VAR_1)
   VAR_2 |= VAR_0->dev_ref_clk_en_mask;
  else
   VAR_2 &= ~VAR_0->dev_ref_clk_en_mask;







  if (!VAR_1)
   FUNC_1(1);

  FUNC_3(VAR_2, VAR_0->dev_ref_clk_ctrl_mmio);


  FUNC_2();






  if (VAR_1)
   FUNC_1(1);

  VAR_0->is_dev_ref_clk_enabled = VAR_1;
 }
}
