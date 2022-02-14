
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_phy {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct sas_phy *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(&VAR_0->dev);
 if (!VAR_1) {
  FUNC_1(&VAR_0->dev);
  FUNC_2(&VAR_0->dev);
 }

 return VAR_1;
}
