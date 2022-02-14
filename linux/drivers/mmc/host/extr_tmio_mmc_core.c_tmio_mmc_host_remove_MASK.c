
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmio_mmc_host {scalar_t__ native_hotplug; int delayed_reset_work; int done; TYPE_1__* pdata; struct mmc_host* mmc; struct platform_device* pdev; } ;
struct platform_device {int dev; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct tmio_mmc_host*,int ,int) ;
 int FUNC_10 (struct tmio_mmc_host*) ;

void FUNC_11(struct tmio_mmc_host *VAR_2)
{
 struct platform_device *VAR_3 = VAR_2->pdev;
 struct mmc_host *VAR_4 = VAR_2->mmc;

 FUNC_6(&VAR_3->dev);

 if (VAR_2->pdata->flags & VAR_1)
  FUNC_9(VAR_2, VAR_0, 0x0000);

 FUNC_2(&VAR_3->dev);

 FUNC_3(VAR_4);
 FUNC_1(&VAR_2->done);
 FUNC_0(&VAR_2->delayed_reset_work);
 FUNC_10(VAR_2);

 FUNC_5(&VAR_3->dev);
 if (VAR_2->native_hotplug)
  FUNC_7(&VAR_3->dev);
 FUNC_8(&VAR_3->dev);
 FUNC_4(&VAR_3->dev);
}
