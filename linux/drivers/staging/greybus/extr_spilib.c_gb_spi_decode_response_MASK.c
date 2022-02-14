
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct spi_transfer {scalar_t__ rx_buf; scalar_t__ len; } ;
struct spi_message {int dummy; } ;
struct gb_spilib {struct spi_transfer* last_xfer; scalar_t__ rx_xfer_offset; scalar_t__ last_xfer_size; struct spi_transfer* first_xfer; } ;
struct gb_spi_transfer_response {void* data; } ;


 struct spi_transfer* FUNC_0 (struct spi_transfer*,int ) ;
 int FUNC_1 (scalar_t__,void*,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct gb_spilib *VAR_1,
       struct spi_message *VAR_2,
       struct gb_spi_transfer_response *VAR_3)
{
 struct spi_transfer *VAR_4 = VAR_1->first_xfer;
 void *VAR_5 = VAR_3->data;
 u32 VAR_6;

 while (VAR_4) {

  if (VAR_4->rx_buf) {
   if (VAR_4 == VAR_1->first_xfer)
    VAR_6 = VAR_4->len - VAR_1->rx_xfer_offset;
   else if (VAR_4 == VAR_1->last_xfer)
    VAR_6 = VAR_1->last_xfer_size;
   else
    VAR_6 = VAR_4->len;

   FUNC_1(VAR_4->rx_buf + VAR_1->rx_xfer_offset, VAR_5,
          VAR_6);
   VAR_5 += VAR_6;
  }

  if (VAR_4 == VAR_1->last_xfer)
   break;

  VAR_4 = FUNC_0(VAR_4, VAR_0);
 }
}
