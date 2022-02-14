
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct mvebu_comphy_lane {int mode; int submode; int port; int id; } ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int,int) ;
 struct mvebu_comphy_lane* FUNC_1 (struct phy*) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_4,
     enum phy_mode VAR_5, int VAR_6)
{
 struct mvebu_comphy_lane *VAR_7 = FUNC_1(VAR_4);

 if (VAR_6 == VAR_1)
  VAR_6 = VAR_2;

 if (FUNC_0(VAR_7->id, VAR_7->port, VAR_5, VAR_6) < 0)
  return -VAR_0;

 VAR_7->mode = VAR_5;
 VAR_7->submode = VAR_6;


 if (VAR_5 == VAR_3 && !VAR_7->submode)
  VAR_7->submode = 1;

 return 0;
}
