
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
typedef int t ;
struct spi_transfer {int* tx_buf; int len; int bits_per_word; } ;
struct spi_message {int dummy; } ;
struct eeprom_93xx46_platform_data {int (* finish ) (struct eeprom_93xx46_dev*) ;int (* prepare ) (struct eeprom_93xx46_dev*) ;} ;
struct eeprom_93xx46_dev {int addrlen; int lock; TYPE_1__* spi; struct eeprom_93xx46_platform_data* pdata; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (struct eeprom_93xx46_dev*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct spi_transfer*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_8 (struct spi_message*) ;
 int FUNC_9 (TYPE_1__*,struct spi_message*) ;
 int FUNC_10 (struct eeprom_93xx46_dev*) ;
 int FUNC_11 (struct eeprom_93xx46_dev*) ;

__attribute__((used)) static int FUNC_12(struct eeprom_93xx46_dev *VAR_2)
{
 struct eeprom_93xx46_platform_data *VAR_3 = VAR_2->pdata;
 struct spi_message VAR_4;
 struct spi_transfer VAR_5;
 int VAR_6, VAR_7;
 u16 VAR_8;

 VAR_8 = VAR_1 << VAR_2->addrlen;
 if (VAR_2->addrlen == 7) {
  VAR_8 |= VAR_0 << 1;
  VAR_6 = 10;
 } else {
  VAR_8 |= VAR_0;
  VAR_6 = 9;
 }

 if (FUNC_2(VAR_2)) {
  VAR_8 <<= 2;
  VAR_6 += 2;
 }

 FUNC_0(&VAR_2->spi->dev, "eral cmd 0x%04x, %d bits\n", VAR_8, VAR_6);

 FUNC_8(&VAR_4);
 FUNC_4(&VAR_5, 0, sizeof(VAR_5));

 VAR_5.tx_buf = &VAR_8;
 VAR_5.len = 2;
 VAR_5.bits_per_word = VAR_6;
 FUNC_7(&VAR_5, &VAR_4);

 FUNC_5(&VAR_2->lock);

 if (VAR_2->pdata->prepare)
  VAR_2->pdata->prepare(VAR_2);

 VAR_7 = FUNC_9(VAR_2->spi, &VAR_4);
 if (VAR_7)
  FUNC_1(&VAR_2->spi->dev, "erase error %d\n", VAR_7);

 FUNC_3(6);

 if (VAR_3->finish)
  VAR_3->finish(VAR_2);

 FUNC_6(&VAR_2->lock);
 return VAR_7;
}
