
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
typedef int t ;
struct spi_transfer {int* tx_buf; int len; int bits_per_word; } ;
struct spi_message {int dummy; } ;
struct eeprom_93xx46_dev {int addrlen; int lock; TYPE_1__* pdata; TYPE_2__* spi; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* finish ) (struct eeprom_93xx46_dev*) ;int (* prepare ) (struct eeprom_93xx46_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,char*,int,int) ;
 int FUNC_1 (int *,char*,char*,int) ;
 scalar_t__ FUNC_2 (struct eeprom_93xx46_dev*) ;
 int FUNC_3 (struct spi_transfer*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_8 (struct spi_message*) ;
 int FUNC_9 (TYPE_2__*,struct spi_message*) ;
 int FUNC_10 (struct eeprom_93xx46_dev*) ;
 int FUNC_11 (struct eeprom_93xx46_dev*) ;

__attribute__((used)) static int FUNC_12(struct eeprom_93xx46_dev *VAR_3, int VAR_4)
{
 struct spi_message VAR_5;
 struct spi_transfer VAR_6;
 int VAR_7, VAR_8;
 u16 VAR_9;

 VAR_9 = VAR_2 << VAR_3->addrlen;
 if (VAR_3->addrlen == 7) {
  VAR_9 |= (VAR_4 ? VAR_1 : VAR_0) << 1;
  VAR_7 = 10;
 } else {
  VAR_9 |= (VAR_4 ? VAR_1 : VAR_0);
  VAR_7 = 9;
 }

 if (FUNC_2(VAR_3)) {
  VAR_9 <<= 2;
  VAR_7 += 2;
 }

 FUNC_0(&VAR_3->spi->dev, "ew%s cmd 0x%04x, %d bits\n",
   VAR_4 ? "en" : "ds", VAR_9, VAR_7);

 FUNC_8(&VAR_5);
 FUNC_3(&VAR_6, 0, sizeof(VAR_6));

 VAR_6.tx_buf = &VAR_9;
 VAR_6.len = 2;
 VAR_6.bits_per_word = VAR_7;
 FUNC_7(&VAR_6, &VAR_5);

 FUNC_4(&VAR_3->lock);

 if (VAR_3->pdata->prepare)
  VAR_3->pdata->prepare(VAR_3);

 VAR_8 = FUNC_9(VAR_3->spi, &VAR_5);

 FUNC_6(250);
 if (VAR_8)
  FUNC_1(&VAR_3->spi->dev, "erase/write %sable error %d\n",
   VAR_4 ? "en" : "dis", VAR_8);

 if (VAR_3->pdata->finish)
  VAR_3->pdata->finish(VAR_3);

 FUNC_5(&VAR_3->lock);
 return VAR_8;
}
