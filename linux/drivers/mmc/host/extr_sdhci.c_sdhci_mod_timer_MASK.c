
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int timer; int data_timer; } ;
struct mmc_request {int cmd; } ;


 int FUNC_0 (int *,unsigned long) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct sdhci_host *VAR_0, struct mmc_request *VAR_1,
       unsigned long VAR_2)
{
 if (FUNC_1(VAR_1->cmd))
  FUNC_0(&VAR_0->data_timer, VAR_2);
 else
  FUNC_0(&VAR_0->timer, VAR_2);
}
