
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int bits_per_word; } ;
struct spi_device {int dummy; } ;
struct spi_controller {int dma_rx; } ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct spi_controller *VAR_0,
         struct spi_device *VAR_1,
         struct spi_transfer *VAR_2)
{
 unsigned int VAR_3;

 if (!VAR_0->dma_rx)
  return 0;

 VAR_3 = FUNC_0(VAR_2->bits_per_word);

 switch (VAR_3)
 {
  case 1:
  case 2:
  case 4:
   break;
  default:
   return 0;
 }

 return 1;
}
