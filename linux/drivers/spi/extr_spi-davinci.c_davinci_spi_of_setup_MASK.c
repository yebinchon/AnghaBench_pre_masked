
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct spi_device {struct davinci_spi_config* controller_data; int master; TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct davinci_spi_config {int io_type; scalar_t__ wdelay; } ;
struct davinci_spi {scalar_t__ dma_tx; scalar_t__ dma_rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct davinci_spi_config VAR_3 ;
 struct davinci_spi_config* FUNC_0 (int,int ) ;
 int FUNC_1 (struct device_node*,char*,scalar_t__*) ;
 struct davinci_spi* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_4)
{
 struct davinci_spi_config *VAR_5 = VAR_4->controller_data;
 struct device_node *VAR_6 = VAR_4->dev.of_node;
 struct davinci_spi *VAR_7 = FUNC_2(VAR_4->master);
 u32 VAR_8;

 if (VAR_5 == ((void*)0) && VAR_6) {
  VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
  if (!VAR_5)
   return -VAR_0;
  *VAR_5 = VAR_3;

  if (!FUNC_1(VAR_6, "ti,spi-wdelay", &VAR_8))
   VAR_5->wdelay = (u8)VAR_8;
  VAR_4->controller_data = VAR_5;

  if (VAR_7->dma_rx && VAR_7->dma_tx)
   VAR_5->io_type = VAR_2;
 }

 return 0;
}
