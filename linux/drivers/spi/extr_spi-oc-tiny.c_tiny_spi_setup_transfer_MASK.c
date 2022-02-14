
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tiny_spi {unsigned int baud; scalar_t__ speed_hz; unsigned int mode; scalar_t__ base; } ;
struct spi_transfer {scalar_t__ speed_hz; } ;
struct spi_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (struct spi_device*,scalar_t__) ;
 struct tiny_spi* FUNC_1 (struct spi_device*) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_2,
       struct spi_transfer *VAR_3)
{
 struct tiny_spi *VAR_4 = FUNC_1(VAR_2);
 unsigned int VAR_5 = VAR_4->baud;

 if (VAR_3) {
  if (VAR_3->speed_hz && VAR_3->speed_hz != VAR_4->speed_hz)
   VAR_5 = FUNC_0(VAR_2, VAR_3->speed_hz);
 }
 FUNC_2(VAR_5, VAR_4->base + VAR_0);
 FUNC_2(VAR_4->mode, VAR_4->base + VAR_1);
 return 0;
}
