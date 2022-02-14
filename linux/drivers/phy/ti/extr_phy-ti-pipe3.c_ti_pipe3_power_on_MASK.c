
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_pipe3 {scalar_t__ mode; int power_reg; int phy_power_syscon; int dev; int sys_clk; int control_dev; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int) ;
 struct ti_pipe3* FUNC_3 (struct phy*) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (struct ti_pipe3*) ;

__attribute__((used)) static int FUNC_6(struct phy *VAR_9)
{
 u32 VAR_10;
 u32 VAR_11;
 int VAR_12;
 unsigned long VAR_13;
 struct ti_pipe3 *VAR_14 = FUNC_3(VAR_9);
 bool VAR_15 = 0;

 if (!VAR_14->phy_power_syscon) {
  FUNC_2(VAR_14->control_dev, 1);
  return 0;
 }

 VAR_13 = FUNC_0(VAR_14->sys_clk);
 if (!VAR_13) {
  FUNC_1(VAR_14->dev, "Invalid clock rate\n");
  return -VAR_0;
 }
 VAR_13 = VAR_13 / 1000000;
 VAR_11 = VAR_2;
 VAR_10 = VAR_13 << VAR_3;
 VAR_12 = FUNC_4(VAR_14->phy_power_syscon, VAR_14->power_reg,
     VAR_11, VAR_10);




 VAR_11 = VAR_1;
 if (VAR_14->mode == VAR_5 || VAR_14->mode == VAR_6) {
  VAR_10 = VAR_8;
  VAR_15 = 1;
 } else {
  VAR_10 = VAR_8 | VAR_7;
 }

 FUNC_4(VAR_14->phy_power_syscon, VAR_14->power_reg,
      VAR_11, VAR_10);

 if (VAR_15) {
  VAR_10 = VAR_8 | VAR_7;
  FUNC_4(VAR_14->phy_power_syscon, VAR_14->power_reg,
       VAR_11, VAR_10);
 }

 if (VAR_14->mode == VAR_4)
  FUNC_5(VAR_14);

 return 0;
}
