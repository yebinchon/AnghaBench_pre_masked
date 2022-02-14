
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct sdhci_host {int lock; TYPE_1__* cmd; int mmc; } ;
struct TYPE_2__ {int mrq; int error; } ;


 int VAR_0 ;
 struct sdhci_host* FUNC_0 (struct sdhci_host*,struct timer_list*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (struct sdhci_host*,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_2)
{
 struct sdhci_host *VAR_3;
 unsigned long VAR_4;

 VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);

 FUNC_6(&VAR_3->lock, VAR_4);

 if (VAR_3->cmd && !FUNC_3(VAR_3->cmd)) {
  FUNC_2("%s: Timeout waiting for hardware cmd interrupt.\n",
         FUNC_1(VAR_3->mmc));
  FUNC_4(VAR_3);

  VAR_3->cmd->error = -VAR_0;
  FUNC_5(VAR_3, VAR_3->cmd->mrq);
 }

 FUNC_7(&VAR_3->lock, VAR_4);
}
