
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct spi_transfer {int len; int * tx_buf; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dev; } ;
struct mtd_info {struct dataflash* priv; } ;
struct erase_info {scalar_t__ addr; scalar_t__ len; } ;
struct dataflash {int page_size; unsigned int page_offset; int lock; int * command; struct spi_device* spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct spi_device*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,unsigned int,int) ;
 unsigned int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__,int,scalar_t__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_8 (struct spi_message*) ;
 int FUNC_9 (struct spi_device*,struct spi_message*) ;

__attribute__((used)) static int FUNC_10(struct mtd_info *VAR_3, struct erase_info *VAR_4)
{
 struct dataflash *VAR_5 = VAR_3->priv;
 struct spi_device *VAR_6 = VAR_5->spi;
 struct spi_transfer VAR_7 = { };
 struct spi_message VAR_8;
 unsigned VAR_9 = VAR_5->page_size << 3;
 u8 *VAR_10;
 u32 VAR_11;

 FUNC_1(&VAR_6->dev, "erase addr=0x%llx len 0x%llx\n",
  (long long)VAR_4->addr, (long long)VAR_4->len);

 FUNC_4(VAR_4->len, VAR_5->page_size, &VAR_11);
 if (VAR_11)
  return -VAR_0;
 FUNC_4(VAR_4->addr, VAR_5->page_size, &VAR_11);
 if (VAR_11)
  return -VAR_0;

 FUNC_8(&VAR_8);

 VAR_7.tx_buf = VAR_10 = VAR_5->command;
 VAR_7.len = 4;
 FUNC_7(&VAR_7, &VAR_8);

 FUNC_5(&VAR_5->lock);
 while (VAR_4->len > 0) {
  unsigned int VAR_12;
  int VAR_13;
  int VAR_14;




  VAR_12 = FUNC_3(VAR_4->addr, VAR_5->page_size);
  VAR_14 = (VAR_12 & 0x7) == 0 && VAR_4->len >= VAR_9;
  VAR_12 = VAR_12 << VAR_5->page_offset;

  VAR_10[0] = VAR_14 ? VAR_1 : VAR_2;
  VAR_10[1] = (u8)(VAR_12 >> 16);
  VAR_10[2] = (u8)(VAR_12 >> 8);
  VAR_10[3] = 0;

  FUNC_1(&VAR_6->dev, "ERASE %s: (%x) %x %x %x [%i]\n",
   VAR_14 ? "block" : "page",
   VAR_10[0], VAR_10[1], VAR_10[2], VAR_10[3],
   VAR_12);

  VAR_13 = FUNC_9(VAR_6, &VAR_8);
  (void) FUNC_0(VAR_6);

  if (VAR_13 < 0) {
   FUNC_2(&VAR_6->dev, "erase %x, err %d\n",
    VAR_12, VAR_13);



   continue;
  }

  if (VAR_14) {
   VAR_4->addr += VAR_9;
   VAR_4->len -= VAR_9;
  } else {
   VAR_4->addr += VAR_5->page_size;
   VAR_4->len -= VAR_5->page_size;
  }
 }
 FUNC_6(&VAR_5->lock);

 return 0;
}
