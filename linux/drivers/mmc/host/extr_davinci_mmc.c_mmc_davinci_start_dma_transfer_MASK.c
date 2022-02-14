
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_davinci_host {int sg_len; int do_dma; int mmc; } ;
struct mmc_data {int sg_len; scalar_t__ sg; } ;


 int FUNC_0 (int ,scalar_t__,int ,int ) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 int FUNC_2 (struct mmc_davinci_host*,struct mmc_data*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mmc_data*) ;
 int VAR_0 ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct mmc_davinci_host *VAR_1,
  struct mmc_data *VAR_2)
{
 int VAR_3;
 int VAR_4 = VAR_0 - 1;
 int VAR_5 = 0;

 VAR_1->sg_len = FUNC_0(FUNC_3(VAR_1->mmc), VAR_2->sg, VAR_2->sg_len,
      FUNC_4(VAR_2));


 for (VAR_3 = 0; VAR_3 < VAR_1->sg_len; VAR_3++) {
  if (FUNC_5(VAR_2->sg + VAR_3) & VAR_4) {
   FUNC_1(FUNC_3(VAR_1->mmc),
         VAR_2->sg, VAR_2->sg_len,
         FUNC_4(VAR_2));
   return -1;
  }
 }

 VAR_1->do_dma = 1;
 VAR_5 = FUNC_2(VAR_1, VAR_2);

 return VAR_5;
}
