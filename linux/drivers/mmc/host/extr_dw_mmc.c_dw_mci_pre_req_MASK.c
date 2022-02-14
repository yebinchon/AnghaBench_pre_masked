
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_request {struct mmc_data* data; } ;
struct mmc_host {int dummy; } ;
struct mmc_data {void* host_cookie; } ;
struct dw_mci_slot {TYPE_1__* host; } ;
struct TYPE_2__ {int use_dma; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,struct mmc_data*,int ) ;
 struct dw_mci_slot* FUNC_1 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_2(struct mmc_host *VAR_2,
      struct mmc_request *VAR_3)
{
 struct dw_mci_slot *VAR_4 = FUNC_1(VAR_2);
 struct mmc_data *VAR_5 = VAR_3->data;

 if (!VAR_4->host->use_dma || !VAR_5)
  return;


 VAR_5->host_cookie = VAR_1;

 if (FUNC_0(VAR_4->host, VAR_3->data,
    VAR_0) < 0)
  VAR_5->host_cookie = VAR_1;
}
