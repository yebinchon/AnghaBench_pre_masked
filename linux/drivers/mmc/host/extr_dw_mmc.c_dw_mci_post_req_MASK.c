
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_request {struct mmc_data* data; } ;
struct mmc_host {int dummy; } ;
struct mmc_data {scalar_t__ host_cookie; int sg_len; int sg; } ;
struct dw_mci_slot {TYPE_1__* host; } ;
struct TYPE_2__ {int dev; int use_dma; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct mmc_data*) ;
 struct dw_mci_slot* FUNC_2 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_1,
       struct mmc_request *VAR_2,
       int VAR_3)
{
 struct dw_mci_slot *VAR_4 = FUNC_2(VAR_1);
 struct mmc_data *VAR_5 = VAR_2->data;

 if (!VAR_4->host->use_dma || !VAR_5)
  return;

 if (VAR_5->host_cookie != VAR_0)
  FUNC_0(VAR_4->host->dev,
        VAR_5->sg,
        VAR_5->sg_len,
        FUNC_1(VAR_5));
 VAR_5->host_cookie = VAR_0;
}
