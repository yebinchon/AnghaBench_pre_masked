
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc27xx_fgu_data {int init_cap; int dev; int init_clbcnt; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sc27xx_fgu_data*,int *) ;

__attribute__((used)) static void FUNC_2(struct sc27xx_fgu_data *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_0->init_cap = VAR_1;
 VAR_2 = FUNC_1(VAR_0, &VAR_0->init_clbcnt);
 if (VAR_2)
  FUNC_0(VAR_0->dev, "failed to get init coulomb counter\n");
}
