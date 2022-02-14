
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; int rx_buf; int tx_buf; } ;
struct spi_controller {int dummy; } ;
struct fsl_lpspi_data {int slave_aborted; int xfer_done; int remain; int rx_buf; int tx_buf; } ;


 int FUNC_0 (struct fsl_lpspi_data*) ;
 int FUNC_1 (struct spi_controller*) ;
 int FUNC_2 (struct fsl_lpspi_data*) ;
 int FUNC_3 (int *) ;
 struct fsl_lpspi_data* FUNC_4 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_5(struct spi_controller *VAR_0,
      struct spi_transfer *VAR_1)
{
 struct fsl_lpspi_data *VAR_2 =
    FUNC_4(VAR_0);
 int VAR_3;

 VAR_2->tx_buf = VAR_1->tx_buf;
 VAR_2->rx_buf = VAR_1->rx_buf;
 VAR_2->remain = VAR_1->len;

 FUNC_3(&VAR_2->xfer_done);
 VAR_2->slave_aborted = 0;

 FUNC_2(VAR_2);

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3)
  return VAR_3;

 FUNC_0(VAR_2);

 return 0;
}
