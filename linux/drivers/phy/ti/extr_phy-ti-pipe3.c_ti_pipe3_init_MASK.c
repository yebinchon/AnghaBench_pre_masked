
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_pipe3 {scalar_t__ mode; int pll_ctrl_base; int pcie_pcs_reg; int pcs_syscon; int control_dev; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int) ;
 struct ti_pipe3* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (struct ti_pipe3*) ;
 int FUNC_4 (struct ti_pipe3*) ;
 int FUNC_5 (struct ti_pipe3*) ;
 int FUNC_6 (struct ti_pipe3*) ;
 int FUNC_7 (struct ti_pipe3*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int) ;

__attribute__((used)) static int FUNC_10(struct phy *VAR_9)
{
 struct ti_pipe3 *VAR_10 = FUNC_1(VAR_9);
 u32 VAR_11;
 int VAR_12 = 0;

 FUNC_7(VAR_10);





 if (VAR_10->mode == VAR_3) {
  if (!VAR_10->pcs_syscon) {
   FUNC_0(VAR_10->control_dev, 0x96);
   return 0;
  }

  VAR_11 = 0x96 << VAR_1;
  VAR_12 = FUNC_2(VAR_10->pcs_syscon, VAR_10->pcie_pcs_reg,
      VAR_2, VAR_11);
  return VAR_12;
 }


 VAR_11 = FUNC_8(VAR_10->pll_ctrl_base, VAR_5);
 if (VAR_11 & VAR_6) {
  VAR_11 &= ~VAR_6;
  FUNC_9(VAR_10->pll_ctrl_base, VAR_5, VAR_11);
  VAR_12 = FUNC_6(VAR_10);
 }


 VAR_11 = FUNC_8(VAR_10->pll_ctrl_base, VAR_8);
 if ((VAR_11 & VAR_7) && VAR_10->mode == VAR_4)
  return VAR_12;


 VAR_12 = FUNC_5(VAR_10);
 if (VAR_12) {
  FUNC_4(VAR_10);
  return -VAR_0;
 }

 FUNC_3(VAR_10);

 return VAR_12;
}
