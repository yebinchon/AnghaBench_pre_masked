
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tiny_spi {scalar_t__ speed_hz; int mode; int baud; } ;
struct spi_device {scalar_t__ max_speed_hz; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spi_device*,scalar_t__) ;
 struct tiny_spi* FUNC_1 (struct spi_device*) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_2)
{
 struct tiny_spi *VAR_3 = FUNC_1(VAR_2);

 if (VAR_2->max_speed_hz != VAR_3->speed_hz) {
  VAR_3->speed_hz = VAR_2->max_speed_hz;
  VAR_3->baud = FUNC_0(VAR_2, VAR_3->speed_hz);
 }
 VAR_3->mode = VAR_2->mode & (VAR_1 | VAR_0);
 return 0;
}
