
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mmc_command {scalar_t__ opcode; int flags; void** resp; int error; } ;
struct device {int dummy; } ;
struct bcm2835_host {scalar_t__ data_complete; scalar_t__ data; struct mmc_command* cmd; TYPE_2__* mrq; int use_busy; scalar_t__ dma_desc; scalar_t__ ioaddr; TYPE_1__* pdev; } ;
struct TYPE_4__ {struct mmc_command* stop; int cmd; struct mmc_command* sbc; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (struct bcm2835_host*) ;
 int FUNC_1 (struct bcm2835_host*) ;
 int FUNC_2 (struct bcm2835_host*,int) ;
 scalar_t__ FUNC_3 (struct bcm2835_host*,int ) ;
 int FUNC_4 (struct bcm2835_host*) ;
 int FUNC_5 (struct bcm2835_host*) ;
 int FUNC_6 (struct device*,char*,...) ;
 void* FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct bcm2835_host *VAR_18)
{
 struct device *VAR_19 = &VAR_18->pdev->dev;
 struct mmc_command *VAR_20 = VAR_18->cmd;
 u32 VAR_21;

 VAR_21 = FUNC_2(VAR_18, 100);


 if (VAR_21 & VAR_7) {
  FUNC_6(VAR_19, "command never completed.\n");
  FUNC_0(VAR_18);
  VAR_18->cmd->error = -VAR_1;
  FUNC_1(VAR_18);
  return;
 } else if (VAR_21 & VAR_6) {
  u32 VAR_22 = FUNC_7(VAR_18->ioaddr + VAR_13);


  FUNC_8(VAR_16, VAR_18->ioaddr + VAR_13);

  if (!(VAR_22 & VAR_15) ||
      (VAR_18->cmd->opcode != VAR_5)) {
   u32 VAR_23, VAR_24;

   if (VAR_22 & VAR_14) {
    VAR_18->cmd->error = -VAR_2;
   } else {
    FUNC_6(VAR_19, "unexpected command %d error\n",
     VAR_18->cmd->opcode);
    FUNC_0(VAR_18);
    VAR_18->cmd->error = -VAR_0;
   }
   VAR_23 = FUNC_7(VAR_18->ioaddr + VAR_8);
   VAR_24 = VAR_23 & VAR_10;
   if (VAR_24 == VAR_11 ||
       VAR_24 == VAR_12)

    FUNC_8(VAR_23 | VAR_9,
           VAR_18->ioaddr + VAR_8);
   FUNC_1(VAR_18);
   return;
  }
 }

 if (VAR_20->flags & VAR_4) {
  if (VAR_20->flags & VAR_3) {
   int VAR_25;

   for (VAR_25 = 0; VAR_25 < 4; VAR_25++) {
    VAR_20->resp[3 - VAR_25] =
     FUNC_7(VAR_18->ioaddr + VAR_17 + VAR_25 * 4);
   }
  } else {
   VAR_20->resp[0] = FUNC_7(VAR_18->ioaddr + VAR_17);
  }
 }

 if (VAR_20 == VAR_18->mrq->sbc) {

  VAR_18->cmd = ((void*)0);
  if (FUNC_3(VAR_18, VAR_18->mrq->cmd)) {
   if (VAR_18->data && VAR_18->dma_desc)



    FUNC_4(VAR_18);

   if (!VAR_18->use_busy)
    FUNC_9(VAR_18);
  }
 } else if (VAR_20 == VAR_18->mrq->stop) {

  FUNC_1(VAR_18);
 } else {

  VAR_18->cmd = ((void*)0);
  if (!VAR_18->data)
   FUNC_1(VAR_18);
  else if (VAR_18->data_complete)
   FUNC_5(VAR_18);
 }
}
