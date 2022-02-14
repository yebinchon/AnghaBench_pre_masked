
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_pipe3 {int power_reg; int phy_power_syscon; int control_dev; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct ti_pipe3* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_1)
{
 int VAR_2;
 struct ti_pipe3 *VAR_3 = FUNC_1(VAR_1);

 if (!VAR_3->phy_power_syscon) {
  FUNC_0(VAR_3->control_dev, 0);
  return 0;
 }

 VAR_2 = FUNC_2(VAR_3->phy_power_syscon, VAR_3->power_reg,
     VAR_0, 0);
 return VAR_2;
}
