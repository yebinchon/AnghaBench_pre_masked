
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hsmmc_host {int mmc; scalar_t__ use_dma; int base; int * data; } ;
struct mmc_request {TYPE_1__* cmd; int * data; } ;
struct TYPE_2__ {int flags; unsigned long long busy_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct omap_hsmmc_host*,struct mmc_request*) ;
 int FUNC_4 (struct omap_hsmmc_host*,unsigned long long,int ) ;

__attribute__((used)) static int
FUNC_5(struct omap_hsmmc_host *VAR_3, struct mmc_request *VAR_4)
{
 int VAR_5;
 unsigned long long VAR_6;

 VAR_3->data = VAR_4->data;

 if (VAR_4->data == ((void*)0)) {
  FUNC_0(VAR_3->base, VAR_0, 0);
  if (VAR_4->cmd->flags & VAR_1) {
   VAR_6 = VAR_4->cmd->busy_timeout * VAR_2;





   if (!VAR_6)
    VAR_6 = 100000000U;

   FUNC_4(VAR_3, VAR_6, 0);
  }
  return 0;
 }

 if (VAR_3->use_dma) {
  VAR_5 = FUNC_3(VAR_3, VAR_4);
  if (VAR_5 != 0) {
   FUNC_1(FUNC_2(VAR_3->mmc), "MMC start dma failure\n");
   return VAR_5;
  }
 }
 return 0;
}
