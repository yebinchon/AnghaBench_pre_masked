
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
typedef int u8 ;
struct spi_transfer {int len; int * rx_buf; int * tx_buf; } ;
struct spi_message {int actual_length; } ;
struct mtd_info {struct dataflash* priv; } ;
struct dataflash {unsigned int page_size; unsigned int page_offset; TYPE_1__* spi; int lock; int * command; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,unsigned int,unsigned int,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_4 (struct spi_message*) ;
 int FUNC_5 (TYPE_1__*,struct spi_message*) ;

__attribute__((used)) static int FUNC_6(struct mtd_info *VAR_1, loff_t VAR_2, size_t VAR_3,
          size_t *VAR_4, u_char *VAR_5)
{
 struct dataflash *VAR_6 = VAR_1->priv;
 struct spi_transfer VAR_7[2] = { };
 struct spi_message VAR_8;
 unsigned int VAR_9;
 u8 *VAR_10;
 int VAR_11;

 FUNC_0(&VAR_6->spi->dev, "read 0x%x..0x%x\n",
    (unsigned int)VAR_2, (unsigned int)(VAR_2 + VAR_3));


 VAR_9 = (((unsigned)VAR_2 / VAR_6->page_size) << VAR_6->page_offset)
  + ((unsigned)VAR_2 % VAR_6->page_size);

 VAR_10 = VAR_6->command;

 FUNC_0(&VAR_6->spi->dev, "READ: (%x) %x %x %x\n",
  VAR_10[0], VAR_10[1], VAR_10[2], VAR_10[3]);

 FUNC_4(&VAR_8);

 VAR_7[0].tx_buf = VAR_10;
 VAR_7[0].len = 8;
 FUNC_3(&VAR_7[0], &VAR_8);

 VAR_7[1].rx_buf = VAR_5;
 VAR_7[1].len = VAR_3;
 FUNC_3(&VAR_7[1], &VAR_8);

 FUNC_1(&VAR_6->lock);





 VAR_10[0] = VAR_0;
 VAR_10[1] = (u8)(VAR_9 >> 16);
 VAR_10[2] = (u8)(VAR_9 >> 8);
 VAR_10[3] = (u8)(VAR_9 >> 0);


 VAR_11 = FUNC_5(VAR_6->spi, &VAR_8);
 FUNC_2(&VAR_6->lock);

 if (VAR_11 >= 0) {
  *VAR_4 = VAR_8.actual_length - 8;
  VAR_11 = 0;
 } else
  FUNC_0(&VAR_6->spi->dev, "read %x..%x --> %d\n",
   (unsigned)VAR_2, (unsigned)(VAR_2 + VAR_3),
   VAR_11);
 return VAR_11;
}
