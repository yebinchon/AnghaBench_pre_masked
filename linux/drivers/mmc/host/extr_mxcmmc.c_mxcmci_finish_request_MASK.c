
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxcmci_host {int mmc; int * data; int * cmd; int * req; int lock; scalar_t__ use_sdio; int default_irq_mask; } ;
struct mmc_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct mmc_request*) ;
 int FUNC_1 (struct mxcmci_host*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct mxcmci_host *VAR_2,
  struct mmc_request *VAR_3)
{
 u32 VAR_4 = VAR_2->default_irq_mask;
 unsigned long VAR_5;

 FUNC_2(&VAR_2->lock, VAR_5);
 if (VAR_2->use_sdio)
  VAR_4 |= VAR_0;
 FUNC_1(VAR_2, VAR_4, VAR_1);
 FUNC_3(&VAR_2->lock, VAR_5);

 VAR_2->req = ((void*)0);
 VAR_2->cmd = ((void*)0);
 VAR_2->data = ((void*)0);

 FUNC_0(VAR_2->mmc, VAR_3);
}
