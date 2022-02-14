
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int bits_per_word; unsigned int len; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dummy; } ;
struct rockchip_spi {unsigned int fifo_len; } ;


 struct rockchip_spi* FUNC_0 (struct spi_master*) ;

__attribute__((used)) static bool FUNC_1(struct spi_master *VAR_0,
     struct spi_device *VAR_1,
     struct spi_transfer *VAR_2)
{
 struct rockchip_spi *VAR_3 = FUNC_0(VAR_0);
 unsigned int VAR_4 = VAR_2->bits_per_word <= 8 ? 1 : 2;





 return VAR_2->len / VAR_4 >= VAR_3->fifo_len;
}
