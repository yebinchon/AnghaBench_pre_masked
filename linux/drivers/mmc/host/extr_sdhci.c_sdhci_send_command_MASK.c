
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_host {int quirks2; scalar_t__ data_timeout; int mmc; struct mmc_command* data_cmd; struct mmc_command* cmd; } ;
struct mmc_command {scalar_t__ opcode; int flags; int busy_timeout; TYPE_2__* mrq; scalar_t__ data; int error; int arg; } ;
struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {struct mmc_command* stop; } ;


 unsigned long FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (struct mmc_command*) ;
 unsigned long VAR_24 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (struct mmc_command*) ;
 int FUNC_8 (struct sdhci_host*) ;
 int FUNC_9 (struct sdhci_host*,TYPE_2__*) ;
 int FUNC_10 (struct sdhci_host*,TYPE_2__*,unsigned long) ;
 int FUNC_11 (struct sdhci_host*,struct mmc_command*) ;
 int FUNC_12 (struct sdhci_host*,int ) ;
 int FUNC_13 (struct sdhci_host*,struct mmc_command*) ;
 int FUNC_14 (struct sdhci_host*,int ,int ) ;
 int FUNC_15 (struct sdhci_host*,int ,int ) ;

void FUNC_16(struct sdhci_host *VAR_25, struct mmc_command *VAR_26)
{
 int VAR_27;
 u32 VAR_28;
 unsigned long VAR_29;

 FUNC_2(VAR_25->cmd);


 VAR_26->error = 0;

 if ((VAR_25->quirks2 & VAR_23) &&
     VAR_26->opcode == VAR_10)
  VAR_26->flags |= VAR_4;


 VAR_29 = 10;

 VAR_28 = VAR_15;
 if (FUNC_7(VAR_26))
  VAR_28 |= VAR_21;



 if (VAR_26->mrq->data && (VAR_26 == VAR_26->mrq->data->stop))
  VAR_28 &= ~VAR_21;

 while (FUNC_12(VAR_25, VAR_22) & VAR_28) {
  if (VAR_29 == 0) {
   FUNC_6("%s: Controller never released inhibit bit(s).\n",
          FUNC_4(VAR_25->mmc));
   FUNC_8(VAR_25);
   VAR_26->error = -VAR_1;
   FUNC_9(VAR_25, VAR_26->mrq);
   return;
  }
  VAR_29--;
  FUNC_3(1);
 }

 VAR_25->cmd = VAR_26;
 if (FUNC_7(VAR_26)) {
  FUNC_2(VAR_25->data_cmd);
  VAR_25->data_cmd = VAR_26;
 }

 FUNC_11(VAR_25, VAR_26);

 FUNC_14(VAR_25, VAR_26->arg, VAR_11);

 FUNC_13(VAR_25, VAR_26);

 if ((VAR_26->flags & VAR_3) && (VAR_26->flags & VAR_4)) {
  FUNC_6("%s: Unsupported response type!\n",
   FUNC_4(VAR_25->mmc));
  VAR_26->error = -VAR_0;
  FUNC_9(VAR_25, VAR_26->mrq);
  return;
 }

 if (!(VAR_26->flags & VAR_7))
  VAR_27 = VAR_17;
 else if (VAR_26->flags & VAR_3)
  VAR_27 = VAR_16;
 else if (VAR_26->flags & VAR_4)
  VAR_27 = VAR_19;
 else
  VAR_27 = VAR_18;

 if (VAR_26->flags & VAR_5)
  VAR_27 |= VAR_12;
 if (VAR_26->flags & VAR_6)
  VAR_27 |= VAR_14;


 if (VAR_26->data || VAR_26->opcode == VAR_8 ||
     VAR_26->opcode == VAR_9)
  VAR_27 |= VAR_13;

 VAR_29 = VAR_24;
 if (VAR_25->data_timeout)
  VAR_29 += FUNC_5(VAR_25->data_timeout);
 else if (!VAR_26->data && VAR_26->busy_timeout > 9000)
  VAR_29 += FUNC_0(VAR_26->busy_timeout, 1000) * VAR_2 + VAR_2;
 else
  VAR_29 += 10 * VAR_2;
 FUNC_10(VAR_25, VAR_26->mrq, VAR_29);

 FUNC_15(VAR_25, FUNC_1(VAR_26->opcode, VAR_27), VAR_20);
}
