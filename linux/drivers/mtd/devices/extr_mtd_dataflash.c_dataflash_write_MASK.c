
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u_char ;
typedef unsigned int u8 ;
struct spi_transfer {unsigned int* tx_buf; int len; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dev; } ;
struct mtd_info {struct dataflash* priv; } ;
struct dataflash {unsigned int* command; unsigned int page_size; unsigned int page_offset; int lock; struct spi_device* spi; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct spi_device*) ;
 int FUNC_1 (int *,char*,unsigned int,int,...) ;
 int FUNC_2 (int *,char*,unsigned int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_6 (struct spi_message*) ;
 int FUNC_7 (struct spi_device*,struct spi_message*) ;
 int FUNC_8 (struct spi_transfer*) ;

__attribute__((used)) static int FUNC_9(struct mtd_info *VAR_5, loff_t VAR_6, size_t VAR_7,
    size_t * VAR_8, const u_char * VAR_9)
{
 struct dataflash *VAR_10 = VAR_5->priv;
 struct spi_device *VAR_11 = VAR_10->spi;
 struct spi_transfer VAR_12[2] = { };
 struct spi_message VAR_13;
 unsigned int VAR_14, VAR_15, VAR_16, VAR_17;
 size_t VAR_18 = VAR_7;
 u_char *VAR_19 = (u_char *) VAR_9;
 int VAR_20 = -VAR_0;
 u8 *VAR_21;

 FUNC_1(&VAR_11->dev, "write 0x%x..0x%x\n",
  (unsigned int)VAR_6, (unsigned int)(VAR_6 + VAR_7));

 FUNC_6(&VAR_13);

 VAR_12[0].tx_buf = VAR_21 = VAR_10->command;
 VAR_12[0].len = 4;
 FUNC_5(&VAR_12[0], &VAR_13);

 VAR_14 = ((unsigned)VAR_6 / VAR_10->page_size);
 VAR_16 = ((unsigned)VAR_6 % VAR_10->page_size);
 if (VAR_16 + VAR_7 > VAR_10->page_size)
  VAR_17 = VAR_10->page_size - VAR_16;
 else
  VAR_17 = VAR_7;

 FUNC_3(&VAR_10->lock);
 while (VAR_18 > 0) {
  FUNC_1(&VAR_11->dev, "write @ %i:%i len=%i\n",
   VAR_14, VAR_16, VAR_17);
  VAR_15 = VAR_14 << VAR_10->page_offset;


  if (VAR_17 != VAR_10->page_size) {
   VAR_21[0] = VAR_4;
   VAR_21[1] = (VAR_15 & 0x00FF0000) >> 16;
   VAR_21[2] = (VAR_15 & 0x0000FF00) >> 8;
   VAR_21[3] = 0;

   FUNC_1(&VAR_11->dev, "TRANSFER: (%x) %x %x %x\n",
    VAR_21[0], VAR_21[1], VAR_21[2], VAR_21[3]);

   VAR_20 = FUNC_7(VAR_11, &VAR_13);
   if (VAR_20 < 0)
    FUNC_1(&VAR_11->dev, "xfer %u -> %d\n",
     VAR_15, VAR_20);

   (void) FUNC_0(VAR_10->spi);
  }


  VAR_15 += VAR_16;
  VAR_21[0] = VAR_3;
  VAR_21[1] = (VAR_15 & 0x00FF0000) >> 16;
  VAR_21[2] = (VAR_15 & 0x0000FF00) >> 8;
  VAR_21[3] = (VAR_15 & 0x000000FF);

  FUNC_1(&VAR_11->dev, "PROGRAM: (%x) %x %x %x\n",
   VAR_21[0], VAR_21[1], VAR_21[2], VAR_21[3]);

  VAR_12[1].tx_buf = VAR_19;
  VAR_12[1].len = VAR_17;
  FUNC_5(VAR_12 + 1, &VAR_13);
  VAR_20 = FUNC_7(VAR_11, &VAR_13);
  FUNC_8(VAR_12 + 1);
  if (VAR_20 < 0)
   FUNC_1(&VAR_11->dev, "pgm %u/%u -> %d\n",
    VAR_15, VAR_17, VAR_20);

  (void) FUNC_0(VAR_10->spi);
  VAR_18 = VAR_18 - VAR_17;
  VAR_14++;
  VAR_16 = 0;
  VAR_19 += VAR_17;
  *VAR_8 += VAR_17;

  if (VAR_18 > VAR_10->page_size)
   VAR_17 = VAR_10->page_size;
  else
   VAR_17 = VAR_18;
 }
 FUNC_4(&VAR_10->lock);

 return VAR_20;
}
