
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mmc_data {int flags; int * sg; int sg_len; } ;
struct cvm_mmc_host {scalar_t__ dma_base; scalar_t__ big_dma_addr; int dev; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct cvm_mmc_host*) ;
 scalar_t__ FUNC_2 (struct cvm_mmc_host*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 (struct mmc_data*) ;
 int FUNC_5 (char*,char*,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static u64 FUNC_9(struct cvm_mmc_host *VAR_6, struct mmc_data *VAR_7)
{
 u64 VAR_8, VAR_9;
 int VAR_10, VAR_11;

 VAR_10 = FUNC_3(VAR_6->dev, VAR_7->sg, VAR_7->sg_len,
      FUNC_4(VAR_7));
 if (!VAR_10)
  return 0;

 VAR_11 = (VAR_7->flags & VAR_5) ? 1 : 0;
 VAR_8 = FUNC_0(VAR_1, 1) |
    FUNC_0(VAR_3, VAR_11);



 VAR_8 |= FUNC_0(VAR_4,
         (FUNC_7(&VAR_7->sg[0]) / 8) - 1);

 VAR_9 = FUNC_6(&VAR_7->sg[0]);
 if (!VAR_6->big_dma_addr)
  VAR_8 |= FUNC_0(VAR_0, VAR_9);
 FUNC_8(VAR_8, VAR_6->dma_base + FUNC_2(VAR_6));

 FUNC_5("[%s] sg_dma_len: %u  total sg_elem: %d\n",
   (VAR_11) ? "W" : "R", FUNC_7(&VAR_7->sg[0]), VAR_10);

 if (VAR_6->big_dma_addr)
  FUNC_8(VAR_9, VAR_6->dma_base + FUNC_1(VAR_6));
 return VAR_9;
}
