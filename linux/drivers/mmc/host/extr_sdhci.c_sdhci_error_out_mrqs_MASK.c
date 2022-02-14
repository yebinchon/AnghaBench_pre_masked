
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdhci_host {TYPE_2__* cmd; TYPE_1__* data_cmd; } ;
struct TYPE_4__ {int error; int mrq; } ;
struct TYPE_3__ {int error; int mrq; } ;


 int FUNC_0 (struct sdhci_host*,int ) ;

__attribute__((used)) static void FUNC_1(struct sdhci_host *VAR_0, int VAR_1)
{
 if (VAR_0->data_cmd) {
  VAR_0->data_cmd->error = VAR_1;
  FUNC_0(VAR_0, VAR_0->data_cmd->mrq);
 }

 if (VAR_0->cmd) {
  VAR_0->cmd->error = VAR_1;
  FUNC_0(VAR_0, VAR_0->cmd->mrq);
 }
}
