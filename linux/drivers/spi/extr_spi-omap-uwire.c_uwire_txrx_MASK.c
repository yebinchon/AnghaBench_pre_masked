
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct spi_transfer {unsigned int len; unsigned int bits_per_word; int * rx_buf; int * tx_buf; } ;
struct spi_device {int chip_select; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,unsigned int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int,int,int) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_8, struct spi_transfer *VAR_9)
{
 unsigned VAR_10 = VAR_9->len;
 unsigned VAR_11 = VAR_9->bits_per_word;
 unsigned VAR_12;
 u16 VAR_13, VAR_14;
 int VAR_15 = 0;

 if (!VAR_9->tx_buf && !VAR_9->rx_buf)
  return 0;

 VAR_14 = VAR_8->chip_select << 10;
 VAR_14 |= VAR_1;

 if (VAR_9->tx_buf) {
  const u8 *VAR_16 = VAR_9->tx_buf;




  while (VAR_10 >= 1) {



   VAR_13 = *VAR_16++;
   if (VAR_11 > 8) {
    VAR_12 = 2;
    VAR_13 |= *VAR_16++ << 8;
   } else
    VAR_12 = 1;
   VAR_13 <<= 16 - VAR_11;





   if (FUNC_4(VAR_0, 0, 0))
    goto eio;

   FUNC_3(VAR_7, VAR_13);


   VAR_13 = VAR_4 | VAR_14 | (VAR_11 << 5);

   FUNC_3(VAR_5, VAR_13);
   VAR_10 -= VAR_12;





   if (FUNC_4(VAR_0, VAR_0, 1))
    goto eio;

   VAR_15 += VAR_12;
  }


  if (FUNC_4(VAR_0, 0, 0))
   goto eio;

 } else if (VAR_9->rx_buf) {
  u8 *VAR_17 = VAR_9->rx_buf;


  while (VAR_10) {
   if (VAR_11 > 8) {
    VAR_12 = 2;
   } else
    VAR_12 = 1;


   VAR_13 = VAR_4 | VAR_14 | (VAR_11 << 0);
   FUNC_3(VAR_5, VAR_13);
   VAR_10 -= VAR_12;


   (void) FUNC_4(VAR_0, VAR_0, 1);

   if (FUNC_4(VAR_3 | VAR_0,
      VAR_3, 0))
    goto eio;




   VAR_13 = FUNC_2(VAR_6);
   VAR_13 &= (1 << VAR_11) - 1;
   *VAR_17++ = (u8) VAR_13;
   if (VAR_12 == 2)
    *VAR_17++ = VAR_13 >> 8;
   VAR_15 += VAR_12;





  }
 }
 return VAR_15;
eio:
 return -VAR_2;
}
