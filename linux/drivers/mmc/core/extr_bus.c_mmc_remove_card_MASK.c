
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mmc_host {int cqe_enabled; TYPE_1__* cqe_ops; } ;
struct TYPE_5__ {int of_node; } ;
struct mmc_card {TYPE_2__ dev; int rca; struct mmc_host* host; } ;
struct TYPE_4__ {int (* cqe_disable ) (struct mmc_host*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (struct mmc_card*) ;
 scalar_t__ FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_card*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,...) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct mmc_host*) ;

void FUNC_9(struct mmc_card *VAR_0)
{
 struct mmc_host *VAR_1 = VAR_0->host;





 if (VAR_1->cqe_enabled) {
  VAR_1->cqe_ops->cqe_disable(VAR_1);
  VAR_1->cqe_enabled = 0;
 }

 if (FUNC_1(VAR_0)) {
  if (FUNC_2(VAR_0->host)) {
   FUNC_6("%s: SPI card removed\n",
    FUNC_3(VAR_0->host));
  } else {
   FUNC_6("%s: card %04x removed\n",
    FUNC_3(VAR_0->host), VAR_0->rca);
  }
  FUNC_0(&VAR_0->dev);
  FUNC_5(VAR_0->dev.of_node);
 }

 FUNC_7(&VAR_0->dev);
}
