
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_pipe3 {scalar_t__ mode; int dpll_reset_reg; int dpll_reset_syscon; int dev; int pll_ctrl_base; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int) ;
 unsigned long VAR_10 ;
 unsigned long FUNC_2 (int ) ;
 struct ti_pipe3* FUNC_3 (struct phy*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct ti_pipe3*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct phy *VAR_11)
{
 struct ti_pipe3 *VAR_12 = FUNC_3(VAR_11);
 u32 VAR_13;
 unsigned long VAR_14;




 if (VAR_12->mode == VAR_2 && !VAR_12->dpll_reset_syscon)
  return 0;


 if (VAR_12->mode != VAR_1) {

  VAR_13 = FUNC_6(VAR_12->pll_ctrl_base, VAR_3);
  VAR_13 |= VAR_4;
  FUNC_7(VAR_12->pll_ctrl_base, VAR_3, VAR_13);


  VAR_14 = VAR_10 + FUNC_2(VAR_5);
  do {
   FUNC_0();
   VAR_13 = FUNC_6(VAR_12->pll_ctrl_base, VAR_7);
   if ((VAR_13 & VAR_8) && (VAR_13 & VAR_6))
    break;
  } while (!FUNC_8(VAR_10, VAR_14));

  if (!(VAR_13 & VAR_8) || !(VAR_13 & VAR_6)) {
   FUNC_1(VAR_12->dev, "Failed to power down: PLL_STATUS 0x%x\n",
    VAR_13);
   return -VAR_0;
  }
 }


 if (VAR_12->mode == VAR_2) {
  FUNC_4(VAR_12->dpll_reset_syscon, VAR_12->dpll_reset_reg,
       VAR_9, VAR_9);
  FUNC_4(VAR_12->dpll_reset_syscon, VAR_12->dpll_reset_reg,
       VAR_9, 0);
 }

 FUNC_5(VAR_12);

 return 0;
}
