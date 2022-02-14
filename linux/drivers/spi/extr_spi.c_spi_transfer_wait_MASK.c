
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {long long len; int speed_hz; } ;
struct spi_statistics {int dummy; } ;
struct spi_message {TYPE_1__* spi; } ;
struct spi_controller {int xfer_completion; struct spi_statistics statistics; } ;
struct TYPE_2__ {int dev; struct spi_statistics statistics; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spi_statistics*,int ) ;
 unsigned long long VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (unsigned long long,int ) ;
 int FUNC_4 (unsigned long long) ;
 scalar_t__ FUNC_5 (struct spi_controller*) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int *) ;
 unsigned long long FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct spi_controller *VAR_4,
        struct spi_message *VAR_5,
        struct spi_transfer *VAR_6)
{
 struct spi_statistics *VAR_7 = &VAR_4->statistics;
 struct spi_statistics *VAR_8 = &VAR_5->spi->statistics;
 unsigned long long VAR_9 = 1;

 if (FUNC_5(VAR_4)) {
  if (FUNC_6(&VAR_4->xfer_completion)) {
   FUNC_1(&VAR_5->spi->dev, "SPI transfer interrupted\n");
   return -VAR_0;
  }
 } else {
  VAR_9 = 8LL * 1000LL * VAR_6->len;
  FUNC_3(VAR_9, VAR_6->speed_hz);
  VAR_9 += VAR_9 + 200;

  if (VAR_9 > VAR_2)
   VAR_9 = VAR_2;

  VAR_9 = FUNC_7(&VAR_4->xfer_completion,
       FUNC_4(VAR_9));

  if (VAR_9 == 0) {
   FUNC_0(VAR_7, VAR_3);
   FUNC_0(VAR_8, VAR_3);
   FUNC_2(&VAR_5->spi->dev,
    "SPI transfer timed out\n");
   return -VAR_1;
  }
 }

 return 0;
}
