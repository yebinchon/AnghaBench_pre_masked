
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct spi_device {int irq; int dev; } ;
struct ieee802154_hw {int flags; TYPE_3__* phy; scalar_t__ extra_tx_headroom; int * parent; struct adf7242_local* priv; } ;
struct TYPE_8__ {int len; int * rx_buf; int * tx_buf; } ;
struct adf7242_local {struct ieee802154_hw* hw; int bmux; int wqueue; int work; int stat_msg; TYPE_4__ stat_xfer; int buf_stat_tx; int buf_stat_rx; int tx_complete; struct spi_device* spi; } ;
struct TYPE_6__ {int* channels; int max_minbe; int min_maxbe; int max_maxbe; int max_frame_retries; int max_csma_backoffs; scalar_t__ min_csma_backoffs; scalar_t__ min_frame_retries; scalar_t__ min_minbe; void* tx_powers_size; void* tx_powers; void* cca_ed_levels_size; void* cca_ed_levels; int cca_modes; } ;
struct TYPE_5__ {int mode; } ;
struct TYPE_7__ {int flags; int perm_extended_addr; TYPE_2__ supported; TYPE_1__ cca; } ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct adf7242_local*) ;
 void* VAR_15 ;
 int FUNC_4 (struct adf7242_local*) ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct adf7242_local*) ;
 int FUNC_10 (int *,int ,int *,int ,int,int ,struct adf7242_local*) ;
 int FUNC_11 (int ) ;
 struct ieee802154_hw* FUNC_12 (int,int *) ;
 int FUNC_13 (struct ieee802154_hw*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct ieee802154_hw*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (TYPE_4__*,int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct spi_device*,struct adf7242_local*) ;
 scalar_t__ FUNC_23 (int) ;

__attribute__((used)) static int FUNC_24(struct spi_device *VAR_20)
{
 struct ieee802154_hw *VAR_21;
 struct adf7242_local *VAR_22;
 int VAR_23, VAR_24;

 if (!VAR_20->irq) {
  FUNC_6(&VAR_20->dev, "no IRQ specified\n");
  return -VAR_1;
 }

 VAR_21 = FUNC_12(sizeof(*VAR_22), &VAR_17);
 if (!VAR_21)
  return -VAR_2;

 VAR_22 = VAR_21->priv;
 VAR_22->hw = VAR_21;
 VAR_22->spi = VAR_20;

 VAR_21->priv = VAR_22;
 VAR_21->parent = &VAR_20->dev;
 VAR_21->extra_tx_headroom = 0;


 VAR_21->phy->supported.channels[0] = 0x7FFF800;

 VAR_21->flags = VAR_6 |
      VAR_4 |
      VAR_5 | VAR_3 |
      VAR_7;

 VAR_21->phy->flags = VAR_13 |
    VAR_11 |
    VAR_12;

 VAR_21->phy->supported.cca_modes = FUNC_1(VAR_10);

 VAR_21->phy->supported.cca_ed_levels = VAR_15;
 VAR_21->phy->supported.cca_ed_levels_size = FUNC_0(VAR_15);

 VAR_21->phy->cca.mode = VAR_10;

 VAR_21->phy->supported.tx_powers = VAR_18;
 VAR_21->phy->supported.tx_powers_size = FUNC_0(VAR_18);

 VAR_21->phy->supported.min_minbe = 0;
 VAR_21->phy->supported.max_minbe = 8;

 VAR_21->phy->supported.min_maxbe = 3;
 VAR_21->phy->supported.max_maxbe = 8;

 VAR_21->phy->supported.min_frame_retries = 0;
 VAR_21->phy->supported.max_frame_retries = 15;

 VAR_21->phy->supported.min_csma_backoffs = 0;
 VAR_21->phy->supported.max_csma_backoffs = 5;

 FUNC_14(&VAR_21->phy->perm_extended_addr);

 FUNC_19(&VAR_22->bmux);
 FUNC_16(&VAR_22->tx_complete);


 VAR_22->stat_xfer.len = 1;
 VAR_22->stat_xfer.tx_buf = &VAR_22->buf_stat_tx;
 VAR_22->stat_xfer.rx_buf = &VAR_22->buf_stat_rx;
 VAR_22->buf_stat_tx = VAR_0;

 FUNC_21(&VAR_22->stat_msg);
 FUNC_20(&VAR_22->stat_xfer, &VAR_22->stat_msg);

 FUNC_22(VAR_20, VAR_22);
 FUNC_2(&VAR_22->work, VAR_19);
 VAR_22->wqueue = FUNC_5(FUNC_8(&VAR_20->dev),
          VAR_14);
 if (FUNC_23(!VAR_22->wqueue)) {
  VAR_23 = -VAR_2;
  goto err_hw_init;
 }

 VAR_23 = FUNC_4(VAR_22);
 if (VAR_23)
  goto err_hw_init;

 VAR_24 = FUNC_17(VAR_20->irq);
 if (!VAR_24)
  VAR_24 = VAR_9;

 VAR_23 = FUNC_10(&VAR_20->dev, VAR_20->irq, ((void*)0), VAR_16,
     VAR_24 | VAR_8,
     FUNC_8(&VAR_20->dev), VAR_22);
 if (VAR_23)
  goto err_hw_init;

 FUNC_11(VAR_20->irq);

 VAR_23 = FUNC_15(VAR_22->hw);
 if (VAR_23)
  goto err_hw_init;

 FUNC_9(&VAR_20->dev, VAR_22);

 FUNC_3(VAR_22);

 FUNC_7(&VAR_20->dev, "mac802154 IRQ-%d registered\n", VAR_20->irq);

 return VAR_23;

err_hw_init:
 FUNC_18(&VAR_22->bmux);
 FUNC_13(VAR_22->hw);

 return VAR_23;
}
