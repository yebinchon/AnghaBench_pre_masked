
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct omap_hsmmc_host {TYPE_2__* mrq; scalar_t__ data; TYPE_1__* cmd; } ;
struct TYPE_6__ {int error; } ;
struct TYPE_5__ {TYPE_3__* cmd; } ;
struct TYPE_4__ {int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct omap_hsmmc_host*,int) ;
 int FUNC_1 (struct omap_hsmmc_host*,int ) ;

__attribute__((used)) static void FUNC_2(struct omap_hsmmc_host *VAR_2,
     int VAR_3, int VAR_4)
{
 if (VAR_4) {
  FUNC_1(VAR_2, VAR_0);
  if (VAR_2->cmd)
   VAR_2->cmd->error = VAR_3;
 }

 if (VAR_2->data) {
  FUNC_1(VAR_2, VAR_1);
  FUNC_0(VAR_2, VAR_3);
 } else if (VAR_2->mrq && VAR_2->mrq->cmd)
  VAR_2->mrq->cmd->error = VAR_3;
}
