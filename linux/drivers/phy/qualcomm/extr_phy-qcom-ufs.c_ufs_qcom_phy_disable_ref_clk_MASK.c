
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_qcom_phy {int is_ref_clk_enabled; scalar_t__ ref_clk_src; scalar_t__ ref_clk_parent; scalar_t__ ref_clk; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ufs_qcom_phy *VAR_0)
{
 if (VAR_0->is_ref_clk_enabled) {
  FUNC_0(VAR_0->ref_clk);




  if (VAR_0->ref_clk_parent)
   FUNC_0(VAR_0->ref_clk_parent);
  FUNC_0(VAR_0->ref_clk_src);
  VAR_0->is_ref_clk_enabled = 0;
 }
}
