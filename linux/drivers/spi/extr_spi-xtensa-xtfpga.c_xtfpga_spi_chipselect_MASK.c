
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xtfpga_spi {scalar_t__ data_sz; } ;
struct spi_device {int master; } ;


 int FUNC_0 (int) ;
 struct xtfpga_spi* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct spi_device *VAR_0, int VAR_1)
{
 struct xtfpga_spi *VAR_2 = FUNC_1(VAR_0->master);

 FUNC_0(VAR_2->data_sz != 0);
 VAR_2->data_sz = 0;
}
