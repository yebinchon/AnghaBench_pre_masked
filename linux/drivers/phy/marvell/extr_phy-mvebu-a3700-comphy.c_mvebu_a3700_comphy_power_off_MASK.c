
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct mvebu_a3700_comphy_lane {int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 struct mvebu_a3700_comphy_lane* FUNC_1 (struct phy*) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_1)
{
 struct mvebu_a3700_comphy_lane *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_0, VAR_2->id, 0);
}
