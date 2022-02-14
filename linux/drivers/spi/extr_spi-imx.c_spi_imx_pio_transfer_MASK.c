
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {int len; int rx_buf; int tx_buf; } ;
struct spi_imx_data {int count; TYPE_1__* devtype_data; int xfer_done; scalar_t__ remainder; scalar_t__ txfifo; int rx_buf; int tx_buf; } ;
struct spi_device {int dev; int master; } ;
struct TYPE_2__ {int (* reset ) (struct spi_imx_data*) ;int (* intctrl ) (struct spi_imx_data*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (struct spi_imx_data*,int) ;
 int FUNC_3 (struct spi_imx_data*) ;
 struct spi_imx_data* FUNC_4 (int ) ;
 int FUNC_5 (struct spi_imx_data*,int ) ;
 int FUNC_6 (struct spi_imx_data*) ;
 unsigned long FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_2,
    struct spi_transfer *VAR_3)
{
 struct spi_imx_data *VAR_4 = FUNC_4(VAR_2->master);
 unsigned long VAR_5;
 unsigned long VAR_6;

 VAR_4->tx_buf = VAR_3->tx_buf;
 VAR_4->rx_buf = VAR_3->rx_buf;
 VAR_4->count = VAR_3->len;
 VAR_4->txfifo = 0;
 VAR_4->remainder = 0;

 FUNC_1(&VAR_4->xfer_done);

 FUNC_3(VAR_4);

 VAR_4->devtype_data->intctrl(VAR_4, VAR_1);

 VAR_5 = FUNC_2(VAR_4, VAR_3->len);

 VAR_6 = FUNC_7(&VAR_4->xfer_done,
           VAR_5);
 if (!VAR_6) {
  FUNC_0(&VAR_2->dev, "I/O Error in PIO\n");
  VAR_4->devtype_data->reset(VAR_4);
  return -VAR_0;
 }

 return VAR_3->len;
}
