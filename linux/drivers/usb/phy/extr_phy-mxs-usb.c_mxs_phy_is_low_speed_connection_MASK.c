
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_phy {int port_id; int regmap_anatop; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,unsigned int,unsigned int*) ;

__attribute__((used)) static bool FUNC_1(struct mxs_phy *VAR_4)
{
 unsigned int VAR_5;

 unsigned int VAR_6 = VAR_3,
       VAR_7 = VAR_2;
 unsigned int VAR_8 = VAR_0;


 if (!VAR_4->regmap_anatop)
  return 0;

 if (VAR_4->port_id == 0)
  VAR_8 = VAR_0;
 else if (VAR_4->port_id == 1)
  VAR_8 = VAR_1;

 FUNC_0(VAR_4->regmap_anatop, VAR_8, &VAR_5);

 if ((VAR_5 & (VAR_6 | VAR_7)) == VAR_7)
  return 1;
 else
  return 0;
}
