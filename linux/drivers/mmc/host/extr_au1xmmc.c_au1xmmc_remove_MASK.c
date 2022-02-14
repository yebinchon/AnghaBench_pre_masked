
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct au1xmmc_host {int flags; TYPE_2__* mmc; int ioarea; scalar_t__ iobase; int irq; int clk; int finish_task; int data_task; TYPE_1__* platdata; } ;
struct TYPE_6__ {int caps; } ;
struct TYPE_5__ {int (* cd_setup ) (TYPE_2__*,int ) ;scalar_t__ led; } ;


 int FUNC_0 (struct au1xmmc_host*) ;
 int FUNC_1 (struct au1xmmc_host*) ;
 int FUNC_2 (struct au1xmmc_host*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct au1xmmc_host*) ;
 int FUNC_5 (struct au1xmmc_host*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct au1xmmc_host*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 struct au1xmmc_host* FUNC_14 (struct platform_device*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (TYPE_2__*,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 () ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_2)
{
 struct au1xmmc_host *VAR_3 = FUNC_14(VAR_2);

 if (VAR_3) {
  FUNC_13(VAR_3->mmc);






  if (VAR_3->platdata && VAR_3->platdata->cd_setup &&
      !(VAR_3->mmc->caps & VAR_1))
   VAR_3->platdata->cd_setup(VAR_3->mmc, 0);

  FUNC_3(0, FUNC_2(VAR_3));
  FUNC_3(0, FUNC_0(VAR_3));
  FUNC_3(0, FUNC_1(VAR_3));
  FUNC_18();

  FUNC_17(&VAR_3->data_task);
  FUNC_17(&VAR_3->finish_task);

  if (VAR_3->flags & VAR_0)
   FUNC_4(VAR_3);

  FUNC_5(VAR_3, 0);

  FUNC_6(VAR_3->clk);
  FUNC_7(VAR_3->clk);

  FUNC_8(VAR_3->irq, VAR_3);
  FUNC_9((void *)VAR_3->iobase);
  FUNC_15(VAR_3->ioarea);
  FUNC_10(VAR_3->ioarea);

  FUNC_12(VAR_3->mmc);
 }
 return 0;
}
