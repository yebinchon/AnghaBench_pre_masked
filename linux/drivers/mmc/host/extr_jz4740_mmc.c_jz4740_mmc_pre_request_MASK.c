
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {struct mmc_data* data; } ;
struct mmc_host {int dummy; } ;
struct mmc_data {void* host_cookie; } ;
struct jz4740_mmc_host {int use_dma; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (struct jz4740_mmc_host*,struct mmc_data*,int ) ;
 struct jz4740_mmc_host* FUNC_1 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_2(struct mmc_host *VAR_2,
       struct mmc_request *VAR_3)
{
 struct jz4740_mmc_host *VAR_4 = FUNC_1(VAR_2);
 struct mmc_data *VAR_5 = VAR_3->data;

 if (!VAR_4->use_dma)
  return;

 VAR_5->host_cookie = VAR_1;
 if (FUNC_0(VAR_4, VAR_5, VAR_0) < 0)
  VAR_5->host_cookie = VAR_1;
}
