
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {int len; int rx_buf; int tx_buf; } ;
struct spi_imx_data {int count; int slave_aborted; TYPE_1__* devtype_data; int xfer_done; scalar_t__ remainder; scalar_t__ txfifo; int rx_buf; int tx_buf; } ;
struct spi_device {int dev; int master; } ;
struct TYPE_2__ {int (* disable ) (struct spi_imx_data*) ;int (* intctrl ) (struct spi_imx_data*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (struct spi_imx_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct spi_imx_data*) ;
 struct spi_imx_data* FUNC_5 (int ) ;
 int FUNC_6 (struct spi_imx_data*,int) ;
 int FUNC_7 (struct spi_imx_data*) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_5,
          struct spi_transfer *VAR_6)
{
 struct spi_imx_data *VAR_7 = FUNC_5(VAR_5->master);
 int VAR_8 = VAR_6->len;

 if (FUNC_2(VAR_7) &&
     VAR_6->len > VAR_2) {
  FUNC_1(&VAR_5->dev, "Transaction too big, max size is %d bytes\n",
   VAR_2);
  return -VAR_1;
 }

 VAR_7->tx_buf = VAR_6->tx_buf;
 VAR_7->rx_buf = VAR_6->rx_buf;
 VAR_7->count = VAR_6->len;
 VAR_7->txfifo = 0;
 VAR_7->remainder = 0;

 FUNC_3(&VAR_7->xfer_done);
 VAR_7->slave_aborted = 0;

 FUNC_4(VAR_7);

 VAR_7->devtype_data->intctrl(VAR_7, VAR_4 | VAR_3);

 if (FUNC_8(&VAR_7->xfer_done) ||
     VAR_7->slave_aborted) {
  FUNC_0(&VAR_5->dev, "interrupted\n");
  VAR_8 = -VAR_0;
 }







 if (VAR_7->devtype_data->disable)
  VAR_7->devtype_data->disable(VAR_7);

 return VAR_8;
}
