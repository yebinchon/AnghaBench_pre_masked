
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hsmmc_host {int flags; int irq_lock; int dev; int base; TYPE_1__* mmc; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct device*,char*) ;
 struct omap_hsmmc_host* FUNC_2 (struct device*) ;
 int FUNC_3 (struct omap_hsmmc_host*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_7)
{
 struct omap_hsmmc_host *VAR_8;
 unsigned long VAR_9;

 VAR_8 = FUNC_2(VAR_7);
 FUNC_3(VAR_8);
 FUNC_1(VAR_7, "enabled\n");

 FUNC_5(&VAR_8->irq_lock, VAR_9);
 if ((VAR_8->mmc->caps & VAR_4) &&
     (VAR_8->flags & VAR_1)) {

  FUNC_4(VAR_8->dev);


  FUNC_0(VAR_8->base, VAR_5, VAR_6);
  FUNC_0(VAR_8->base, VAR_3, VAR_0);
  FUNC_0(VAR_8->base, VAR_2, VAR_0);
 } else {
  FUNC_4(VAR_8->dev);
 }
 FUNC_6(&VAR_8->irq_lock, VAR_9);
 return 0;
}
