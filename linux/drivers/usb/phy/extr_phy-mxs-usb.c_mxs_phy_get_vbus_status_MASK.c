
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_phy {int port_id; int regmap_anatop; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static bool FUNC_1(struct mxs_phy *VAR_3)
{
 unsigned int VAR_4 = 0;

 if (!VAR_3->regmap_anatop)
  return 0;

 if (VAR_3->port_id == 0)
  FUNC_0(VAR_3->regmap_anatop,
   VAR_0,
   &VAR_4);
 else if (VAR_3->port_id == 1)
  FUNC_0(VAR_3->regmap_anatop,
   VAR_1,
   &VAR_4);

 if (VAR_4 & VAR_2)
  return 1;
 else
  return 0;
}
