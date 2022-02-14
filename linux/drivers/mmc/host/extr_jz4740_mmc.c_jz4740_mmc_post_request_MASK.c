
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {struct mmc_data* data; } ;
struct mmc_host {int dummy; } ;
struct mmc_data {scalar_t__ host_cookie; } ;
struct jz4740_mmc_host {int dummy; } ;
struct dma_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (struct jz4740_mmc_host*,struct mmc_data*) ;
 struct dma_chan* FUNC_2 (struct jz4740_mmc_host*,struct mmc_data*) ;
 struct jz4740_mmc_host* FUNC_3 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_4(struct mmc_host *VAR_1,
        struct mmc_request *VAR_2,
        int VAR_3)
{
 struct jz4740_mmc_host *VAR_4 = FUNC_3(VAR_1);
 struct mmc_data *VAR_5 = VAR_2->data;

 if (VAR_5 && VAR_5->host_cookie != VAR_0)
  FUNC_1(VAR_4, VAR_5);

 if (VAR_3) {
  struct dma_chan *VAR_6 = FUNC_2(VAR_4, VAR_5);

  FUNC_0(VAR_6);
 }
}
