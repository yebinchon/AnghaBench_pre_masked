
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lantiq_ssc_spi {unsigned int tx_fifo_size; } ;


 unsigned int FUNC_0 (struct lantiq_ssc_spi const*) ;

__attribute__((used)) static unsigned int FUNC_1(const struct lantiq_ssc_spi *VAR_0)
{
 return VAR_0->tx_fifo_size - FUNC_0(VAR_0);
}
