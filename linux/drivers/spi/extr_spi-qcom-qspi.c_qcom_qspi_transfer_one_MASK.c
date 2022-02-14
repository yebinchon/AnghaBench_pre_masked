
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spi_transfer {long speed_hz; int len; int transfer_list; int tx_buf; int tx_nbits; scalar_t__ rx_buf; int rx_nbits; } ;
struct spi_master {TYPE_2__* cur_msg; } ;
struct spi_device {unsigned long max_speed_hz; } ;
struct TYPE_6__ {int rem_bytes; int is_last; int tx_buf; int buswidth; int dir; scalar_t__ rx_buf; } ;
struct qcom_qspi {int lock; TYPE_3__ xfer; int dev; TYPE_1__* clks; } ;
struct TYPE_5__ {int transfers; } ;
struct TYPE_4__ {int clk; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct qcom_qspi*) ;
 struct qcom_qspi* FUNC_4 (struct spi_master*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct spi_master *VAR_3,
      struct spi_device *VAR_4,
      struct spi_transfer *VAR_5)
{
 struct qcom_qspi *VAR_6 = FUNC_4(VAR_3);
 int VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;

 VAR_8 = VAR_4->max_speed_hz;
 if (VAR_5->speed_hz)
  VAR_8 = VAR_5->speed_hz;


 VAR_7 = FUNC_0(VAR_6->clks[VAR_0].clk, VAR_8 * 4);
 if (VAR_7) {
  FUNC_1(VAR_6->dev, "Failed to set core clk %d\n", VAR_7);
  return VAR_7;
 }

 FUNC_5(&VAR_6->lock, VAR_9);


 if (VAR_5->rx_buf) {
  VAR_6->xfer.dir = VAR_1;
  VAR_6->xfer.buswidth = VAR_5->rx_nbits;
  VAR_6->xfer.rx_buf = VAR_5->rx_buf;
 } else {
  VAR_6->xfer.dir = VAR_2;
  VAR_6->xfer.buswidth = VAR_5->tx_nbits;
  VAR_6->xfer.tx_buf = VAR_5->tx_buf;
 }
 VAR_6->xfer.is_last = FUNC_2(&VAR_5->transfer_list,
       &VAR_3->cur_msg->transfers);
 VAR_6->xfer.rem_bytes = VAR_5->len;
 FUNC_3(VAR_6);

 FUNC_6(&VAR_6->lock, VAR_9);


 return 1;
}
