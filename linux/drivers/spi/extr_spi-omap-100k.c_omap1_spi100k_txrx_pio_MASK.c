
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef void* u32 ;
typedef void* u16 ;
struct spi_transfer {unsigned int len; void** rx_buf; void** tx_buf; } ;
struct spi_device {int master; struct omap1_spi100k_cs* controller_state; } ;
struct omap1_spi100k_cs {int word_len; } ;


 void* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,void* const) ;

__attribute__((used)) static unsigned
FUNC_2(struct spi_device *VAR_0, struct spi_transfer *VAR_1)
{
 struct omap1_spi100k_cs *VAR_2 = VAR_0->controller_state;
 unsigned int VAR_3, VAR_4;
 int VAR_5;

 VAR_3 = VAR_1->len;
 VAR_4 = VAR_3;
 VAR_5 = VAR_2->word_len;

 if (VAR_5 <= 8) {
  u8 *VAR_6;
  const u8 *VAR_7;

  VAR_6 = VAR_1->rx_buf;
  VAR_7 = VAR_1->tx_buf;
  do {
   VAR_4 -= 1;
   if (VAR_1->tx_buf != ((void*)0))
    FUNC_1(VAR_0->master, VAR_5, *VAR_7++);
   if (VAR_1->rx_buf != ((void*)0))
    *VAR_6++ = FUNC_0(VAR_0->master, VAR_5);
  } while (VAR_4);
 } else if (VAR_5 <= 16) {
  u16 *VAR_8;
  const u16 *VAR_9;

  VAR_8 = VAR_1->rx_buf;
  VAR_9 = VAR_1->tx_buf;
  do {
   VAR_4 -= 2;
   if (VAR_1->tx_buf != ((void*)0))
    FUNC_1(VAR_0->master, VAR_5, *VAR_9++);
   if (VAR_1->rx_buf != ((void*)0))
    *VAR_8++ = FUNC_0(VAR_0->master, VAR_5);
  } while (VAR_4);
 } else if (VAR_5 <= 32) {
  u32 *VAR_10;
  const u32 *VAR_11;

  VAR_10 = VAR_1->rx_buf;
  VAR_11 = VAR_1->tx_buf;
  do {
   VAR_4 -= 4;
   if (VAR_1->tx_buf != ((void*)0))
    FUNC_1(VAR_0->master, VAR_5, *VAR_11);
   if (VAR_1->rx_buf != ((void*)0))
    *VAR_10 = FUNC_0(VAR_0->master, VAR_5);
  } while (VAR_4);
 }
 return VAR_3 - VAR_4;
}
