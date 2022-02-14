
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct phy *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return 0;

 if (!FUNC_0(&VAR_2->dev))
  return -VAR_1;

 VAR_3 = FUNC_1(&VAR_2->dev);
 if (VAR_3 < 0 && VAR_3 != -VAR_0)
  FUNC_2(&VAR_2->dev);

 return VAR_3;
}
