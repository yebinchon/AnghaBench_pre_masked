
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct spi_transfer {int bits_per_word; int speed_hz; } ;
struct spi_device {int bits_per_word; int max_speed_hz; struct spi_bitbang_cs* controller_state; } ;
struct spi_bitbang_cs {int nsecs; int txrx_bufs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_0(struct spi_device *VAR_5, struct spi_transfer *VAR_6)
{
 struct spi_bitbang_cs *VAR_7 = VAR_5->controller_state;
 u8 VAR_8;
 u32 VAR_9;

 if (VAR_6) {
  VAR_8 = VAR_6->bits_per_word;
  VAR_9 = VAR_6->speed_hz;
 } else {
  VAR_8 = 0;
  VAR_9 = 0;
 }


 if (!VAR_8)
  VAR_8 = VAR_5->bits_per_word;
 if (VAR_8 <= 8)
  VAR_7->txrx_bufs = VAR_4;
 else if (VAR_8 <= 16)
  VAR_7->txrx_bufs = VAR_2;
 else if (VAR_8 <= 32)
  VAR_7->txrx_bufs = VAR_3;
 else
  return -VAR_0;


 if (!VAR_9)
  VAR_9 = VAR_5->max_speed_hz;
 if (VAR_9) {
  VAR_7->nsecs = (1000000000/2) / VAR_9;
  if (VAR_7->nsecs > (VAR_1 * 1000 * 1000))
   return -VAR_0;
 }

 return 0;
}
