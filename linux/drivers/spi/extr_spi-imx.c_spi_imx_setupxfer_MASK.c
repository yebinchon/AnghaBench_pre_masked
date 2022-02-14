
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_transfer {int bits_per_word; int len; } ;
struct TYPE_3__ {int master; } ;
struct spi_imx_data {int bits_per_word; int dynamic_burst; int usedma; TYPE_2__* devtype_data; int slave_burst; int tx; int rx; scalar_t__ slave_mode; TYPE_1__ bitbang; } ;
struct spi_device {int master; } ;
struct TYPE_4__ {int (* prepare_transfer ) (struct spi_imx_data*,struct spi_device*,struct spi_transfer*) ;scalar_t__ dynamic_burst; } ;


 scalar_t__ FUNC_0 (struct spi_imx_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ,struct spi_device*,struct spi_transfer*) ;
 struct spi_imx_data* FUNC_2 (int ) ;
 int FUNC_3 (struct spi_imx_data*,struct spi_device*,struct spi_transfer*) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_10,
     struct spi_transfer *VAR_11)
{
 struct spi_imx_data *VAR_12 = FUNC_2(VAR_10->master);

 if (!VAR_11)
  return 0;

 VAR_12->bits_per_word = VAR_11->bits_per_word;






 if (VAR_12->devtype_data->dynamic_burst && !VAR_12->slave_mode &&
     (VAR_12->bits_per_word == 8 ||
     VAR_12->bits_per_word == 16 ||
     VAR_12->bits_per_word == 32)) {

  VAR_12->rx = VAR_2;
  VAR_12->tx = VAR_6;
  VAR_12->dynamic_burst = 1;

 } else {
  if (VAR_12->bits_per_word <= 8) {
   VAR_12->rx = VAR_5;
   VAR_12->tx = VAR_9;
  } else if (VAR_12->bits_per_word <= 16) {
   VAR_12->rx = VAR_3;
   VAR_12->tx = VAR_7;
  } else {
   VAR_12->rx = VAR_4;
   VAR_12->tx = VAR_8;
  }
  VAR_12->dynamic_burst = 0;
 }

 if (FUNC_1(VAR_12->bitbang.master, VAR_10, VAR_11))
  VAR_12->usedma = 1;
 else
  VAR_12->usedma = 0;

 if (FUNC_0(VAR_12) && VAR_12->slave_mode) {
  VAR_12->rx = VAR_0;
  VAR_12->tx = VAR_1;
  VAR_12->slave_burst = VAR_11->len;
 }

 VAR_12->devtype_data->prepare_transfer(VAR_12, VAR_10, VAR_11);

 return 0;
}
