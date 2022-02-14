
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {int bits_per_word; scalar_t__ len; scalar_t__ speed_hz; } ;
struct spi_device {int bits_per_word; scalar_t__ max_speed_hz; int chip_select; int mode; int controller; } ;
struct spi_controller {int dummy; } ;
struct TYPE_2__ {int bpw; scalar_t__ speed_hz; int chip_select; int mode; } ;
struct fsl_lpspi_data {scalar_t__ txfifosize; scalar_t__ watermark; int usedma; int tx; int rx; TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct spi_controller*,struct spi_device*,struct spi_transfer*) ;
 int FUNC_1 (struct fsl_lpspi_data*) ;
 struct fsl_lpspi_data* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct spi_controller *VAR_7,
         struct spi_device *VAR_8,
         struct spi_transfer *VAR_9)
{
 struct fsl_lpspi_data *VAR_10 =
    FUNC_2(VAR_8->controller);

 if (VAR_9 == ((void*)0))
  return -VAR_0;

 VAR_10->config.mode = VAR_8->mode;
 VAR_10->config.bpw = VAR_9->bits_per_word;
 VAR_10->config.speed_hz = VAR_9->speed_hz;
 VAR_10->config.chip_select = VAR_8->chip_select;

 if (!VAR_10->config.speed_hz)
  VAR_10->config.speed_hz = VAR_8->max_speed_hz;
 if (!VAR_10->config.bpw)
  VAR_10->config.bpw = VAR_8->bits_per_word;


 if (VAR_10->config.bpw <= 8) {
  VAR_10->rx = VAR_3;
  VAR_10->tx = VAR_6;
 } else if (VAR_10->config.bpw <= 16) {
  VAR_10->rx = VAR_1;
  VAR_10->tx = VAR_4;
 } else {
  VAR_10->rx = VAR_2;
  VAR_10->tx = VAR_5;
 }

 if (VAR_9->len <= VAR_10->txfifosize)
  VAR_10->watermark = VAR_9->len;
 else
  VAR_10->watermark = VAR_10->txfifosize;

 if (FUNC_0(VAR_7, VAR_8, VAR_9))
  VAR_10->usedma = 1;
 else
  VAR_10->usedma = 0;

 return FUNC_1(VAR_10);
}
