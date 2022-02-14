
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct phy *VAR_0)
{
 if (!VAR_0)
  return;

 if (!FUNC_1(&VAR_0->dev))
  return;

 FUNC_0(&VAR_0->dev);
}
