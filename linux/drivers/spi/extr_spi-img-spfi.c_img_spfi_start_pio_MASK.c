
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {void* tx_buf; unsigned int len; int speed_hz; void* rx_buf; } ;
struct spi_master {int dummy; } ;
struct spi_device {int master; } ;
struct img_spfi {int dev; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_2 (int) ;
 unsigned int FUNC_3 (struct img_spfi*,void*,unsigned int) ;
 unsigned int FUNC_4 (struct img_spfi*,void*,unsigned int) ;
 unsigned int FUNC_5 (struct img_spfi*,void const*,unsigned int) ;
 unsigned int FUNC_6 (struct img_spfi*,void const*,unsigned int) ;
 int FUNC_7 (struct img_spfi*) ;
 int FUNC_8 (struct img_spfi*) ;
 struct img_spfi* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct spi_master *VAR_2,
          struct spi_device *VAR_3,
          struct spi_transfer *VAR_4)
{
 struct img_spfi *VAR_5 = FUNC_9(VAR_3->master);
 unsigned int VAR_6 = 0, VAR_7 = 0;
 const void *VAR_8 = VAR_4->tx_buf;
 void *VAR_9 = VAR_4->rx_buf;
 unsigned long VAR_10;
 int VAR_11;

 if (VAR_8)
  VAR_6 = VAR_4->len;
 if (VAR_9)
  VAR_7 = VAR_4->len;

 FUNC_7(VAR_5);

 VAR_10 = VAR_1 +
  FUNC_2(VAR_4->len * 8 * 1000 / VAR_4->speed_hz + 100);
 while ((VAR_6 > 0 || VAR_7 > 0) &&
        FUNC_10(VAR_1, VAR_10)) {
  unsigned int VAR_12, VAR_13;

  if (VAR_6 >= 4)
   VAR_12 = FUNC_5(VAR_5, VAR_8, VAR_6);
  else
   VAR_12 = FUNC_6(VAR_5, VAR_8, VAR_6);

  if (VAR_7 >= 4)
   VAR_13 = FUNC_3(VAR_5, VAR_9, VAR_7);
  else
   VAR_13 = FUNC_4(VAR_5, VAR_9, VAR_7);

  VAR_8 += VAR_12;
  VAR_9 += VAR_13;
  VAR_6 -= VAR_12;
  VAR_7 -= VAR_13;

  FUNC_0();
 }

 if (VAR_7 > 0 || VAR_6 > 0) {
  FUNC_1(VAR_5->dev, "PIO transfer timed out\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_8(VAR_5);
 if (VAR_11 < 0)
  return VAR_11;

 return 0;
}
