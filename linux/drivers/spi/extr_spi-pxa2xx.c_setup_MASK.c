
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct spi_device {int chip_select; int bits_per_word; int mode; int dev; struct pxa2xx_spi_chip* controller_data; int controller; } ;
struct pxa2xx_spi_chip {int tx_threshold; int tx_hi_threshold; int rx_threshold; scalar_t__ enable_loopback; scalar_t__ timeout; } ;
struct lpss_config {int tx_threshold_lo; int tx_threshold_hi; int rx_threshold; } ;
struct driver_data {int ssp_type; int controller; TYPE_1__* controller_info; } ;
struct chip_data {int frm; int cr1; int lpss_tx_threshold; int threshold; int n_bytes; int write; int read; int dma_burst_size; scalar_t__ dma_threshold; scalar_t__ enable_dma; int lpss_rx_threshold; scalar_t__ timeout; } ;
struct TYPE_2__ {scalar_t__ enable_dma; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int) ;

 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (struct chip_data*) ;
 struct chip_data* FUNC_13 (int,int ) ;
 struct lpss_config* FUNC_14 (struct driver_data*) ;
 scalar_t__ FUNC_15 (struct chip_data*,struct spi_device*,int,int *,scalar_t__*) ;
 int FUNC_16 (struct spi_device*,struct chip_data*,struct pxa2xx_spi_chip*) ;
 struct driver_data* FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 struct chip_data* FUNC_19 (struct spi_device*) ;
 int FUNC_20 (struct spi_device*,struct chip_data*) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;

__attribute__((used)) static int FUNC_21(struct spi_device *VAR_31)
{
 struct pxa2xx_spi_chip *VAR_32;
 struct chip_data *VAR_33;
 const struct lpss_config *VAR_34;
 struct driver_data *VAR_35 =
  FUNC_17(VAR_31->controller);
 uint VAR_36, VAR_37, VAR_38;

 switch (VAR_35->ssp_type) {
 case 128:
  VAR_36 = VAR_24;
  VAR_37 = 0;
  VAR_38 = VAR_9;
  break;
 case 135:
  VAR_36 = VAR_22;
  VAR_37 = 0;
  VAR_38 = VAR_7;
  break;
 case 130:
 case 132:
 case 134:
 case 129:
 case 133:
 case 131:
  VAR_34 = FUNC_14(VAR_35);
  VAR_36 = VAR_34->tx_threshold_lo;
  VAR_37 = VAR_34->tx_threshold_hi;
  VAR_38 = VAR_34->rx_threshold;
  break;
 default:
  VAR_37 = 0;
  if (FUNC_18(VAR_35->controller)) {
   VAR_36 = 1;
   VAR_38 = 2;
  } else {
   VAR_36 = VAR_23;
   VAR_38 = VAR_8;
  }
  break;
 }


 VAR_33 = FUNC_19(VAR_31);
 if (!VAR_33) {
  VAR_33 = FUNC_13(sizeof(struct chip_data), VAR_4);
  if (!VAR_33)
   return -VAR_3;

  if (VAR_35->ssp_type == 135) {
   if (VAR_31->chip_select > 4) {
    FUNC_10(&VAR_31->dev,
     "failed setup: cs number must not be > 4.\n");
    FUNC_12(VAR_33);
    return -VAR_2;
   }

   VAR_33->frm = VAR_31->chip_select;
  }
  VAR_33->enable_dma = VAR_35->controller_info->enable_dma;
  VAR_33->timeout = VAR_21;
 }



 VAR_32 = VAR_31->controller_data;


 VAR_33->cr1 = 0;
 if (VAR_32) {
  if (VAR_32->timeout)
   VAR_33->timeout = VAR_32->timeout;
  if (VAR_32->tx_threshold)
   VAR_36 = VAR_32->tx_threshold;
  if (VAR_32->tx_hi_threshold)
   VAR_37 = VAR_32->tx_hi_threshold;
  if (VAR_32->rx_threshold)
   VAR_38 = VAR_32->rx_threshold;
  VAR_33->dma_threshold = 0;
  if (VAR_32->enable_loopback)
   VAR_33->cr1 = VAR_13;
 }
 if (FUNC_18(VAR_35->controller)) {
  VAR_33->cr1 |= VAR_15;
  VAR_33->cr1 |= VAR_16;
  VAR_33->cr1 |= VAR_17;
  VAR_33->cr1 |= VAR_18;
 }

 VAR_33->lpss_rx_threshold = FUNC_6(VAR_38);
 VAR_33->lpss_tx_threshold = FUNC_8(VAR_36)
    | FUNC_7(VAR_37);




 if (VAR_33->enable_dma) {

  if (FUNC_15(VAR_33, VAR_31,
      VAR_31->bits_per_word,
      &VAR_33->dma_burst_size,
      &VAR_33->dma_threshold)) {
   FUNC_11(&VAR_31->dev,
     "in setup: DMA burst size reduced to match bits_per_word\n");
  }
  FUNC_9(&VAR_31->dev,
   "in setup: DMA burst size set to %u\n",
   VAR_33->dma_burst_size);
 }

 switch (VAR_35->ssp_type) {
 case 128:
  VAR_33->threshold = (FUNC_2(VAR_38)
       & VAR_5)
       | (FUNC_3(VAR_36)
       & VAR_6);
  break;
 case 135:
  VAR_33->threshold = (FUNC_0(VAR_38) & VAR_0) |
   (FUNC_1(VAR_36) & VAR_1);
  break;
 default:
  VAR_33->threshold = (FUNC_4(VAR_38) & VAR_14) |
   (FUNC_5(VAR_36) & VAR_20);
  break;
 }

 VAR_33->cr1 &= ~(VAR_19 | VAR_18);
 VAR_33->cr1 |= (((VAR_31->mode & VAR_10) != 0) ? VAR_18 : 0)
   | (((VAR_31->mode & VAR_11) != 0) ? VAR_19 : 0);

 if (VAR_31->mode & VAR_12)
  VAR_33->cr1 |= VAR_13;

 if (VAR_31->bits_per_word <= 8) {
  VAR_33->n_bytes = 1;
  VAR_33->read = VAR_29;
  VAR_33->write = VAR_30;
 } else if (VAR_31->bits_per_word <= 16) {
  VAR_33->n_bytes = 2;
  VAR_33->read = VAR_25;
  VAR_33->write = VAR_26;
 } else if (VAR_31->bits_per_word <= 32) {
  VAR_33->n_bytes = 4;
  VAR_33->read = VAR_27;
  VAR_33->write = VAR_28;
 }

 FUNC_20(VAR_31, VAR_33);

 if (VAR_35->ssp_type == 135)
  return 0;

 return FUNC_16(VAR_31, VAR_33, VAR_32);
}
