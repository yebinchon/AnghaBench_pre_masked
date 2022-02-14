
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hsmmc_host {int flags; int irq_lock; int base; TYPE_1__* mmc; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int caps; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct device*,char*) ;
 struct omap_hsmmc_host* FUNC_4 (struct device*) ;
 int FUNC_5 (struct omap_hsmmc_host*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_9)
{
 struct omap_hsmmc_host *VAR_10;
 unsigned long VAR_11;
 int VAR_12 = 0;

 VAR_10 = FUNC_4(VAR_9);
 FUNC_5(VAR_10);
 FUNC_3(VAR_9, "disabled\n");

 FUNC_8(&VAR_10->irq_lock, VAR_11);
 if ((VAR_10->mmc->caps & VAR_5) &&
     (VAR_10->flags & VAR_2)) {

  FUNC_2(VAR_10->base, VAR_4, 0);
  FUNC_2(VAR_10->base, VAR_3, 0);

  if (!(FUNC_1(VAR_10->base, VAR_6) & FUNC_0(1))) {





   FUNC_3(VAR_9, "pending sdio irq, abort suspend\n");
   FUNC_2(VAR_10->base, VAR_7, VAR_8);
   FUNC_2(VAR_10->base, VAR_4, VAR_0);
   FUNC_2(VAR_10->base, VAR_3, VAR_0);
   FUNC_7(VAR_9);
   VAR_12 = -VAR_1;
   goto abort;
  }

  FUNC_6(VAR_9);
 } else {
  FUNC_6(VAR_9);
 }

abort:
 FUNC_9(&VAR_10->irq_lock, VAR_11);
 return VAR_12;
}
