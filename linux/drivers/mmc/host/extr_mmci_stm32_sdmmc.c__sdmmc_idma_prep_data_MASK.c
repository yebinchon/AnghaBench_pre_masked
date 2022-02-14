
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmci_host {int mmc; } ;
struct mmc_data {int sg_len; int sg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mmc_data*) ;

__attribute__((used)) static int FUNC_4(struct mmci_host *VAR_1,
     struct mmc_data *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(FUNC_2(VAR_1->mmc),
       VAR_2->sg,
       VAR_2->sg_len,
       FUNC_3(VAR_2));

 if (!VAR_3) {
  FUNC_0(FUNC_2(VAR_1->mmc), "dma_map_sg failed\n");
  return -VAR_0;
 }

 return 0;
}
