
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u16 ;
struct spi_transfer {char* tx_buf; int len; int bits_per_word; char* rx_buf; int member_0; } ;
struct spi_message {int dummy; } ;
struct eeprom_93xx46_dev {unsigned int size; unsigned int addrlen; int lock; TYPE_1__* pdata; TYPE_2__* spi; } ;
struct TYPE_4__ {int dev; int max_speed_hz; } ;
struct TYPE_3__ {int (* finish ) (struct eeprom_93xx46_dev*) ;int (* prepare ) (struct eeprom_93xx46_dev*) ;} ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,char*,unsigned int,int ) ;
 int FUNC_1 (int *,char*,size_t,int,int) ;
 scalar_t__ FUNC_2 (struct eeprom_93xx46_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_7 (struct spi_message*) ;
 int FUNC_8 (TYPE_2__*,struct spi_message*) ;
 int FUNC_9 (struct eeprom_93xx46_dev*) ;
 int FUNC_10 (struct eeprom_93xx46_dev*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(void *VAR_1, unsigned int VAR_2,
         void *VAR_3, size_t VAR_4)
{
 struct eeprom_93xx46_dev *VAR_5 = VAR_1;
 char *VAR_6 = VAR_3;
 int VAR_7 = 0;

 if (FUNC_11(VAR_2 >= VAR_5->size))
  return 0;
 if ((VAR_2 + VAR_4) > VAR_5->size)
  VAR_4 = VAR_5->size - VAR_2;
 if (FUNC_11(!VAR_4))
  return VAR_4;

 FUNC_3(&VAR_5->lock);

 if (VAR_5->pdata->prepare)
  VAR_5->pdata->prepare(VAR_5);

 while (VAR_4) {
  struct spi_message VAR_8;
  struct spi_transfer VAR_9[2] = { { 0 } };
  u16 VAR_10 = VAR_0 << VAR_5->addrlen;
  size_t VAR_11 = VAR_4;
  int VAR_12;

  if (VAR_5->addrlen == 7) {
   VAR_10 |= VAR_2 & 0x7f;
   VAR_12 = 10;
   if (FUNC_2(VAR_5))
    VAR_11 = 1;
  } else {
   VAR_10 |= (VAR_2 >> 1) & 0x3f;
   VAR_12 = 9;
   if (FUNC_2(VAR_5))
    VAR_11 = 2;
  }

  FUNC_0(&VAR_5->spi->dev, "read cmd 0x%x, %d Hz\n",
   VAR_10, VAR_5->spi->max_speed_hz);

  FUNC_7(&VAR_8);

  VAR_9[0].tx_buf = (char *)&VAR_10;
  VAR_9[0].len = 2;
  VAR_9[0].bits_per_word = VAR_12;
  FUNC_6(&VAR_9[0], &VAR_8);

  VAR_9[1].rx_buf = VAR_6;
  VAR_9[1].len = VAR_4;
  VAR_9[1].bits_per_word = 8;
  FUNC_6(&VAR_9[1], &VAR_8);

  VAR_7 = FUNC_8(VAR_5->spi, &VAR_8);

  FUNC_5(250);

  if (VAR_7) {
   FUNC_1(&VAR_5->spi->dev, "read %zu bytes at %d: err. %d\n",
    VAR_11, (int)VAR_2, VAR_7);
   break;
  }

  VAR_6 += VAR_11;
  VAR_2 += VAR_11;
  VAR_4 -= VAR_11;
 }

 if (VAR_5->pdata->finish)
  VAR_5->pdata->finish(VAR_5);

 FUNC_4(&VAR_5->lock);

 return VAR_7;
}
