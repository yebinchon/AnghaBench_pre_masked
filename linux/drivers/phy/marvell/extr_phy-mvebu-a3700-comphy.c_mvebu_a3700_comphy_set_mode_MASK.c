
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct mvebu_a3700_comphy_lane {int mode; int submode; int dev; int port; int id; } ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int,int) ;
 struct mvebu_a3700_comphy_lane* FUNC_2 (struct phy*) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_2, enum phy_mode VAR_3,
           int VAR_4)
{
 struct mvebu_a3700_comphy_lane *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;

 if (VAR_4 == VAR_0)
  VAR_4 = VAR_1;

 VAR_6 = FUNC_1(VAR_5->id, VAR_5->port, VAR_3,
       VAR_4);
 if (VAR_6 < 0) {
  FUNC_0(VAR_5->dev, "invalid COMPHY mode\n");
  return VAR_6;
 }


 VAR_5->mode = VAR_3;
 VAR_5->submode = VAR_4;

 return 0;
}
