
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {scalar_t__ len; } ;
struct gb_spilib {scalar_t__ tx_xfer_offset; scalar_t__ last_xfer_size; scalar_t__ rx_xfer_offset; struct spi_transfer* last_xfer; } ;



__attribute__((used)) static bool FUNC_0(struct gb_spilib *VAR_0)
{
 struct spi_transfer *VAR_1 = VAR_0->last_xfer;

 if ((VAR_0->tx_xfer_offset + VAR_0->last_xfer_size == VAR_1->len) ||
     (VAR_0->rx_xfer_offset + VAR_0->last_xfer_size == VAR_1->len))
  return 1;

 return 0;
}
