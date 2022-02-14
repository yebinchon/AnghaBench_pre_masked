
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_sd_priv {int dma_dir; } ;
struct tmio_mmc_host {int sg_len; int dma_on; scalar_t__ ctl; int mmc; int chan_rx; struct scatterlist* sg_ptr; } ;
struct scatterlist {int offset; } ;
struct mmc_data {int flags; int sg; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,struct scatterlist*,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct tmio_mmc_host*,int ) ;
 struct uniphier_sd_priv* FUNC_8 (struct tmio_mmc_host*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct tmio_mmc_host *VAR_12,
        struct mmc_data *VAR_13)
{
 struct uniphier_sd_priv *VAR_14 = FUNC_8(VAR_12);
 struct scatterlist *VAR_15 = VAR_12->sg_ptr;
 dma_addr_t VAR_16;
 unsigned int VAR_17;
 u32 VAR_18;
 int VAR_19;

 if ((VAR_13->flags & VAR_2) && !VAR_12->chan_rx)
  goto force_pio;

 if (FUNC_2(VAR_12->sg_len != 1))
  goto force_pio;

 if (!FUNC_1(VAR_15->offset, 8))
  goto force_pio;

 if (VAR_13->flags & VAR_2) {
  VAR_14->dma_dir = VAR_0;
  VAR_17 = VAR_7;
 } else {
  VAR_14->dma_dir = VAR_1;
  VAR_17 = VAR_9;
 }

 VAR_19 = FUNC_3(FUNC_5(VAR_12->mmc), VAR_15, 1, VAR_14->dma_dir);
 if (VAR_19 == 0)
  goto force_pio;

 VAR_18 = FUNC_0(VAR_8, VAR_17);
 VAR_18 |= FUNC_0(VAR_11,
          VAR_10);
 VAR_18 |= VAR_6;

 FUNC_10(VAR_18, VAR_12->ctl + VAR_5);

 VAR_16 = FUNC_6(VAR_13->sg);
 FUNC_10(FUNC_4(VAR_16), VAR_12->ctl + VAR_4);
 FUNC_10(FUNC_9(VAR_16), VAR_12->ctl + VAR_3);

 VAR_12->dma_on = 1;

 return;
force_pio:
 FUNC_7(VAR_12, 0);
}
