
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_rpmb_data {int dev; int chrdev; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mmc_rpmb_data *VAR_0)

{
 FUNC_0(&VAR_0->chrdev, &VAR_0->dev);
 FUNC_1(&VAR_0->dev);
}
