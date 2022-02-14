
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmci_host {int mmc; } ;
struct mmc_data {int sg_len; int sg; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mmc_data*) ;

__attribute__((used)) static void FUNC_3(struct mmci_host *VAR_0,
       struct mmc_data *VAR_1, int VAR_2)
{
 FUNC_0(FUNC_1(VAR_0->mmc), VAR_1->sg, VAR_1->sg_len,
       FUNC_2(VAR_1));
}
