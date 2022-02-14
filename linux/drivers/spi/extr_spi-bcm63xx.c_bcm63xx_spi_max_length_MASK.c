
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int master; } ;
struct bcm63xx_spi {size_t fifo_size; } ;


 struct bcm63xx_spi* FUNC_0 (int ) ;

__attribute__((used)) static size_t FUNC_1(struct spi_device *VAR_0)
{
 struct bcm63xx_spi *VAR_1 = FUNC_0(VAR_0->master);

 return VAR_1->fifo_size;
}
