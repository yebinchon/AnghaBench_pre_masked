
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {void* dma_tx; void* dma_rx; } ;
struct pic32_spi {int flags; struct spi_master* master; } ;
struct device {int dummy; } ;
typedef int dma_cap_mask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int ,int *,int *,struct device*,char*) ;
 scalar_t__ FUNC_5 (struct pic32_spi*,int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct pic32_spi *VAR_3, struct device *VAR_4)
{
 struct spi_master *VAR_5 = VAR_3->master;
 dma_cap_mask_t VAR_6;

 FUNC_2(VAR_6);
 FUNC_1(VAR_0, VAR_6);

 VAR_5->dma_rx = FUNC_4(VAR_6, ((void*)0), ((void*)0),
         VAR_4, "spi-rx");
 if (!VAR_5->dma_rx) {
  FUNC_0(VAR_4, "RX channel not found.\n");
  goto out_err;
 }

 VAR_5->dma_tx = FUNC_4(VAR_6, ((void*)0), ((void*)0),
         VAR_4, "spi-tx");
 if (!VAR_5->dma_tx) {
  FUNC_0(VAR_4, "TX channel not found.\n");
  goto out_err;
 }

 if (FUNC_5(VAR_3, VAR_1))
  goto out_err;


 FUNC_6(VAR_2, &VAR_3->flags);

 return;

out_err:
 if (VAR_5->dma_rx)
  FUNC_3(VAR_5->dma_rx);

 if (VAR_5->dma_tx)
  FUNC_3(VAR_5->dma_tx);
}
