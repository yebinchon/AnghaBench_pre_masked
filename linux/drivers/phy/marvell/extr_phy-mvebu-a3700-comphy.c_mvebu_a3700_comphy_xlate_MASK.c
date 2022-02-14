
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct of_phandle_args {scalar_t__* args; } ;
struct mvebu_a3700_comphy_lane {scalar_t__ port; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct phy* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct phy*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 struct phy* FUNC_3 (struct device*,struct of_phandle_args*) ;
 struct mvebu_a3700_comphy_lane* FUNC_4 (struct phy*) ;

__attribute__((used)) static struct phy *FUNC_5(struct device *VAR_2,
         struct of_phandle_args *VAR_3)
{
 struct mvebu_a3700_comphy_lane *VAR_4;
 struct phy *VAR_5;

 if (FUNC_2(VAR_3->args[0] >= VAR_1))
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_3(VAR_2, VAR_3);
 if (FUNC_1(VAR_5))
  return VAR_5;

 VAR_4 = FUNC_4(VAR_5);
 VAR_4->port = VAR_3->args[0];

 return VAR_5;
}
