
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct spi_transfer {int tx_nbits; int rx_nbits; scalar_t__ rx_buf; scalar_t__ tx_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



__attribute__((used)) static u16 FUNC_0(const struct spi_transfer *VAR_3)
{
 if (VAR_3->tx_buf)
  switch (VAR_3->tx_nbits) {
  case 128:
   return VAR_1;
  case 129:
   return VAR_0;
  default:
   return 0;
  }
 if (VAR_3->rx_buf)
  switch (VAR_3->rx_nbits) {
  case 128:
   return VAR_1 | VAR_2;
  case 129:
   return VAR_0 | VAR_2;
  default:
   return 0;
  }

 return 0;
}
