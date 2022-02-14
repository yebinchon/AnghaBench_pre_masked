
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct phy *VAR_1)
{
 if (!VAR_1)
  return 0;

 if (!FUNC_0(&VAR_1->dev))
  return -VAR_0;

 return FUNC_1(&VAR_1->dev);
}
