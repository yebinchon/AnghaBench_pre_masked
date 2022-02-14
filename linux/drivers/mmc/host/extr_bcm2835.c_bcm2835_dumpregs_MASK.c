
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmc_request {int stop; TYPE_2__* data; int cmd; int sbc; } ;
struct device {int dummy; } ;
struct bcm2835_host {scalar_t__ ioaddr; TYPE_1__* pdev; struct mmc_request* mrq; } ;
struct TYPE_4__ {int error; int blksz; int blocks; } ;
struct TYPE_3__ {struct device dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct bcm2835_host*,int ,char*) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct bcm2835_host *VAR_14)
{
 struct mmc_request *VAR_15 = VAR_14->mrq;
 struct device *VAR_16 = &VAR_14->pdev->dev;

 if (VAR_15) {
  FUNC_0(VAR_14, VAR_15->sbc, "sbc");
  FUNC_0(VAR_14, VAR_15->cmd, "cmd");
  if (VAR_15->data) {
   FUNC_1(VAR_16, "data blocks %x blksz %x - err %d\n",
    VAR_15->data->blocks,
    VAR_15->data->blksz,
    VAR_15->data->error);
  }
  FUNC_0(VAR_14, VAR_15->stop, "stop");
 }

 FUNC_1(VAR_16, "=========== REGISTER DUMP ===========\n");
 FUNC_1(VAR_16, "SDCMD  0x%08x\n", FUNC_2(VAR_14->ioaddr + VAR_2));
 FUNC_1(VAR_16, "SDARG  0x%08x\n", FUNC_2(VAR_14->ioaddr + VAR_0));
 FUNC_1(VAR_16, "SDTOUT 0x%08x\n", FUNC_2(VAR_14->ioaddr + VAR_12));
 FUNC_1(VAR_16, "SDCDIV 0x%08x\n", FUNC_2(VAR_14->ioaddr + VAR_1));
 FUNC_1(VAR_16, "SDRSP0 0x%08x\n", FUNC_2(VAR_14->ioaddr + VAR_8));
 FUNC_1(VAR_16, "SDRSP1 0x%08x\n", FUNC_2(VAR_14->ioaddr + VAR_9));
 FUNC_1(VAR_16, "SDRSP2 0x%08x\n", FUNC_2(VAR_14->ioaddr + VAR_10));
 FUNC_1(VAR_16, "SDRSP3 0x%08x\n", FUNC_2(VAR_14->ioaddr + VAR_11));
 FUNC_1(VAR_16, "SDHSTS 0x%08x\n", FUNC_2(VAR_14->ioaddr + VAR_7));
 FUNC_1(VAR_16, "SDVDD  0x%08x\n", FUNC_2(VAR_14->ioaddr + VAR_13));
 FUNC_1(VAR_16, "SDEDM  0x%08x\n", FUNC_2(VAR_14->ioaddr + VAR_3));
 FUNC_1(VAR_16, "SDHCFG 0x%08x\n", FUNC_2(VAR_14->ioaddr + VAR_6));
 FUNC_1(VAR_16, "SDHBCT 0x%08x\n", FUNC_2(VAR_14->ioaddr + VAR_4));
 FUNC_1(VAR_16, "SDHBLC 0x%08x\n", FUNC_2(VAR_14->ioaddr + VAR_5));
 FUNC_1(VAR_16, "===========================================\n");
}
