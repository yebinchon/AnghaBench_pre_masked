
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {unsigned int len; int* tx_buf; int* rx_buf; } ;
struct spi_message {TYPE_1__* spi; } ;
struct sc18is602 {int tlen; int* buffer; int rindex; int client; } ;
struct TYPE_2__ {int chip_select; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int*,int*,unsigned int) ;
 int FUNC_3 (int*,int ,unsigned int) ;
 int FUNC_4 (struct sc18is602*,int) ;

__attribute__((used)) static int FUNC_5(struct sc18is602 *VAR_2, struct spi_message *VAR_3,
     struct spi_transfer *VAR_4, bool VAR_5)
{
 unsigned int VAR_6 = VAR_4->len;
 int VAR_7;

 if (VAR_2->tlen == 0) {

  VAR_2->buffer[0] = 1 << VAR_3->spi->chip_select;
  VAR_2->tlen = 1;
  VAR_2->rindex = 0;
 }





 if (VAR_4->tx_buf) {
  FUNC_2(&VAR_2->buffer[VAR_2->tlen], VAR_4->tx_buf, VAR_6);
  VAR_2->tlen += VAR_6;
  if (VAR_4->rx_buf)
   VAR_5 = 1;
  else
   VAR_2->rindex = VAR_2->tlen - 1;
 } else if (VAR_4->rx_buf) {






  VAR_2->rindex = VAR_2->tlen - 1;
  FUNC_3(&VAR_2->buffer[VAR_2->tlen], 0, VAR_6);
  VAR_2->tlen += VAR_6;
  VAR_5 = 1;
 }

 if (VAR_5 && VAR_2->tlen > 1) {
  VAR_7 = FUNC_4(VAR_2, VAR_1);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_7 = FUNC_1(VAR_2->client, VAR_2->buffer, VAR_2->tlen);
  if (VAR_7 < 0)
   return VAR_7;
  if (VAR_7 != VAR_2->tlen)
   return -VAR_0;

  if (VAR_4->rx_buf) {
   int VAR_8 = VAR_2->rindex + VAR_6;

   VAR_7 = FUNC_4(VAR_2, VAR_2->tlen);
   if (VAR_7 < 0)
    return VAR_7;
   VAR_7 = FUNC_0(VAR_2->client, VAR_2->buffer, VAR_8);
   if (VAR_7 < 0)
    return VAR_7;
   if (VAR_7 != VAR_8)
    return -VAR_0;
   FUNC_2(VAR_4->rx_buf, &VAR_2->buffer[VAR_2->rindex], VAR_6);
  }
  VAR_2->tlen = 0;
 }
 return VAR_6;
}
