
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_slink_data {int tx_status; int rx_status; int dev; int xfer_completion; } ;
struct spi_transfer {int dummy; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 struct tegra_slink_data* FUNC_3 (struct spi_master*) ;
 int FUNC_4 (struct spi_device*,struct spi_transfer*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct spi_master *VAR_2,
        struct spi_device *VAR_3,
        struct spi_transfer *VAR_4)
{
 struct tegra_slink_data *VAR_5 = FUNC_3(VAR_2);
 int VAR_6;

 FUNC_2(&VAR_5->xfer_completion);
 VAR_6 = FUNC_4(VAR_3, VAR_4);
 if (VAR_6 < 0) {
  FUNC_1(VAR_5->dev,
   "spi can not start transfer, err %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_5(&VAR_5->xfer_completion,
       VAR_1);
 if (FUNC_0(VAR_6 == 0)) {
  FUNC_1(VAR_5->dev,
   "spi transfer timeout, err %d\n", VAR_6);
  return -VAR_0;
 }

 if (VAR_5->tx_status)
  return VAR_5->tx_status;
 if (VAR_5->rx_status)
  return VAR_5->rx_status;

 return 0;
}
