
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_lookup {char const* dev_id; char const* con_id; int node; struct phy* phy; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct phy_lookup* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_4(struct phy *VAR_5, const char *VAR_6, const char *VAR_7)
{
 struct phy_lookup *VAR_8;

 if (!VAR_5 || !VAR_7 || !VAR_6)
  return -VAR_0;

 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->dev_id = VAR_7;
 VAR_8->con_id = VAR_6;
 VAR_8->phy = VAR_5;

 FUNC_2(&VAR_3);
 FUNC_1(&VAR_8->node, &VAR_4);
 FUNC_3(&VAR_3);

 return 0;
}
