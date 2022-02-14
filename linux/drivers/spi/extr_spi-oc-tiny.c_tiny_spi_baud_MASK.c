
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tiny_spi {unsigned int baudwidth; int freq; } ;
struct spi_device {int dummy; } ;


 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 struct tiny_spi* FUNC_2 (struct spi_device*) ;

__attribute__((used)) static unsigned int FUNC_3(struct spi_device *VAR_0, unsigned int VAR_1)
{
 struct tiny_spi *VAR_2 = FUNC_2(VAR_0);

 return FUNC_1(FUNC_0(VAR_2->freq, VAR_1 * 2), (1U << VAR_2->baudwidth)) - 1;
}
