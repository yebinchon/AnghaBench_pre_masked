
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
typedef int t ;
struct spi_transfer {char* tx_buf; int len; int bits_per_word; } ;
struct spi_message {int dummy; } ;
struct eeprom_93xx46_dev {unsigned int addrlen; TYPE_1__* spi; } ;
typedef int ssize_t ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct spi_transfer*,int ,int) ;
 int FUNC_3 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_4 (struct spi_message*) ;
 int FUNC_5 (TYPE_1__*,struct spi_message*) ;

__attribute__((used)) static ssize_t
FUNC_6(struct eeprom_93xx46_dev *VAR_1,
    const char *VAR_2, unsigned VAR_3)
{
 struct spi_message VAR_4;
 struct spi_transfer VAR_5[2];
 int VAR_6, VAR_7, VAR_8;
 u16 VAR_9;

 VAR_9 = VAR_0 << VAR_1->addrlen;

 if (VAR_1->addrlen == 7) {
  VAR_9 |= VAR_3 & 0x7f;
  VAR_6 = 10;
  VAR_7 = 1;
 } else {
  VAR_9 |= (VAR_3 >> 1) & 0x3f;
  VAR_6 = 9;
  VAR_7 = 2;
 }

 FUNC_0(&VAR_1->spi->dev, "write cmd 0x%x\n", VAR_9);

 FUNC_4(&VAR_4);
 FUNC_2(VAR_5, 0, sizeof(VAR_5));

 VAR_5[0].tx_buf = (char *)&VAR_9;
 VAR_5[0].len = 2;
 VAR_5[0].bits_per_word = VAR_6;
 FUNC_3(&VAR_5[0], &VAR_4);

 VAR_5[1].tx_buf = VAR_2;
 VAR_5[1].len = VAR_7;
 VAR_5[1].bits_per_word = 8;
 FUNC_3(&VAR_5[1], &VAR_4);

 VAR_8 = FUNC_5(VAR_1->spi, &VAR_4);

 FUNC_1(6);
 return VAR_8;
}
