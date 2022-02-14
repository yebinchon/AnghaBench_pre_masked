
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_rpmb_data {int id; } ;
struct device {int dummy; } ;


 struct mmc_rpmb_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct mmc_rpmb_data*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1)
{
 struct mmc_rpmb_data *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(&VAR_0, VAR_2->id);
 FUNC_2(VAR_2);
}
