
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int mode; size_t chip_select; int master; } ;
struct efm32_spi_ddata {int * csgpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 struct efm32_spi_ddata* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct spi_device *VAR_2, int VAR_3)
{
 struct efm32_spi_ddata *VAR_4 = FUNC_1(VAR_2->master);
 int VAR_5 = !(VAR_2->mode & VAR_1) == !(VAR_3 == VAR_0);

 FUNC_0(VAR_4->csgpio[VAR_2->chip_select], VAR_5);
}
