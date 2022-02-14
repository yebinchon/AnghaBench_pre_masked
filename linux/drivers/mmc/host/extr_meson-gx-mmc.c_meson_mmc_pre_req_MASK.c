
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {struct mmc_data* data; } ;
struct mmc_host {int dummy; } ;
struct mmc_data {int sg_count; int sg_len; int sg; int host_cookie; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct mmc_data*) ;
 int FUNC_3 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_data*) ;

__attribute__((used)) static void FUNC_6(struct mmc_host *VAR_1, struct mmc_request *VAR_2)
{
 struct mmc_data *VAR_3 = VAR_2->data;

 if (!VAR_3)
  return;

 FUNC_3(VAR_1, VAR_2);
 VAR_3->host_cookie |= VAR_0;

 if (!FUNC_2(VAR_3))
  return;

 VAR_3->sg_count = FUNC_1(FUNC_4(VAR_1), VAR_3->sg, VAR_3->sg_len,
                                   FUNC_5(VAR_3));
 if (!VAR_3->sg_count)
  FUNC_0(FUNC_4(VAR_1), "dma_map_sg failed");
}
