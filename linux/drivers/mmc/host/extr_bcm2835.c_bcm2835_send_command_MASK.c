
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mmc_command {int busy_timeout; int flags; int arg; int opcode; TYPE_2__* data; int error; } ;
struct device {int dummy; } ;
struct bcm2835_host {int use_busy; scalar_t__ ioaddr; struct mmc_command* cmd; int timeout_work; TYPE_1__* pdev; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {struct device dev; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct mmc_command*) ;
 int FUNC_2 (struct bcm2835_host*) ;
 int FUNC_3 (struct bcm2835_host*) ;
 int FUNC_4 (struct bcm2835_host*,struct mmc_command*) ;
 int FUNC_5 (struct bcm2835_host*,int) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static
bool FUNC_10(struct bcm2835_host *VAR_19, struct mmc_command *VAR_20)
{
 struct device *VAR_21 = &VAR_19->pdev->dev;
 u32 VAR_22, VAR_23;
 unsigned long VAR_24;

 FUNC_1(VAR_19->cmd);

 VAR_22 = FUNC_5(VAR_19, 100);
 if (VAR_22 & VAR_13) {
  FUNC_6(VAR_21, "previous command never completed.\n");
  FUNC_2(VAR_19);
  VAR_20->error = -VAR_0;
  FUNC_3(VAR_19);
  return 0;
 }

 if (!VAR_20->data && VAR_20->busy_timeout > 9000)
  VAR_24 = FUNC_0(VAR_20->busy_timeout, 1000) * VAR_2 + VAR_2;
 else
  VAR_24 = 10 * VAR_2;
 FUNC_8(&VAR_19->timeout_work, VAR_24);

 VAR_19->cmd = VAR_20;


 VAR_23 = FUNC_7(VAR_19->ioaddr + VAR_17);
 if (VAR_23 & VAR_18)
  FUNC_9(VAR_23, VAR_19->ioaddr + VAR_17);

 if ((VAR_20->flags & VAR_5) && (VAR_20->flags & VAR_6)) {
  FUNC_6(VAR_21, "unsupported response type!\n");
  VAR_20->error = -VAR_1;
  FUNC_3(VAR_19);
  return 0;
 }

 FUNC_4(VAR_19, VAR_20);

 FUNC_9(VAR_20->arg, VAR_19->ioaddr + VAR_8);

 VAR_22 = VAR_20->opcode & VAR_11;

 VAR_19->use_busy = 0;
 if (!(VAR_20->flags & VAR_7)) {
  VAR_22 |= VAR_14;
 } else {
  if (VAR_20->flags & VAR_5)
   VAR_22 |= VAR_12;
  if (VAR_20->flags & VAR_6) {
   VAR_22 |= VAR_10;
   VAR_19->use_busy = 1;
  }
 }

 if (VAR_20->data) {
  if (VAR_20->data->flags & VAR_4)
   VAR_22 |= VAR_16;
  if (VAR_20->data->flags & VAR_3)
   VAR_22 |= VAR_15;
 }

 FUNC_9(VAR_22 | VAR_13, VAR_19->ioaddr + VAR_9);

 return 1;
}
