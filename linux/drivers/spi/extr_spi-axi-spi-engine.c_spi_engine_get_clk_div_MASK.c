
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int speed_hz; } ;
struct spi_engine {int ref_clk; } ;
struct spi_device {int dummy; } ;


 unsigned int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct spi_engine *VAR_0,
 struct spi_device *VAR_1, struct spi_transfer *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_0(FUNC_1(VAR_0->ref_clk),
  VAR_2->speed_hz * 2);
 if (VAR_3 > 255)
  VAR_3 = 255;
 else if (VAR_3 > 0)
  VAR_3 -= 1;

 return VAR_3;
}
