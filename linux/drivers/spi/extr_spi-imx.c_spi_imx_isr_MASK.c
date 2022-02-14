
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_imx_data {int xfer_done; TYPE_1__* devtype_data; scalar_t__ txfifo; scalar_t__ count; int (* rx ) (struct spi_imx_data*) ;} ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* intctrl ) (struct spi_imx_data*,int ) ;scalar_t__ (* rx_available ) (struct spi_imx_data*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct spi_imx_data*) ;
 scalar_t__ FUNC_2 (struct spi_imx_data*) ;
 int FUNC_3 (struct spi_imx_data*) ;
 int FUNC_4 (struct spi_imx_data*,int ) ;
 int FUNC_5 (struct spi_imx_data*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 struct spi_imx_data *VAR_4 = VAR_3;

 while (VAR_4->txfifo &&
        VAR_4->devtype_data->rx_available(VAR_4)) {
  VAR_4->rx(VAR_4);
  VAR_4->txfifo--;
 }

 if (VAR_4->count) {
  FUNC_1(VAR_4);
  return VAR_0;
 }

 if (VAR_4->txfifo) {



  VAR_4->devtype_data->intctrl(
    VAR_4, VAR_1);
  return VAR_0;
 }

 VAR_4->devtype_data->intctrl(VAR_4, 0);
 FUNC_0(&VAR_4->xfer_done);

 return VAR_0;
}
