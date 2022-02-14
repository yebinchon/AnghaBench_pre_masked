
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ of_node; struct nfcmrvl_platform_data* platform_data; } ;
struct spi_device {TYPE_2__ dev; } ;
struct nfcmrvl_spi_drv_data {int handshake_completion; TYPE_1__* priv; struct spi_device* spi; int nci_spi; } ;
struct nfcmrvl_platform_data {int irq; } ;
struct TYPE_8__ {int support_fw_dnld; int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 struct nfcmrvl_spi_drv_data* FUNC_2 (TYPE_2__*,int,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int *,int ,int,char*,struct nfcmrvl_spi_drv_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct spi_device*,int ,int,int ) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 TYPE_1__* FUNC_7 (int ,struct nfcmrvl_spi_drv_data*,int *,TYPE_2__*,struct nfcmrvl_platform_data*) ;
 int VAR_7 ;
 scalar_t__ FUNC_8 (scalar_t__,struct nfcmrvl_platform_data*) ;
 int VAR_8 ;
 int FUNC_9 (struct spi_device*,struct nfcmrvl_spi_drv_data*) ;

__attribute__((used)) static int FUNC_10(struct spi_device *VAR_9)
{
 struct nfcmrvl_platform_data *VAR_10;
 struct nfcmrvl_platform_data VAR_11;
 struct nfcmrvl_spi_drv_data *VAR_12;
 int VAR_13 = 0;

 VAR_12 = FUNC_2(&VAR_9->dev, sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;

 VAR_12->spi = VAR_9;
 VAR_12->priv = ((void*)0);
 FUNC_9(VAR_9, VAR_12);

 VAR_10 = VAR_9->dev.platform_data;

 if (!VAR_10 && VAR_9->dev.of_node)
  if (FUNC_8(VAR_9->dev.of_node, &VAR_11) == 0)
   VAR_10 = &VAR_11;

 if (!VAR_10)
  return -VAR_0;

 VAR_13 = FUNC_3(&VAR_12->spi->dev, VAR_10->irq,
     ((void*)0), VAR_7,
     VAR_5 | VAR_4,
     "nfcmrvl_spi_int", VAR_12);
 if (VAR_13 < 0) {
  FUNC_6(&VAR_12->spi->dev, "Unable to register IRQ handler");
  return -VAR_1;
 }

 VAR_12->priv = FUNC_7(VAR_6,
        VAR_12, &VAR_8,
        &VAR_12->spi->dev,
        VAR_10);
 if (FUNC_0(VAR_12->priv))
  return FUNC_1(VAR_12->priv);

 VAR_12->priv->support_fw_dnld = 1;

 VAR_12->nci_spi = FUNC_5(VAR_12->spi, 0, 10,
       VAR_12->priv->ndev);


 FUNC_4(&VAR_12->handshake_completion);
 return 0;
}
