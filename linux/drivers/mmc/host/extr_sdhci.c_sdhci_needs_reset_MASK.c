
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sdhci_host {int flags; int quirks; } ;
struct mmc_request {TYPE_2__* data; TYPE_4__* sbc; TYPE_3__* cmd; } ;
struct TYPE_8__ {scalar_t__ error; } ;
struct TYPE_7__ {scalar_t__ error; } ;
struct TYPE_6__ {TYPE_1__* stop; } ;
struct TYPE_5__ {scalar_t__ error; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct sdhci_host *VAR_2, struct mmc_request *VAR_3)
{
 return (!(VAR_2->flags & VAR_0) &&
  ((VAR_3->cmd && VAR_3->cmd->error) ||
   (VAR_3->sbc && VAR_3->sbc->error) ||
   (VAR_3->data && VAR_3->data->stop && VAR_3->data->stop->error) ||
   (VAR_2->quirks & VAR_1)));
}
