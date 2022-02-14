
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hsmmc_host {struct mmc_host* mmc; } ;
struct TYPE_2__ {int vmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct omap_hsmmc_host*,int) ;

__attribute__((used)) static int FUNC_4(struct omap_hsmmc_host *VAR_0, int VAR_1)
{
 struct mmc_host *VAR_2 = VAR_0->mmc;
 int VAR_3 = 0;





 if (FUNC_0(VAR_2->supply.vmmc))
  return 0;

 VAR_3 = FUNC_3(VAR_0, 0);
 if (VAR_3)
  return VAR_3;
 if (VAR_1) {
  VAR_3 = FUNC_2(VAR_2);
  if (VAR_3)
   return VAR_3;

  VAR_3 = FUNC_3(VAR_0, 1);
  if (VAR_3)
   goto err_set_voltage;
 } else {
  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3)
   return VAR_3;
 }

 return 0;

err_set_voltage:
 FUNC_1(VAR_2);

 return VAR_3;
}
