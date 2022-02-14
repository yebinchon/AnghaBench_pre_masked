
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfp_pf {int hwmon_dev; TYPE_2__* pdev; int cpp; TYPE_1__* nspi; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int sensor_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,struct nfp_pf*,int *,int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(struct nfp_pf *VAR_2)
{
 if (!FUNC_0(VAR_0))
  return 0;

 if (!VAR_2->nspi) {
  FUNC_4(VAR_2->cpp, "not registering HWMON (no NSP info)\n");
  return 0;
 }
 if (!VAR_2->nspi->sensor_mask) {
  FUNC_3(VAR_2->cpp,
    "not registering HWMON (NSP doesn't report sensors)\n");
  return 0;
 }

 VAR_2->hwmon_dev = FUNC_2(&VAR_2->pdev->dev, "nfp",
       VAR_2, &VAR_1,
       ((void*)0));
 return FUNC_1(VAR_2->hwmon_dev);
}
