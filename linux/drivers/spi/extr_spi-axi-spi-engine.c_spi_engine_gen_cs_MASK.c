
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_engine_program {int dummy; } ;
struct spi_device {int chip_select; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int,unsigned int) ;
 int FUNC_2 (struct spi_engine_program*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct spi_engine_program *VAR_0, bool VAR_1,
  struct spi_device *VAR_2, bool VAR_3)
{
 unsigned int VAR_4 = 0xff;

 if (VAR_3)
  VAR_4 ^= FUNC_0(VAR_2->chip_select);

 FUNC_2(VAR_0, VAR_1, FUNC_1(1, VAR_4));
}
